// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_pkg.h for the primary calling header

#include "Vsa_pkg__pch.h"
#include "Vsa_pkg___024root.h"

VL_ATTR_COLD void Vsa_pkg___024root___eval_static__TOP(Vsa_pkg___024root* vlSelf);

VL_ATTR_COLD void Vsa_pkg___024root___eval_static(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_pkg___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsa_pkg___024root___eval_static__TOP(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gemm_top__DOT__checks = 0U;
    vlSelfRef.tb_gemm_top__DOT__errors = 0U;
    vlSelfRef.tb_gemm_top__DOT__tiles = 0U;
    vlSelfRef.tb_gemm_top__DOT__total_cycles = 0ULL;
}

VL_ATTR_COLD void Vsa_pkg___024root___eval_initial__TOP(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gemm_top__DOT__clk = 0U;
}

VL_ATTR_COLD void Vsa_pkg___024root___eval_final(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_pkg___024root___dump_triggers__stl(Vsa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsa_pkg___024root___eval_phase__stl(Vsa_pkg___024root* vlSelf);

VL_ATTR_COLD void Vsa_pkg___024root___eval_settle(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsa_pkg___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 30, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsa_pkg___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_pkg___024root___dump_triggers__stl(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsa_pkg___024root___stl_sequent__TOP__0(Vsa_pkg___024root* vlSelf);

VL_ATTR_COLD void Vsa_pkg___024root___eval_stl(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsa_pkg___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsa_pkg___024root___stl_sequent__TOP__0(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__array_en = 0U;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__capture = 0U;
    if ((2U != (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
        if ((3U != (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
            if ((5U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__capture = 1U;
            }
        }
    }
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__clear_acc = 0U;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state;
    if ((4U & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
            if ((0xfU == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__drain_cnt))) {
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state = 5U;
            }
        } else if (((IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt) 
                    == ((IData)(vlSelfRef.tb_gemm_top__DOT__K_in) 
                        - (IData)(1U)))) {
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state = 0U;
    } else if (vlSelfRef.tb_gemm_top__DOT__start) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state = 2U;
    }
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[9U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0xaU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0xbU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0xcU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0xdU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0xeU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0xfU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x10U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x11U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x12U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x13U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x14U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x15U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x16U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x17U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x18U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x19U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x1aU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x1bU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x1cU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x1dU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x1eU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x1fU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x20U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x21U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x22U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x23U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x24U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x25U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x26U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x27U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x28U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x29U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x2aU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x2bU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x2cU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x2dU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x2eU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x2fU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x30U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x31U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x32U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x33U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x34U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x35U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x36U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x37U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x38U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x39U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x3aU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x3bU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x3cU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x3dU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x3eU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live[0x3fU] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe
        [1U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
        [2U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
        [3U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
        [4U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
        [5U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
        [6U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe
        [1U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
        [2U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
        [3U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
        [4U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
        [5U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
        [6U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__feed_valid = 0U;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt;
    if ((2U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__array_en = 1U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__clear_acc 
            = (0U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt));
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__feed_valid = 1U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt;
    } else if ((3U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__array_en = 1U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__feed_valid = 0U;
    }
    if (vlSelfRef.tb_gemm_top__DOT__dut__DOT__feed_valid) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[0U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [0U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[1U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [1U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[2U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [2U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[3U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [3U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[4U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [4U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[5U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [5U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[6U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [6U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[7U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem
            [7U][(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[0U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [0U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[1U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [1U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[2U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [2U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[3U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [3U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[4U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [4U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[5U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [5U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[6U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [6U];
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[7U] 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem
            [(0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__k_idx))]
            [7U];
    } else {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[4U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[5U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[6U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed[7U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[4U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[5U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[6U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed[7U] = 0U;
    }
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [1U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [2U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [3U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [4U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [5U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [6U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed
        [7U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [1U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [2U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [3U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [4U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [5U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [6U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[0U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed
        [7U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [0U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [0U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [1U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [1U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [2U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [2U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [3U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [3U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [4U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [4U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [5U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [5U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [6U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [6U]
                                                          [7U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [0U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [1U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [2U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [3U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [4U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [5U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [6U]))));
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                                                              [7U]
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                                                          [7U]
                                                          [7U]))));
}

VL_ATTR_COLD void Vsa_pkg___024root___eval_triggers__stl(Vsa_pkg___024root* vlSelf);

VL_ATTR_COLD bool Vsa_pkg___024root___eval_phase__stl(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsa_pkg___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsa_pkg___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_pkg___024root___dump_triggers__act(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_gemm_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_gemm_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_pkg___024root___dump_triggers__nba(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_gemm_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_gemm_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsa_pkg___024root___ctor_var_reset(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_gemm_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__K_in = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__ld_a_en = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__ld_a_row = VL_RAND_RESET_I(3);
    vlSelf->tb_gemm_top__DOT__ld_a_k = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__ld_a_data = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__ld_b_en = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__ld_b_k = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__ld_b_col = VL_RAND_RESET_I(3);
    vlSelf->tb_gemm_top__DOT__ld_b_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__c_tile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_gemm_top__DOT__M = 0;
    vlSelf->tb_gemm_top__DOT__N = 0;
    vlSelf->tb_gemm_top__DOT__K = 0;
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__a_flat[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__b_flat[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__c_flat[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_gemm_top__DOT__checks = 0;
    vlSelf->tb_gemm_top__DOT__errors = 0;
    vlSelf->tb_gemm_top__DOT__tiles = 0;
    vlSelf->tb_gemm_top__DOT__total_cycles = 0;
    vlSelf->tb_gemm_top__DOT__done_pulse_seen = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__tile_size_kind = VL_RAND_RESET_I(2);
    vlSelf->tb_gemm_top__DOT__k_kind = VL_RAND_RESET_I(2);
    vlSelf->tb_gemm_top__DOT__coverage_events = VL_RAND_RESET_I(3);
    vlSelf->tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 512; ++__Vi1) {
            vlSelf->tb_gemm_top__DOT__dut__DOT__a_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_gemm_top__DOT__dut__DOT__b_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_gemm_top__DOT__dut__DOT__array_en = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__dut__DOT__clear_acc = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__dut__DOT__feed_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__dut__DOT__capture = VL_RAND_RESET_I(1);
    vlSelf->tb_gemm_top__DOT__dut__DOT__k_idx = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__a_unskewed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__b_unskewed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__a_skewed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__b_skewed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__c_live[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__drain_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__cyc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hd2c2c63b__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hd2c2c63b__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 9; ++__Vi1) {
            vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_gemm_top__DOT__coverage_events = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_gemm_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_gemm_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
