// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSA_PKG__SYMS_H_
#define VERILATED_VSA_PKG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsa_pkg.h"

// INCLUDE MODULE CLASSES
#include "Vsa_pkg___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsa_pkg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsa_pkg* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsa_pkg___024root              TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_gemm_top;
    VerilatedScope __Vscope_tb_gemm_top__read_dims;
    VerilatedScope __Vscope_tb_gemm_top__run_tile;

    // CONSTRUCTORS
    Vsa_pkg__Syms(VerilatedContext* contextp, const char* namep, Vsa_pkg* modelp);
    ~Vsa_pkg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
