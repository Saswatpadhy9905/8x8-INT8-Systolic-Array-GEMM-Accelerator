// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_gemm_top__pch.h"
#include "Vtb_gemm_top.h"
#include "Vtb_gemm_top___024root.h"

// FUNCTIONS
Vtb_gemm_top__Syms::~Vtb_gemm_top__Syms()
{
}

Vtb_gemm_top__Syms::Vtb_gemm_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_gemm_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(972);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_gemm_top.configure(this, name(), "tb_gemm_top", "tb_gemm_top", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_gemm_top__read_dims.configure(this, name(), "tb_gemm_top.read_dims", "read_dims", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_gemm_top__run_tile.configure(this, name(), "tb_gemm_top.run_tile", "run_tile", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
