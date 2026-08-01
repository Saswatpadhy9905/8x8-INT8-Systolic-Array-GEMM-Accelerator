# ============================================================================
# Makefile - build & run the GEMM testbench (Verilator or Questa/ModelSim)
# ----------------------------------------------------------------------------
#   make vectors            # regenerate golden vectors (M/N/K/SEED overridable)
#   make verilator          # build + run with Verilator
#   make questa             # build + run with Questa/ModelSim
#   make clean
#
#   make vectors M=32 N=16 K=24 SEED=2
# ============================================================================
M    ?= 16
N    ?= 16
K    ?= 16
SEED ?= 1

ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
RTL  := $(ROOT)/rtl
TB   := $(ROOT)/tb
SIM  := $(ROOT)/sim

# Prefer the active virtualenv's Python when available; fall back to python3.
PYTHON ?= $(shell if command -v python >/dev/null 2>&1; then echo python; elif command -v python3 >/dev/null 2>&1; then echo python3; else echo python3; fi)

SRCS := \
  $(RTL)/sa_pkg.sv \
  $(RTL)/pe.sv \
  $(RTL)/systolic_array.sv \
  $(RTL)/skew_buffer.sv \
  $(RTL)/controller.sv \
  $(RTL)/output_buffer.sv \
  $(RTL)/gemm_top.sv \
  $(TB)/tb_gemm_top.sv

.PHONY: vectors verilator questa clean

vectors:
	$(PYTHON) $(ROOT)/verification/golden_model.py --M $(M) --N $(N) --K $(K) --seed $(SEED) --out $(SIM)

verilator: vectors
	cd $(TB) && verilator --binary --timing -Wno-fatal -I$(RTL) $(SRCS) -o sim_gemm
	cd $(TB) && ./obj_dir/sim_gemm

questa: vectors
	cd $(TB) && vlog -sv +incdir+$(RTL) $(SRCS)
	cd $(TB) && vsim -c tb_gemm_top -do "run -all; quit"

clean:
	rm -rf $(TB)/obj_dir $(TB)/work transcript vsim.wlf
