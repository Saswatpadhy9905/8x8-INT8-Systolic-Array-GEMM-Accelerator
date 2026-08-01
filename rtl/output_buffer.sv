// ============================================================================
// output_buffer.sv  -  Capture the 64 results when a tile finishes
// ----------------------------------------------------------------------------
// PURPOSE:
//   While the array is computing, the 64 accumulators (c_in) keep changing.
//   When the controller asserts 'capture' (after the DRAIN settles), this
//   module latches all 64 int32 values into a stable register file so the
//   rest of the system / testbench can read the finished C tile.
//
//   Think of it as the "result snapshot" stage: SRAM-style storage that holds
//   one 8x8 output tile.
// ============================================================================
`include "sa_pkg.sv"

module output_buffer
  import sa_pkg::*;
(
  input  logic                      clk,
  input  logic                      rst_n,
  input  logic                      capture,            // latch results now
  input  logic signed [ACC_W-1:0]   c_in  [NUM_PE],     // live accumulators
  output logic signed [ACC_W-1:0]   c_tile[NUM_PE],     // latched result tile
  output logic                      valid               // high once captured
);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      valid <= 1'b0;
      for (int k = 0; k < NUM_PE; k++) c_tile[k] <= '0;
    end else if (capture) begin
      valid <= 1'b1;
      for (int k = 0; k < NUM_PE; k++) c_tile[k] <= c_in[k];
    end
  end

endmodule : output_buffer
