`timescale 1ns/1ps
// ============================================================================
// systolic_array.sv  -  8x8 grid of output-stationary PEs
// ----------------------------------------------------------------------------
// Wires 64 PEs into a mesh:
//   * Activations enter on the WEST edge (a_west[row]) and flow east.
//   * Weights enter on the NORTH edge (b_north[col]) and flow south.
//   * Each PE exposes its int32 accumulator; all 64 are flattened into c_out.
//
// Index convention: row = i (0..ROWS-1), col = j (0..COLS-1).
//   c_out element for PE[i][j] occupies c_out[(i*COLS + j)].
// ============================================================================

`include "sa_pkg.sv"

module systolic_array
  import sa_pkg::*;
(
  input  logic clk,
  input  logic rst_n,
  input  logic en,
  input  logic clear_acc_west [ARRAY_ROWS],
  // West edge: one activation per row
  input  logic signed [IN_W-1:0]  a_west  [ARRAY_ROWS],
  // North edge: one weight per column
  input  logic signed [IN_W-1:0]  b_north [ARRAY_COLS],
  // All accumulators, flattened row-major
  output logic signed [ACC_W-1:0] c_out   [NUM_PE]
);

  // Horizontal wires: a_h[i][j] feeds PE[i][j] from the left.
  // We need COLS+1 columns of wires so a_h[i][COLS] is the (unused) east output.
  logic signed [IN_W-1:0] a_h [ARRAY_ROWS][ARRAY_COLS+1];
  // Vertical wires: b_v[i][j] feeds PE[i][j] from the top.
  logic signed [IN_W-1:0] b_v [ARRAY_ROWS+1][ARRAY_COLS];
  logic ca_h [ARRAY_ROWS][ARRAY_COLS+1];
  genvar i, j;
  generate
    // Drive the west and north edges from the module inputs.
    for (i = 0; i < ARRAY_ROWS; i++) begin : g_west_edge
      assign a_h[i][0] = a_west[i];
      assign ca_h[i][0] = clear_acc_west[i];
    end
    for (j = 0; j < ARRAY_COLS; j++) begin : g_north_edge
      assign b_v[0][j] = b_north[j];
    end

    // Instantiate the PE mesh.
    for (i = 0; i < ARRAY_ROWS; i++) begin : g_row
      for (j = 0; j < ARRAY_COLS; j++) begin : g_col
        pe u_pe (
          .clk       (clk),
          .rst_n     (rst_n),
          .en        (en),
          .clear_acc_in  (ca_h[i][j]),       
          .clear_acc_out (ca_h[i][j+1]),
          .a_in      (a_h[i][j]),
          .b_in      (b_v[i][j]),
          .a_out     (a_h[i][j+1]),   // to right neighbor
          .b_out     (b_v[i+1][j]),   // to bottom neighbor
          .acc_out   (c_out[i*ARRAY_COLS + j])
        );
      end
    end
  endgenerate

endmodule : systolic_array
