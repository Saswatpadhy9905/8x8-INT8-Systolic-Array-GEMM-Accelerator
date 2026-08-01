// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gemm_top.h for the primary calling header

#include "Vtb_gemm_top__pch.h"
#include "Vtb_gemm_top__Syms.h"
#include "Vtb_gemm_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gemm_top___024root___dump_triggers__stl(Vtb_gemm_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gemm_top___024root___eval_triggers__stl(Vtb_gemm_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gemm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gemm_top___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gemm_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
