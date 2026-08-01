`timescale 1ns/1ps
// ============================================================================
// pe.sv  -  Processing Element (one MAC cell of the systolic array)
// ============================================================================

`include "sa_pkg.sv"

(* use_dsp = "yes" *)
module pe
  import sa_pkg::*;
(
  input  logic                 clk,
  input  logic                 rst_n,
  input  logic                 en,          
  input  logic                 clear_acc_in,  
  output logic                 clear_acc_out, 
  input  logic signed [IN_W-1:0]  a_in,    // activation from left
  input  logic signed [IN_W-1:0]  b_in,    // weight from top
  output logic signed [IN_W-1:0]  a_out,   // to right neighbor (registered)
  output logic signed [IN_W-1:0]  b_out,   // to bottom neighbor (registered)
  output logic signed [ACC_W-1:0] acc_out  // current accumulator value
);

  // Accumulator + pass-through pipeline registers
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      acc_out       <= '0;
      a_out         <= '0;
      b_out         <= '0;
      clear_acc_out <= 1'b0;
    end else if (en) begin
      // Pass operands to neighbors (1-cycle hop).
      a_out         <= a_in;
      b_out         <= b_in;
      clear_acc_out <= clear_acc_in;
      
      // Compute MAC directly inside the sequential block 
      // Cast inputs to ACC_W before multiplying to prevent overflow truncation
      if (clear_acc_in)
        acc_out <= ACC_W'(a_in) * ACC_W'(b_in);
      else
        acc_out <= acc_out + (ACC_W'(a_in) * ACC_W'(b_in));
    end
  end

endmodule : pe