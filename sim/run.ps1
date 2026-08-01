<#
  run.ps1 - Build and run the GEMM testbench on Windows.

  Steps:
    1. (Re)generate golden vectors with the Python model.
    2. Compile + run with whichever simulator is found:
         Verilator  ->  verilator --binary --timing
         Questa     ->  vlog + vsim -c

  Usage:
    ./run.ps1                       # defaults: M=16 N=16 K=16 seed=1
    ./run.ps1 -M 32 -N 16 -K 24     # custom sizes (M,N must be multiples of 8)
    ./run.ps1 -NoGen                # skip vector regeneration
#>
param(
  [int]$M = 16,
  [int]$N = 16,
  [int]$K = 16,
  [int]$Seed = 1,
  [switch]$NoGen
)

$ErrorActionPreference = 'Stop'
$here    = Split-Path -Parent $MyInvocation.MyCommand.Path   # sim/
$root    = Split-Path -Parent $here                          # repo root
$rtl     = Join-Path $root 'rtl'
$tb      = Join-Path $root 'tb'

# 1) Generate test vectors --------------------------------------------------
if (-not $NoGen) {
  Write-Host "[run] generating vectors M=$M N=$N K=$K seed=$Seed" -ForegroundColor Cyan
  $py = Get-Command python -ErrorAction SilentlyContinue
  if (-not $py) { $py = Get-Command python3 -ErrorAction SilentlyContinue }
  if (-not $py) { throw "Python not found - install it or pass -NoGen to reuse existing hex." }
  & $py.Source (Join-Path $root 'verification/golden_model.py') `
      --M $M --N $N --K $K --seed $Seed --out $here
}

# Ordered source files ------------------------------------------------------
$srcs = @(
  "$rtl/sa_pkg.sv", "$rtl/pe.sv", "$rtl/systolic_array.sv", "$rtl/skew_buffer.sv",
  "$rtl/controller.sv", "$rtl/output_buffer.sv", "$rtl/gemm_top.sv",
  "$tb/tb_gemm_top.sv"
)

# 2) Pick a simulator -------------------------------------------------------
function Test-Tool($name) { [bool](Get-Command $name -ErrorAction SilentlyContinue) }

if (Test-Tool 'verilator') {
  Write-Host "[run] using Verilator" -ForegroundColor Cyan
  Push-Location $tb
  try {
    verilator --binary --timing -Wno-fatal -I$rtl `
      $srcs -o sim_gemm
    & (Join-Path $tb 'obj_dir/sim_gemm')
  } finally { Pop-Location }
}
elseif (Test-Tool 'vlog') {
  Write-Host "[run] using Questa/ModelSim" -ForegroundColor Cyan
  Push-Location $tb
  try {
    vlog -sv "+incdir+$rtl" $srcs
    vsim -c tb_gemm_top -do "run -all; quit"
  } finally { Pop-Location }
}
else {
  Write-Warning "No simulator found (verilator/vlog). Install one, then re-run."
  Write-Host "Sources are listed in sim/filelist.f"
}
