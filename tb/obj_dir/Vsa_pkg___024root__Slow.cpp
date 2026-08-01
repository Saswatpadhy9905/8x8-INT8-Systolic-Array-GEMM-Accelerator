// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_pkg.h for the primary calling header

#include "Vsa_pkg__pch.h"
#include "Vsa_pkg__Syms.h"
#include "Vsa_pkg___024root.h"

void Vsa_pkg___024root___ctor_var_reset(Vsa_pkg___024root* vlSelf);

Vsa_pkg___024root::Vsa_pkg___024root(Vsa_pkg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsa_pkg___024root___ctor_var_reset(this);
}

void Vsa_pkg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsa_pkg___024root::~Vsa_pkg___024root() {
}
