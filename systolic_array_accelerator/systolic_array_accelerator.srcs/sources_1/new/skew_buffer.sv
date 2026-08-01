// ============================================================================
// skew_buffer.sv  -  Diagonal "staircase" delay for array inputs
// ----------------------------------------------------------------------------
// PURPOSE:
//   The systolic array needs its inputs skewed: lane 0 enters immediately,
//   lane 1 is delayed by 1 cycle, lane 2 by 2 cycles, ... lane N-1 by N-1.
//   This module takes N values in parallel and outputs them with that
//   increasing per-lane delay, so the correct A and B values meet inside
//   every PE on the same cycle.
//
//   Used twice in the design:
//     * For A : LANES = ARRAY_ROWS  (delay row i by i cycles)
//     * For B : LANES = ARRAY_COLS  (delay col j by j cycles)
//
// HOW IT WORKS:
//   Lane i passes through a shift register that is i stages long.
//   Lane 0 has 0 stages (straight wire), lane 1 has 1 register, etc.
//   This forms a triangular block of registers (the "staircase").
// ============================================================================
`include "sa_pkg.sv"

module skew_buffer
  import sa_pkg::*;
#(
  parameter int LANES = ARRAY_ROWS,   // number of parallel lanes
  parameter int W     = IN_W          // bit width of each lane
)(
  input  logic                     clk,
  input  logic                     rst_n,
  input  logic                     en,                 // shift enable
  input  logic signed [W-1:0]      din  [LANES],       // unskewed inputs
  output logic signed [W-1:0]      dout [LANES]        // skewed outputs
);

  genvar i, s;
  generate
    for (i = 0; i < LANES; i++) begin : g_lane
      if (i == 0) begin : g_passthrough
        // Lane 0: no delay, straight through.
        assign dout[0] = din[0];
      end else begin : g_delay
        // Lane i: a chain of i registers.
        logic signed [W-1:0] pipe [i];

        always_ff @(posedge clk or negedge rst_n) begin
          if (!rst_n) begin
            for (int k = 0; k < i; k++) pipe[k] <= '0;
          end else if (en) begin
            pipe[0] <= din[i];                 // newest sample enters stage 0
            for (int k = 1; k < i; k++)
              pipe[k] <= pipe[k-1];            // shuffle down the chain
          end
        end

        assign dout[i] = pipe[i-1];            // oldest sample (delayed by i)
      end
    end
  endgenerate

endmodule : skew_buffer
