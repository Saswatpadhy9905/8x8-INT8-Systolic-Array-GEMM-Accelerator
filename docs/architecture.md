# 8x8 INT8 Systolic Array GEMM Accelerator — Architecture & Skeleton Guide

This document is your **project blueprint**. It explains the dataflow, the module
hierarchy, the interface signals, and how every file fits together. Read this top
to bottom and you will understand *why* each file exists before you write it.

---

## 1. What we are building

A hardware accelerator that computes a tiled matrix multiply:

```
C[M x N] = A[M x K] * B[K x N]
```

- Inputs `A` and `B` are **int8** (signed, -128..127).
- Multiply-accumulate happens in **int32** so we never overflow inside a tile.
- The compute fabric is an **8x8 grid of Processing Elements (PEs)**.
- Big matrices are broken into **8x8 output tiles**; a controller streams tiles
  through the array.

### Why these choices (interview answers)
- **int8 in, int32 accumulate**: int8 is the standard inference datatype. A single
  int8*int8 product fits in 16 bits; accumulating up to K of them needs more bits.
  int32 gives headroom for K up to ~2^17 before any risk — safe and simple.
- **8x8 array**: 64 MACs is a sweet spot — large enough to show real parallelism,
  small enough to synthesize on a student/eval FPGA and to debug by hand.
- **Output-stationary dataflow**: each PE owns one output element `C[i][j]` and
  accumulates it in place. Easiest to verify because each accumulator maps 1:1 to a
  golden-model value.

---

## 2. Dataflow: output-stationary

Each PE[i][j] computes one output element:

```
C[i][j] = sum over k of  A[i][k] * B[k][j]
```

- **Activations (A)** flow **left -> right**, one row per array row.
- **Weights (B)** flow **top -> bottom**, one column per array column.
- Inputs are **skewed (diagonally staggered)** so that the correct A and B elements
  meet inside each PE on the same cycle.

```
            B columns flow downward
            b0   b1   b2  ...  b7
            |    |    |         |
   a0 -->  PE---PE---PE--...---PE
   a1 -->  PE---PE---PE--...---PE
   a2 -->  PE---PE---PE--...---PE
    .       .    .    .         .
   a7 -->  PE---PE---PE--...---PE

   Each PE: acc += a_in * b_in;  pass a_in right, b_in down.
```

### Skewing (why we need it)
PE[i][j] must receive `A[i][k]` and `B[k][j]` on the same cycle. Because data takes
`i` cycles to travel to row `i` and `j` cycles to reach column `j`, we delay row `i`
of A by `i` cycles and column `j` of B by `j` cycles at the inputs. The input buffers
implement this staircase delay.

---

## 3. Module hierarchy

```
gemm_top.sv                 <- top level: wires everything together
├── controller.sv           <- FSM: walks tiles, drives load/compute/drain, counts cycles
├── input_buffer_a.sv        <- SRAM-style buffer + skew for A (feeds rows from the left)
├── input_buffer_b.sv        <- SRAM-style buffer + skew for B (feeds cols from the top)
├── systolic_array.sv        <- 8x8 grid; instantiates 64 PEs and wires neighbors
│   └── pe.sv                <- one Processing Element (MAC + pass-through regs)
└── output_buffer.sv         <- collects int32 results from the array, writes them out
```

Shared definitions live in `rtl/sa_pkg.sv` (array size, data widths, FSM states).

---

## 4. Interface signals (contract for each module)

### pe.sv — Processing Element
| Signal      | Dir | Width | Meaning                                              |
|-------------|-----|-------|------------------------------------------------------|
| clk         | in  | 1     | clock                                                |
| rst_n       | in  | 1     | async active-low reset                               |
| en          | in  | 1     | when 1, PE advances (MAC + shift)                    |
| clear_acc   | in  | 1     | when 1 with en, start a new accumulation (load)      |
| a_in        | in  | 8     | activation from left neighbor (signed)               |
| b_in        | in  | 8     | weight from top neighbor (signed)                    |
| a_out       | out | 8     | registered a_in, to right neighbor                   |
| b_out       | out | 8     | registered b_in, to bottom neighbor                  |
| acc_out     | out | 32    | current accumulator value (signed)                   |

### systolic_array.sv — 8x8 grid
| Signal       | Dir | Width      | Meaning                                  |
|--------------|-----|------------|------------------------------------------|
| clk, rst_n   | in  | 1          | clock / reset                            |
| en           | in  | 1          | enable all PEs                           |
| clear_acc    | in  | 1          | broadcast clear to start a new tile      |
| a_west       | in  | 8*8        | 8 activation inputs (one per row)        |
| b_north      | in  | 8*8        | 8 weight inputs (one per column)         |
| c_out        | out | 32*8*8     | 64 accumulators (flattened)              |

### controller.sv — FSM
| Signal       | Dir | Width | Meaning                                            |
|--------------|-----|-------|----------------------------------------------------|
| clk, rst_n   | in  | 1     | clock / reset                                      |
| start        | in  | 1     | pulse to begin a GEMM                               |
| M, N, K      | in  | 16    | matrix dimensions                                   |
| busy         | out | 1     | high while computing                                |
| done         | out | 1     | one-cycle pulse when the whole GEMM finishes        |
| array_en     | out | 1     | enable to the array                                 |
| clear_acc    | out | 1     | start-of-tile accumulator clear                     |
| cycle_count  | out | 32    | performance counter (total cycles)                  |

(Buffer interfaces are documented inline in their own files.)

---

## 5. Controller FSM (states)

```
IDLE  --start-->  LOAD  -->  COMPUTE  -->  DRAIN  -->  NEXT_TILE
  ^                                                        |
  |________________ all tiles done (done=1) _______________|
```

- **IDLE**: wait for `start`. Latch M, N, K. Compute tile counts:
  `tilesM = ceil(M/8)`, `tilesN = ceil(N/8)`, `tilesK = ceil(K/8)`.
- **LOAD**: clear accumulators (`clear_acc=1`) and begin streaming the first
  K-slice of A and B for the current (tileM, tileN).
- **COMPUTE**: stream all K elements through the array (`array_en=1`). Accumulate
  across all K-tiles for this output tile.
- **DRAIN**: let the last data ripple to the far PEs; latch the 64 results.
- **NEXT_TILE**: advance (tileN, then tileM). When all tiles done, pulse `done`.

---

## 6. Performance counters (metrics we must report)

The controller maintains counters that the testbench reads out:
- `cycle_count`      — total cycles from start to done -> **total latency**
- `cycles_per_tile`  — measured per output tile
- `mac_active_count` — cycles each PE actually did a useful MAC

From these we compute (in the testbench / a Python script):
- **MAC utilization %** = useful_MACs / (64 * total_cycles)
- **GOPS** = (2 * M * N * K) / (total_cycles / f_clock) / 1e9
  (factor 2 = one multiply + one add per MAC)

---

## 7. Verification architecture

```
verification/golden_model.py   <- NumPy GEMM, the reference truth
tb/tb_pe.sv                     <- Week 1 directed test for a single PE
tb/tb_gemm_top.sv               <- self-checking TB: random sizes, scoreboard, asserts
tb/scoreboard.sv (later)        <- compares DUT c_out vs golden
```

Flow: Python generates random A, B and the expected C (saved to hex files). The
SystemVerilog testbench loads A, B, drives the DUT, captures C, and compares against
the golden C. Assertions check the handshake, array bounds, and `done` timing.
Functional coverage tracks tile sizes, stall events, and edge cases.

---

## 8. 6-week mapping to files

| Week | Deliverable                          | Files                                            |
|------|--------------------------------------|--------------------------------------------------|
| 1    | spec, dataflow, PE RTL, directed test| this doc, sa_pkg.sv, pe.sv, tb_pe.sv             |
| 2    | full array + controller + tiling     | systolic_array.sv, controller.sv, buffers, top   |
| 3    | golden model + scoreboard + random   | golden_model.py, scoreboard.sv, tb_gemm_top.sv   |
| 4    | assertions + coverage + bug fixing   | assertions in TB, covergroups, bug log           |
| 5    | FPGA synth + counters + measurement  | synthesis/ scripts, metrics report               |
| 6    | optimization + final docs            | optimized RTL, results table, this doc updated   |

> You already have Week 1 + the skeleton for everything else in this repo. Start by
> reading `pe.sv`, then run `tb_pe.sv`, then move outward to the array.
