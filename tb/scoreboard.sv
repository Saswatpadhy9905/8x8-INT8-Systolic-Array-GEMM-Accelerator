`timescale 1ns/1ps
`include "sa_pkg.sv"

module scoreboard
  import sa_pkg::*;
(
  input logic clk,
  input logic rst_n,
  input logic [31:0] cycle_count,
  input logic signed [ACC_W-1:0] c_tile [NUM_PE],
  input logic signed [ACC_W-1:0] exp_tile [NUM_PE],
  input logic c_valid,
  input logic done,
  output logic pass,
  output logic fail,
  output int unsigned checks,
  output int unsigned errors,
  output int unsigned tiles
);

  logic signed [ACC_W-1:0] last_c [NUM_PE];
  logic last_valid;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pass <= 1'b0;
      fail <= 1'b0;
      checks <= 0;
      errors <= 0;
      tiles <= 0;
      last_valid <= 1'b0;
      for (int k = 0; k < NUM_PE; k++) last_c[k] <= '0;
    end else begin
      if (c_valid) begin
        last_valid <= 1'b1;
        for (int k = 0; k < NUM_PE; k++) last_c[k] <= c_tile[k];
      end

      if (done) begin
        int tile_errors = 0;
        for (int k = 0; k < NUM_PE; k++) begin
          checks <= checks + 1;
          if (c_tile[k] !== exp_tile[k]) begin
            errors <= errors + 1;
            tile_errors++;
          end
        end
        tiles <= tiles + 1;
        if (tile_errors == 0) pass <= 1'b1;
        else fail <= 1'b1;
      end
    end
  end
endmodule
