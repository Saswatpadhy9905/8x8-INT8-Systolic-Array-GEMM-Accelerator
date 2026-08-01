`timescale 1ns/1ps
// ============================================================================
// controller.sv  -  FSM that sequences one GEMM output tile
// ----------------------------------------------------------------------------
// PURPOSE:
//   The controller is the "brain" / traffic cop. The datapath (array, buffers)
//   does not know WHEN to do anything by itself. The controller decides, cycle
//   by cycle:
//     * when to clear the accumulators (start of a tile),
//     * which K-slice to feed next (k_idx address into the A/B memories),
//     * when the array should be enabled,
//     * how long to wait for data to drain through the array,
//     * when the result is ready to capture,
//     * and when the whole job is done.
//   It also runs the performance counters we must report (cycle_count).
//
// SCOPE (kept simple on purpose):
//   This version sequences ONE 8x8 output tile with contraction depth K.
//   Multi-tile GEMM = wrap this same sequence in tileM/tileN loops (Week 2/5).
//
// FSM:
//   IDLE -> COMPUTE(K cycles) -> DRAIN(ROWS+COLS cycles) -> DONE -> IDLE
//   (clear_acc is asserted on the very first COMPUTE cycle, k_idx == 0)
// ============================================================================
`include "sa_pkg.sv"

module controller
  import sa_pkg::*;
(
  input  logic              clk,
  input  logic              rst_n,
  input  logic              start,        // pulse to begin one tile
  input  logic [DIM_W-1:0]  K,            // contraction depth for this tile

  output logic              array_en,     // enable the PE array
  output logic              clear_acc,    // clear accumulators (start of tile)
  output logic [DIM_W-1:0]  k_idx,        // which K-slice to feed this cycle
  output logic              feed_valid,   // is k_idx a real slice to feed?
  output logic              capture,      // latch results into output buffer
  output logic              busy,         // high while working
  output logic              done,         // one-cycle pulse when finished
  output logic [31:0]       cycle_count   // total cycles for this tile (metric)
);

  // Number of cycles to let the last data ripple to the far PE corner.
  localparam int DRAIN_CYCLES = ARRAY_ROWS + ARRAY_COLS;

  state_e            state, next_state;
  logic [DIM_W-1:0]  k_cnt;        // counts K compute steps
  logic [DIM_W-1:0]  drain_cnt;    // counts drain cycles
  logic [31:0]       cyc;          // performance counter

  // ----- State register --------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) state <= ST_IDLE;
    else        state <= next_state;
  end

  // ----- Next-state logic ------------------------------------------------
  always_comb begin
    next_state = state;
    unique case (state)
      ST_IDLE:    if (start)                       next_state = ST_COMPUTE;
      ST_COMPUTE: if (k_cnt == K - 1)              next_state = ST_DRAIN;
      ST_DRAIN:   if (drain_cnt ==16'( DRAIN_CYCLES-1)) next_state = ST_DONE;
      ST_DONE:                                     next_state = ST_IDLE;
      default:                                     next_state = ST_IDLE;
    endcase
  end

  // ----- Counters --------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      k_cnt     <= '0;
      drain_cnt <= '0;
      cyc       <= '0;
    end else begin
      // Compute-step counter
      if (state == ST_COMPUTE) k_cnt <= k_cnt + 1'b1;
      else                     k_cnt <= '0;

      // Drain counter
      if (state == ST_DRAIN)   drain_cnt <= drain_cnt + 1'b1;
      else                     drain_cnt <= '0;

      // Total-cycle performance counter (runs while busy)
      if (state == ST_IDLE)    cyc <= '0;
      else                     cyc <= cyc + 1'b1;
    end
  end

  // ----- Outputs (Moore-style, decoded from state) -----------------------
  always_comb begin
    array_en   = 1'b0;
    clear_acc  = 1'b0;
    feed_valid = 1'b0;
    k_idx      = k_cnt;
    capture    = 1'b0;
    busy       = (state != ST_IDLE);
    done       = (state == ST_DONE);

    unique case (state)
      ST_COMPUTE: begin
        array_en   = 1'b1;
        feed_valid = 1'b1;
        k_idx      = k_cnt;
        clear_acc  = (k_cnt == 0);   // fresh accumulation on the first slice
      end
      ST_DRAIN: begin
        // Keep the array running so data finishes flowing; feed zeros.
        array_en   = 1'b1;
        feed_valid = 1'b0;
      end
      ST_DONE: begin
        capture    = 1'b1;   // snapshot the finished tile
      end
      default: ; // IDLE: all outputs at defaults
    endcase
  end

  assign cycle_count = cyc;

endmodule : controller
