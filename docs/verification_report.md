# Verification Report

## Summary
- Functional verification implemented with a self-checking SystemVerilog testbench.
- Golden vectors are generated from `verification/golden_model.py`.
- Assertions and simple covergroups were added to `tb/tb_gemm_top.sv`.

## What is covered
- Tile load and compute sequencing
- Done pulse behavior
- Basic sanity assertions for busy/done/start behavior
- Coverage bins for tile-size and K-range categories

## Notes
- Full UVM and advanced coverage reporting require a commercial simulator such as xrun/Questa/VCS.
- The RTL and testbench are structured so that a simulator with coverage support can run them directly.

## Suggested next step
- Run on a lab machine with xrun/Questa/VCS to collect formal coverage reports and UVM logs.
