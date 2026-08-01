// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_gemm_top__pch.h"

//============================================================
// Constructors

Vtb_gemm_top::Vtb_gemm_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_gemm_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_gemm_top::Vtb_gemm_top(const char* _vcname__)
    : Vtb_gemm_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_gemm_top::~Vtb_gemm_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_gemm_top___024root___eval_debug_assertions(Vtb_gemm_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_gemm_top___024root___eval_static(Vtb_gemm_top___024root* vlSelf);
void Vtb_gemm_top___024root___eval_initial(Vtb_gemm_top___024root* vlSelf);
void Vtb_gemm_top___024root___eval_settle(Vtb_gemm_top___024root* vlSelf);
void Vtb_gemm_top___024root___eval(Vtb_gemm_top___024root* vlSelf);

void Vtb_gemm_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_gemm_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_gemm_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_gemm_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_gemm_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_gemm_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_gemm_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_gemm_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_gemm_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_gemm_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_gemm_top___024root___eval_final(Vtb_gemm_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_gemm_top::final() {
    Vtb_gemm_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_gemm_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_gemm_top::modelName() const { return "Vtb_gemm_top"; }
unsigned Vtb_gemm_top::threads() const { return 1; }
void Vtb_gemm_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_gemm_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
