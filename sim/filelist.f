# Ordered source list for the GEMM accelerator.
# Package and leaf modules first, then composites, top, and finally the TB.
# Paths are relative to the repo root.

rtl/sa_pkg.sv
rtl/pe.sv
rtl/systolic_array.sv
rtl/skew_buffer.sv
rtl/controller.sv
rtl/output_buffer.sv
rtl/gemm_top.sv
tb/tb_gemm_top.sv
