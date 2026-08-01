// ============================================================================
// tb_pe.sv  -  Week 1 directed testbench for a single Processing Element
// ----------------------------------------------------------------------------
// Goal: prove the PE math and timing before we build the whole array.
// Checks:
//   * Reset clears the accumulator and the pass-through registers.
//   * clear_acc loads a fresh product (starts a new accumulation).
//   * Subsequent enabled cycles accumulate correctly (signed int32).
//   * a_out / b_out are the previous cycle's a_in / b_in (1-cycle hop).
//   * Signed multiply works for negative operands.
//
// Run (Questa/ModelSim):
//   vlog ../rtl/sa_pkg.sv ../rtl/pe.sv tb_pe.sv && vsim -c tb_pe -do "run -all; quit"
// Run (Verilator): verilator --binary --timing tb_pe.sv ../rtl/pe.sv && ./obj_dir/Vtb_pe
// ============================================================================
`timescale 1ns/1ps
`include "sa_pkg.sv"

module tb_pe
  import sa_pkg::*;
;
  logic                  clk, rst_n, en, clear_acc;
  logic signed [IN_W-1:0]  a_in, b_in, a_out, b_out;
  logic signed [ACC_W-1:0] acc_out;

  int unsigned errors = 0;
  logic signed [ACC_W-1:0] expected_acc;

  // DUT
  pe dut (
    .clk(clk), .rst_n(rst_n), .en(en), .clear_acc(clear_acc),
    .a_in(a_in), .b_in(b_in),
    .a_out(a_out), .b_out(b_out), .acc_out(acc_out)
  );

  // 100 MHz clock
  initial clk = 0;
  always #5 clk = ~clk;

  // Simple checker task
  task automatic check(string name, longint got, longint exp);
    if (got !== exp) begin
      errors++;
      $display("[FAIL] %-28s got=%0d exp=%0d  @%0t", name, got, exp, $time);
    end else begin
      $display("[PASS] %-28s got=%0d", name, got);
    end
  endtask

  // Drive one enabled cycle with given operands.
  task automatic step(input logic signed [IN_W-1:0] a,
                      input logic signed [IN_W-1:0] b,
                      input logic clr);
    a_in = a; b_in = b; clear_acc = clr; en = 1;
    @(posedge clk);
    #1; // let NBA updates settle before sampling
  endtask

  initial begin
    // ---- Reset ----
    rst_n = 0; en = 0; clear_acc = 0; a_in = 0; b_in = 0;
    repeat (2) @(posedge clk);
    #1;
    check("reset acc_out", acc_out, 0);
    check("reset a_out",   a_out,   0);
    check("reset b_out",   b_out,   0);
    rst_n = 1;
    @(posedge clk);

    // ---- Test 1: clear_acc loads first product (3 * 4 = 12) ----
    step(8'sd3, 8'sd4, 1'b1);
    expected_acc = 12;
    check("clear_acc loads product", acc_out, expected_acc);
    check("a_out == prev a_in",      a_out,   3);
    check("b_out == prev b_in",      b_out,   4);

    // ---- Test 2: accumulate (12 + 5*6 = 42) ----
    step(8'sd5, 8'sd6, 1'b0);
    expected_acc += 30;
    check("accumulate positive", acc_out, expected_acc); // 42

    // ---- Test 3: signed negative operand (42 + (-7)*8 = -14) ----
    step(-8'sd7, 8'sd8, 1'b0);
    expected_acc += (-7 * 8);
    check("accumulate negative", acc_out, expected_acc); // -14

    // ---- Test 4: max-magnitude signed product (-128 * -128 = 16384) ----
    step(-8'sd128, -8'sd128, 1'b1); // clear, fresh accumulation
    expected_acc = 16384;
    check("min*min product", acc_out, expected_acc);

    // ---- Test 5: en=0 holds state (no change) ----
    en = 0; a_in = 8'sd100; b_in = 8'sd100;
    @(posedge clk); #1;
    check("en=0 holds acc", acc_out, expected_acc);

    // ---- Summary ----
    if (errors == 0)
      $display("\n==== tb_pe: ALL TESTS PASSED ====");
    else
      $display("\n==== tb_pe: %0d FAILURE(S) ====", errors);
    $finish;
  end

endmodule : tb_pe
