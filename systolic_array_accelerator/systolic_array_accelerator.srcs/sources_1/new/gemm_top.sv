`timescale 1ns/1ps
// ============================================================================
// gemm_top.sv  -  Top level: ties the whole accelerator together
// ----------------------------------------------------------------------------
// PURPOSE:
//   This is the chip's "front door". It instantiates and wires:
//       controller  (the brain / FSM)
//       A and B tile memories (SRAM-style storage for one output tile)
//       skew buffers (A and B)  -> create the diagonal stagger
//       systolic_array          -> the 64-PE compute fabric
//       output_buffer           -> snapshot the finished C tile
//
//   It also exposes simple LOAD ports so a testbench (or DMA) can fill the
//   A and B tile memories one element per cycle before pressing 'start'.
//
// ONE-TILE OPERATION (matches controller.sv scope):
//   1. Testbench loads A (8 x K) and B (K x 8) via the load ports.
//   2. Pulse 'start' with K set.
//   3. Controller streams K slices through the skewed array, drains, captures.
//   4. 'done' pulses; 'c_valid' goes high; read c_tile[0..63].
// ============================================================================
`include "sa_pkg.sv"

module gemm_top
  import sa_pkg::*;
(
  input  logic              clk,
  input  logic              rst_n,

  // ----- Control -----------------------------------------------------------
  input  logic              start,
  input  logic [DIM_W-1:0]  K,

  // ----- Load port for A tile (8 rows x K) ---------------------------------
  input  logic              ld_a_en,
  input  logic [$clog2(ARRAY_ROWS)-1:0] ld_a_row,
  input  logic [DIM_W-1:0]              ld_a_k,
  input  logic signed [IN_W-1:0]        ld_a_data,

  // ----- Load port for B tile (K rows x 8 cols) ----------------------------
  input  logic              ld_b_en,
  input  logic [DIM_W-1:0]              ld_b_k,
  input  logic [$clog2(ARRAY_COLS)-1:0] ld_b_col,
  input  logic signed [IN_W-1:0]        ld_b_data,

  // ----- Results -----------------------------------------------------------
  output logic signed [ACC_W-1:0] c_tile [NUM_PE],
  output logic              c_valid,
  output logic              busy,
  output logic              done,
  output logic [31:0]       cycle_count
);

  // ----- SRAM-style tile memories ------------------------------------------
  // A: one value per (row, k).  B: one value per (k, col).
  logic signed [IN_W-1:0] a_mem [ARRAY_ROWS][MAX_K];
  logic signed [IN_W-1:0] b_mem [MAX_K][ARRAY_COLS];

  always_ff @(posedge clk) begin
    if (ld_a_en) a_mem[3'(ld_a_row)][9'(ld_a_k)] <= ld_a_data;
    if (ld_b_en) b_mem[9'(ld_b_k)][3'(ld_b_col)] <= ld_b_data;
  end

  // ----- Controller --------------------------------------------------------
  logic             array_en, clear_acc, feed_valid, capture;
  logic [DIM_W-1:0] k_idx;

  controller u_ctrl (
    .clk        (clk),
    .rst_n      (rst_n),
    .start      (start),
    .K          (K),
    .array_en   (array_en),
    .clear_acc  (clear_acc),
    .k_idx      (k_idx),
    .feed_valid (feed_valid),
    .capture    (capture),
    .busy       (busy),
    .done       (done),
    .cycle_count(cycle_count)
  );

  // ----- Fetch the current K-slice (unskewed) ------------------------------
  logic signed [IN_W-1:0] a_unskewed [ARRAY_ROWS];
  logic signed [IN_W-1:0] b_unskewed [ARRAY_COLS];

  always_comb begin
    for (int i = 0; i < ARRAY_ROWS; i++)
      a_unskewed[i] = feed_valid ? a_mem[3'(i)][9'(k_idx)] : '0;
    for (int j = 0; j < ARRAY_COLS; j++)
      b_unskewed[j] = feed_valid ? b_mem[9'(k_idx)][3'(j)] : '0;
  end

  // ----- Skew buffers ------------------------------------------------------
  logic signed [IN_W-1:0] a_skewed [ARRAY_ROWS];
  logic signed [IN_W-1:0] b_skewed [ARRAY_COLS];

  skew_buffer #(.LANES(ARRAY_ROWS), .W(IN_W)) u_skew_a (
    .clk(clk), .rst_n(rst_n), .en(array_en),
    .din(a_unskewed), .dout(a_skewed)
  );

  skew_buffer #(.LANES(ARRAY_COLS), .W(IN_W)) u_skew_b (
    .clk(clk), .rst_n(rst_n), .en(array_en),
    .din(b_unskewed), .dout(b_skewed)
  );

  // 1. Fan out the single pulse to an unskewed array
 logic signed [0:0] clear_acc_unskewed [ARRAY_ROWS];
  always_comb begin
    for (int i = 0; i < ARRAY_ROWS; i++) begin
      clear_acc_unskewed[i] = clear_acc; // from controller
    end
  end

  // 2. Skew the clear signal (1-bit wide)
 logic signed [0:0] clear_acc_skewed [ARRAY_ROWS];
  skew_buffer #(.LANES(ARRAY_ROWS), .W(1)) u_skew_clear (
    .clk(clk), .rst_n(rst_n), .en(array_en),
    .din(clear_acc_unskewed), .dout(clear_acc_skewed)
  );
  logic clear_acc_skewed_unsigned [ARRAY_ROWS];
  always_comb begin
    for (int i = 0; i < ARRAY_ROWS; i++) begin
      clear_acc_skewed_unsigned[i] = clear_acc_skewed[i];
    end
  end
  // ----- Systolic array ----------------------------------------------------
  logic signed [ACC_W-1:0] c_live [NUM_PE];

  // 3. Pass it to the array (replacing .clear_acc(clear_acc))
  // (Ensure there is only ONE systolic_array instantiation in this file)
  systolic_array u_array (
    .clk(clk), .rst_n(rst_n),
    .en(array_en), 
    .clear_acc_west(clear_acc_skewed_unsigned), 
    .a_west(a_skewed), .b_north(b_skewed),
    .c_out(c_live)
  );

  // ----- Output buffer -----------------------------------------------------
  output_buffer u_obuf (
    .clk(clk), .rst_n(rst_n),
    .capture(capture),
    .c_in(c_live),
    .c_tile(c_tile),
    .valid(c_valid)
  );

endmodule : gemm_top
