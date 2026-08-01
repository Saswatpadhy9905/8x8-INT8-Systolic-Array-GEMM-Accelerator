# 8x8 INT8 Systolic-Array GEMM Accelerator

This repository implements an 8x8 output-stationary systolic-array hardware
accelerator that computes tiled integer GEMM (matrix multiply) with int8
inputs and int32 accumulation. The design is aimed at teaching, FPGA
experimentation, and verification using SystemVerilog testbenches and a
NumPy-based golden model.

## Key ideas
- Inputs A and B are signed int8 (-128..127). Products are accumulated in
  signed int32 accumulators to avoid overflow within reasonable K sizes.
- The compute fabric is an 8x8 grid of Processing Elements (PEs). Each PE
  holds one accumulator (output-stationary) and passes A values right and B
  values down.
- Matrices are tiled in 8x8 output tiles; a controller streams tiles through
  the array. Skew buffers ensure matching operands meet in each PE, and control 
  signals (like the accumulator clear pulse) are fully pipelined and skewed 
  alongside the data to guarantee perfectly synchronized wavefront execution.

## Repository layout
- `rtl/`: SystemVerilog RTL (PE, array, controller, buffers, top-level)
- `tb/`: SystemVerilog testbenches (tb_gemm_top.sv, directed PE tests)
- `sim/`: run scripts and Makefile to build and run simulations
- `verification/`: Python golden model and test-vector generator

## Quick start
1. Generate golden vectors (default M=N=K=16):

    ```bash
    python verification/golden_model.py --M 16 --N 16 --K 16 --seed 1 --out sim
    ```

2. Run the simulation (Linux/macOS):

    ```bash
    # from repo root
    cd sim
    make verilator    # or make questa if you have ModelSim/Questa
    ```

    On Windows you can use the helper script:

    ```powershell
    ./sim/run.ps1            # regenerates vectors and runs with Verilator or Questa
    ./sim/run.ps1 -M 32 -N 16 -K 24
    ```

## Notes
- The `verification/golden_model.py` script writes `a.hex`, `b.hex`, and
  `c_golden.hex` (two's-complement fixed-width hex) plus `dims.txt` into
  the `sim/` directory; the SystemVerilog TBs load those files via
  `$readmemh`.
- The preferred datapath width and array dimensions are defined in
  `rtl/sa_pkg.sv`.

## Next steps
- Run `tb/tb_pe.sv` first (directed single-PE tests), then `tb/tb_gemm_top.sv`.
- Read the Architecture & Skeleton Guide for detailed block diagrams and module contracts.
- Synthesize the design Out-Of-Context (OOC) in Vivado to verify DSP48E1 slice and LUT mapping on Xilinx Artix-7 FPGAs.

## Contact
Open an issue for help running simulations, extending the RTL,
or adding tests.