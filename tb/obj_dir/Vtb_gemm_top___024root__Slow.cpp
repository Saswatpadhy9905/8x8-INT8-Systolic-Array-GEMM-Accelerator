// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gemm_top.h for the primary calling header

#include "Vtb_gemm_top__pch.h"
#include "Vtb_gemm_top__Syms.h"
#include "Vtb_gemm_top___024root.h"

void Vtb_gemm_top___024root___ctor_var_reset(Vtb_gemm_top___024root* vlSelf);

Vtb_gemm_top___024root::Vtb_gemm_top___024root(Vtb_gemm_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_gemm_top___024root___ctor_var_reset(this);
}

void Vtb_gemm_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_gemm_top___024root::~Vtb_gemm_top___024root() {
}
