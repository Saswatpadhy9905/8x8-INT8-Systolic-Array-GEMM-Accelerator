// ============================================================================
// tb_gemm_top.sv  -  Week 3 self-checking testbench + scoreboard
// ----------------------------------------------------------------------------
// WHAT THIS PROVES:
//   The whole accelerator (controller + tile memories + skew buffers + 8x8
//   array + output buffer) computes C = A * B exactly, matching the NumPy
//   golden model bit-for-bit.
//
// HOW IT WORKS:
//   The DUT (gemm_top) computes ONE 8x8 output tile per 'start' pulse, with an
//   arbitrary contraction depth K. A real GEMM of size (M x N x K) is just a
//   grid of 8x8 output tiles, so this testbench performs the tiling in software:
//
//     for each output tile (tm, tn):          // tm in 0..M/8-1, tn in 0..N/8-1
//         load A[tm-rows][0..K-1] into the A tile memory
//         load B[0..K-1][tn-cols] into the B tile memory
//         pulse start (depth K)
//         wait for done, capture the 64 results
//         compare each result against the golden C tile  (scoreboard)
//
//   Vectors come from verification/golden_model.py (a.hex, b.hex, c_golden.hex,
//   dims.txt). Generate them first, e.g.:
//       python golden_model.py --M 16 --N 16 --K 16 --seed 1 --out ../sim
//
// RUN (Verilator):
//   verilator --binary --timing -Wno-fatal -I../rtl tb_gemm_top.sv \
//       ../rtl/sa_pkg.sv ../rtl/pe.sv ../rtl/systolic_array.sv \
//       ../rtl/skew_buffer.sv ../rtl/controller.sv ../rtl/output_buffer.sv \
//       ../rtl/gemm_top.sv -o sim_gemm && ./obj_dir/sim_gemm
//
// RUN (Questa/ModelSim):
//   vlog -sv +incdir+../rtl ../rtl/sa_pkg.sv ../rtl/pe.sv ../rtl/systolic_array.sv \
//        ../rtl/skew_buffer.sv ../rtl/controller.sv ../rtl/output_buffer.sv \
//        ../rtl/gemm_top.sv tb_gemm_top.sv
//   vsim -c tb_gemm_top -do "run -all; quit"
// ============================================================================
`timescale 1ns/1ps
`include "sa_pkg.sv"

module tb_gemm_top
  import sa_pkg::*;
;
  // --------------------------------------------------------------------------
  // Test-vector capacity (upper bounds; actual sizes come from dims.txt).
  // --------------------------------------------------------------------------
  localparam int MAXM = 64;
  localparam int MAXN = 64;
  localparam int MAXK = MAX_K;          // from sa_pkg (512)
  localparam string SIM_DIR = "../sim"; // where golden_model.py writes vectors

  // --------------------------------------------------------------------------
  // DUT signals
  // --------------------------------------------------------------------------
  logic                  clk, rst_n;
  logic                  start;
  logic [DIM_W-1:0]      K_in;

  logic                  ld_a_en;
  logic [$clog2(ARRAY_ROWS)-1:0] ld_a_row;
  logic [DIM_W-1:0]      ld_a_k;
  logic signed [IN_W-1:0] ld_a_data;

  logic                  ld_b_en;
  logic [DIM_W-1:0]      ld_b_k;
  logic [$clog2(ARRAY_COLS)-1:0] ld_b_col;
  logic signed [IN_W-1:0] ld_b_data;

  logic signed [ACC_W-1:0] c_tile [NUM_PE];
  logic                  c_valid, busy, done;
  logic [31:0]           cycle_count;

  // --------------------------------------------------------------------------
  // DUT
  // --------------------------------------------------------------------------
  gemm_top dut (
    .clk(clk), .rst_n(rst_n),
    .start(start), .K(K_in),
    .ld_a_en(ld_a_en), .ld_a_row(ld_a_row), .ld_a_k(ld_a_k), .ld_a_data(ld_a_data),
    .ld_b_en(ld_b_en), .ld_b_k(ld_b_k), .ld_b_col(ld_b_col), .ld_b_data(ld_b_data),
    .c_tile(c_tile), .c_valid(c_valid), .busy(busy), .done(done),
    .cycle_count(cycle_count)
  );

  // 100 MHz clock
  initial clk = 0;
  always #5 clk = ~clk;

  // --------------------------------------------------------------------------
  // Host-side matrices (golden vectors loaded from hex files)
  // --------------------------------------------------------------------------
  int M, N, K;
  logic        [IN_W-1:0]  a_flat [0:MAXM*MAXK-1];   // A, row-major (M x K)
  logic        [IN_W-1:0]  b_flat [0:MAXK*MAXN-1];   // B, row-major (K x N)
  logic signed [ACC_W-1:0] c_flat [0:MAXM*MAXN-1];   // golden C, row-major (M x N)

  // Scoreboard
  int unsigned checks  = 0;
  int unsigned errors  = 0;
  int unsigned tiles   = 0;
  longint unsigned total_cycles = 0;

  // --------------------------------------------------------------------------
  // Helpers
  // --------------------------------------------------------------------------
  task automatic apply_reset();
    rst_n     = 1'b0;
    start     = 1'b0;
    K_in      = '0;
    ld_a_en   = 1'b0; ld_a_row = '0; ld_a_k = '0; ld_a_data = '0;
    ld_b_en   = 1'b0; ld_b_k   = '0; ld_b_col = '0; ld_b_data = '0;
    repeat (3) @(posedge clk);
    rst_n = 1'b1;
    @(posedge clk);
  endtask

  // Read M N K from dims.txt
  task automatic read_dims();
    int fd, code;
    fd = $fopen({SIM_DIR, "/dims.txt"}, "r");
    if (fd == 0) begin
      $fatal(1, "[TB] Could not open %s/dims.txt - run golden_model.py first.", SIM_DIR);
    end
    code = $fscanf(fd, "%d %d %d", M, N, K);
    $fclose(fd);
    if (code != 3)            $fatal(1, "[TB] dims.txt parse error (got %0d fields).", code);
    if (M % ARRAY_ROWS != 0)  $fatal(1, "[TB] M=%0d must be a multiple of %0d.", M, ARRAY_ROWS);
    if (N % ARRAY_COLS != 0)  $fatal(1, "[TB] N=%0d must be a multiple of %0d.", N, ARRAY_COLS);
    if (M > MAXM || N > MAXN || K > MAXK)
      $fatal(1, "[TB] dims (%0dx%0dx%0d) exceed TB capacity (%0dx%0dx%0d).",
             M, N, K, MAXM, MAXN, MAXK);
    $display("[TB] GEMM dims: M=%0d N=%0d K=%0d  (%0d x %0d output tiles)",
             M, N, K, M/ARRAY_ROWS, N/ARRAY_COLS);
  endtask

  // Load A, B, golden C from hex files.
  task automatic load_vectors();
    $readmemh({SIM_DIR, "/a.hex"},        a_flat);
    $readmemh({SIM_DIR, "/b.hex"},        b_flat);
    $readmemh({SIM_DIR, "/c_golden.hex"}, c_flat);
  endtask

  // Stream one 8xK A-tile and one Kx8 B-tile into the DUT's tile memories.
  task automatic load_tile(input int tm, input int tn);
    // A tile: rows tm*8 .. tm*8+7, all K columns.
    for (int i = 0; i < ARRAY_ROWS; i++) begin
      for (int k = 0; k < K; k++) begin
        @(posedge clk);
        ld_a_en   = 1'b1;
        ld_a_row  = i[$clog2(ARRAY_ROWS)-1:0];
        ld_a_k    = k[DIM_W-1:0];
        ld_a_data = a_flat[(tm*ARRAY_ROWS + i)*K + k];
      end
    end
    @(posedge clk);
    ld_a_en = 1'b0;

    // B tile: all K rows, cols tn*8 .. tn*8+7.
    for (int k = 0; k < K; k++) begin
      for (int j = 0; j < ARRAY_COLS; j++) begin
        @(posedge clk);
        ld_b_en   = 1'b1;
        ld_b_k    = k[DIM_W-1:0];
        ld_b_col  = j[$clog2(ARRAY_COLS)-1:0];
        ld_b_data = b_flat[k*N + (tn*ARRAY_COLS + j)];
      end
    end
    @(posedge clk);
    ld_b_en = 1'b0;
  endtask

  // Pulse start and wait for the tile to finish (with a watchdog).
  task automatic run_tile();
    int guard;
    @(posedge clk);
    start = 1'b1;
    K_in  = K[DIM_W-1:0];
    @(posedge clk);
    start = 1'b0;

    // Wait for the one-cycle 'done' pulse.
    guard = 0;
    while (done !== 1'b1) begin
      @(posedge clk);
      guard++;
      if (guard > (K + 4*ARRAY_ROWS + 64))
        $fatal(1, "[TB] Timeout waiting for 'done' (tile finished too slowly).");
    end
    // Results are latched on the edge leaving DONE; sample after it.
    @(posedge clk);
    #1;
  endtask

  // Compare the captured 8x8 tile against the golden model.
  task automatic check_tile(input int tm, input int tn);
    automatic int local_err = 0;
    for (int i = 0; i < ARRAY_ROWS; i++) begin
      for (int j = 0; j < ARRAY_COLS; j++) begin
        automatic logic signed [ACC_W-1:0] got = c_tile[i*ARRAY_COLS + j];
        automatic logic signed [ACC_W-1:0] exp = c_flat[(tm*ARRAY_ROWS + i)*N + (tn*ARRAY_COLS + j)];
        checks++;
        if (got !== exp) begin
          errors++;
          local_err++;
          if (local_err <= 8) // cap the noise per tile
            $display("  [FAIL] C[%0d][%0d] got=%0d exp=%0d",
                     tm*ARRAY_ROWS + i, tn*ARRAY_COLS + j, got, exp);
        end
      end
    end
    if (local_err == 0)
      $display("  [PASS] tile (%0d,%0d)  %0d cycles", tm, tn, cycle_count);
    else
      $display("  [FAIL] tile (%0d,%0d): %0d/%0d mismatches",
               tm, tn, local_err, ARRAY_ROWS*ARRAY_COLS);
  endtask

  // --------------------------------------------------------------------------
  // Main sequence
  // --------------------------------------------------------------------------
  initial begin
    apply_reset();
    read_dims();
    load_vectors();

    for (int tm = 0; tm < M/ARRAY_ROWS; tm++) begin
      for (int tn = 0; tn < N/ARRAY_COLS; tn++) begin
        $display("[TB] --- output tile (%0d,%0d) ---", tm, tn);
        load_tile(tm, tn);
        run_tile();
        check_tile(tm, tn);
        tiles++;
        total_cycles += cycle_count;
      end
    end

    // ---- Summary ----------------------------------------------------------
    $display("\n=====================================================");
    $display("  tb_gemm_top summary");
    $display("    output tiles : %0d", tiles);
    $display("    comparisons  : %0d", checks);
    $display("    mismatches   : %0d", errors);
    $display("    total cycles : %0d (sum over tiles)", total_cycles);
    if (errors == 0)
      $display("  ==== ALL TESTS PASSED ====");
    else
      $display("  ==== %0d FAILURE(S) ====", errors);
    $display("=====================================================");
    $finish;
  end

  // Global watchdog so a hung DUT never blocks CI forever.
  initial begin
    #2_000_000;
    $fatal(1, "[TB] Global timeout - simulation did not finish.");
  end

endmodule : tb_gemm_top
