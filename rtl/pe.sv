// ============================================================================
// pe.sv  -  Processing Element (one MAC cell of the systolic array)
// ----------------------------------------------------------------------------
// Output-stationary PE:
//   * Holds one int32 accumulator for one output element C[i][j].
//   * Each enabled cycle: multiply a_in * b_in (int8 * int8 -> int16),
//     add into the accumulator, and pass a_in to the right and b_in down.
//   * clear_acc starts a fresh accumulation (use it at the start of a new tile).
//
// Timing: a_out / b_out are registered copies of a_in / b_in, so data takes
// exactly one cycle to move to a neighbor. This 1-cycle hop is what makes the
// diagonal skew at the inputs line up correctly inside every PE.
// ============================================================================
`include "sa_pkg.sv"

module pe
  import sa_pkg::*;
(
  input  logic                 clk,
  input  logic                 rst_n,
  input  logic                 en,         // advance this PE
  input  logic                 clear_acc,  // start a new accumulation
  input  logic signed [IN_W-1:0]  a_in,    // activation from left
  input  logic signed [IN_W-1:0]  b_in,    // weight from top
  output logic signed [IN_W-1:0]  a_out,   // to right neighbor (registered)
  output logic signed [IN_W-1:0]  b_out,   // to bottom neighbor (registered)
  output logic signed [ACC_W-1:0] acc_out  // current accumulator value
);

  // int8 * int8 -> int16 product (signed)
  logic signed [MUL_W-1:0] product;
  assign product = a_in * b_in;

  // Accumulator + pass-through pipeline registers
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      acc_out <= '0;
      a_out   <= '0;
      b_out   <= '0;
    end else if (en) begin
      // Pass operands to neighbors (1-cycle hop).
      a_out <= a_in;
      b_out <= b_in;
      // Accumulate, or restart accumulation on clear_acc.
      if (clear_acc)
        acc_out <= ACC_W'(product);
      else
        acc_out <= acc_out + ACC_W'(product);
    end
  end

endmodule : pe
