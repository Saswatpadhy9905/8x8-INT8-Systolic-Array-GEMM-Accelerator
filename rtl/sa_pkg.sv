// ============================================================================
// sa_pkg.sv  -  Shared parameters and types for the systolic array project
// ----------------------------------------------------------------------------

`ifndef SA_PKG_SV
`define SA_PKG_SV

package sa_pkg;

  parameter int ARRAY_ROWS = 8;   // number of PE rows  (maps to M dimension)
  parameter int ARRAY_COLS = 8;   // number of PE cols  (maps to N dimension)

  parameter int IN_W   = 8;       // int8 activations / weights
  parameter int ACC_W  = 32;      // int32 accumulator
  parameter int DIM_W  = 16;      // width of M, N, K dimension registers

  parameter int MAX_K  = 512;     // max contraction depth stored per tile

  parameter int MUL_W  = 2 * IN_W;            // product width (16)
  parameter int NUM_PE = ARRAY_ROWS * ARRAY_COLS;

  typedef enum logic [2:0] {
    ST_IDLE      = 3'd0,
    ST_LOAD      = 3'd1,
    ST_COMPUTE   = 3'd2,
    ST_DRAIN     = 3'd3,
    ST_NEXT_TILE = 3'd4,
    ST_DONE      = 3'd5
  } state_e;

  // Ceiling division helper: number of tiles along a dimension.
  function automatic int unsigned ceil_div(input int unsigned a,
                                           input int unsigned b);
    return (a + b - 1) / b;
  endfunction

endpackage : sa_pkg

`endif
