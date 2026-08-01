// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsa_pkg__pch.h"

//============================================================
// Constructors

Vsa_pkg::Vsa_pkg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsa_pkg__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsa_pkg::Vsa_pkg(const char* _vcname__)
    : Vsa_pkg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsa_pkg::~Vsa_pkg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsa_pkg___024root___eval_debug_assertions(Vsa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
void Vsa_pkg___024root___eval_static(Vsa_pkg___024root* vlSelf);
void Vsa_pkg___024root___eval_initial(Vsa_pkg___024root* vlSelf);
void Vsa_pkg___024root___eval_settle(Vsa_pkg___024root* vlSelf);
void Vsa_pkg___024root___eval(Vsa_pkg___024root* vlSelf);

void Vsa_pkg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsa_pkg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsa_pkg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsa_pkg___024root___eval_static(&(vlSymsp->TOP));
        Vsa_pkg___024root___eval_initial(&(vlSymsp->TOP));
        Vsa_pkg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsa_pkg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsa_pkg::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsa_pkg::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsa_pkg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsa_pkg___024root___eval_final(Vsa_pkg___024root* vlSelf);

VL_ATTR_COLD void Vsa_pkg::final() {
    Vsa_pkg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsa_pkg::hierName() const { return vlSymsp->name(); }
const char* Vsa_pkg::modelName() const { return "Vsa_pkg"; }
unsigned Vsa_pkg::threads() const { return 1; }
void Vsa_pkg::prepareClone() const { contextp()->prepareClone(); }
void Vsa_pkg::atClone() const {
    contextp()->threadPoolpOnClone();
}
