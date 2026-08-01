// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_pkg.h for the primary calling header

#include "Vsa_pkg__pch.h"
#include "Vsa_pkg___024root.h"

VL_ATTR_COLD void Vsa_pkg___024root___eval_initial__TOP(Vsa_pkg___024root* vlSelf);
VlCoroutine Vsa_pkg___024root___eval_initial__TOP__Vtiming__0(Vsa_pkg___024root* vlSelf);
VlCoroutine Vsa_pkg___024root___eval_initial__TOP__Vtiming__1(Vsa_pkg___024root* vlSelf);
VlCoroutine Vsa_pkg___024root___eval_initial__TOP__Vtiming__2(Vsa_pkg___024root* vlSelf);

void Vsa_pkg___024root___eval_initial(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_pkg___024root___eval_initial__TOP(vlSelf);
    Vsa_pkg___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsa_pkg___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vsa_pkg___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gemm_top__DOT__clk__0 
        = vlSelfRef.tb_gemm_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gemm_top__DOT__rst_n__0 
        = vlSelfRef.tb_gemm_top__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vsa_pkg___024root___eval_initial__TOP__Vtiming__2(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                             76);
        vlSelfRef.tb_gemm_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_gemm_top__DOT__clk)));
    }
}

void Vsa_pkg___024root___act_comb__TOP__0(Vsa_pkg___024root* vlSelf);

void Vsa_pkg___024root___eval_act(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsa_pkg___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsa_pkg___024root___act_comb__TOP__0(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsa_pkg___024root___nba_sequent__TOP__0(Vsa_pkg___024root* vlSelf);
void Vsa_pkg___024root___nba_sequent__TOP__1(Vsa_pkg___024root* vlSelf);
void Vsa_pkg___024root___nba_sequent__TOP__2(Vsa_pkg___024root* vlSelf);
void Vsa_pkg___024root___nba_comb__TOP__1(Vsa_pkg___024root* vlSelf);

void Vsa_pkg___024root___eval_nba(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsa_pkg___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsa_pkg___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsa_pkg___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsa_pkg___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsa_pkg___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vsa_pkg___024root___nba_sequent__TOP__0(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v0;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__c_tile__v0;
    __VdlySet__tb_gemm_top__DOT__c_tile__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v1;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v2;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v3;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v4;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v5;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v6;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v7;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v8;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v9;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v10;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v11;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v12;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v13;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v14;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v15;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v16;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v17;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v18;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v19;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v20;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v21;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v22;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v23;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v24;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v25;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v26;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v27;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v28;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v29;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v30;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v31;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v31 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v32;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v32 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v33;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v33 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v34;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v34 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v35;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v35 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v36;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v36 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v37;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v37 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v38;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v38 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v39;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v39 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v40;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v40 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v41;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v41 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v42;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v42 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v43;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v43 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v44;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v44 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v45;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v45 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v46;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v46 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v47;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v47 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v48;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v48 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v49;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v49 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v50;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v50 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v51;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v51 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v52;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v52 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v53;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v53 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v54;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v54 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v55;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v55 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v56;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v56 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v57;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v57 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v58;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v58 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v59;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v59 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v60;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v60 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v61;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v61 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v62;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v62 = 0;
    IData/*31:0*/ __VdlyVal__tb_gemm_top__DOT__c_tile__v63;
    __VdlyVal__tb_gemm_top__DOT__c_tile__v63 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__c_tile__v64;
    __VdlySet__tb_gemm_top__DOT__c_tile__v64 = 0;
    // Body
    __VdlySet__tb_gemm_top__DOT__c_tile__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__c_tile__v64 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    vlSelfRef.__Vdly__tb_gemm_top__DOT__coverage_events 
        = vlSelfRef.tb_gemm_top__DOT__coverage_events;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7 = 0U;
    if (vlSelfRef.tb_gemm_top__DOT__rst_n) {
        if (vlSelfRef.tb_gemm_top__DOT__dut__DOT__array_en) {
            if (vlSelfRef.tb_gemm_top__DOT__dut__DOT__clear_acc) {
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product));
            } else {
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__product)));
                vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                    = (vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out 
                       + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__product)));
            }
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [1U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [1U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [2U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [2U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [4U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [4U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [3U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hd2c2c63b__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hd2c2c63b__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hd2c2c63b__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hd2c2c63b__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [3U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hd2c2c63b__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hd2c2c63b__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hd2c2c63b__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hd2c2c63b__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [5U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [3U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [5U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
                [3U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h1b40498c__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [6U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [3U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [4U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [6U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [3U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
                [4U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_hb8fcdf94__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_unskewed
                [7U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [3U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [4U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [5U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 1U;
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_unskewed
                [7U];
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [0U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [1U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [2U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [3U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [4U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
                [5U];
            __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT____Vlvbound_h23489a8f__0;
            __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6 = 1U;
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [0U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [0U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [1U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [1U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [2U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [2U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [3U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [3U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [4U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [4U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [5U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [5U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [6U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [6U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][0U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][1U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][2U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][3U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][4U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][5U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][6U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h
                [7U][7U];
            vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v
                [7U][7U];
        }
        if (vlSelfRef.tb_gemm_top__DOT__dut__DOT__capture) {
            __VdlyVal__tb_gemm_top__DOT__c_tile__v0 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0U];
            __VdlySet__tb_gemm_top__DOT__c_tile__v0 = 1U;
            __VdlyVal__tb_gemm_top__DOT__c_tile__v1 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [1U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v2 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [2U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v3 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [3U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v4 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [4U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v5 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [5U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v6 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [6U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v7 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [7U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v8 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [8U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v9 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [9U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v10 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0xaU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v11 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0xbU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v12 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0xcU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v13 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0xdU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v14 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0xeU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v15 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0xfU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v16 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x10U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v17 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x11U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v18 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x12U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v19 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x13U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v20 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x14U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v21 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x15U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v22 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x16U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v23 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x17U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v24 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x18U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v25 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x19U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v26 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x1aU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v27 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x1bU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v28 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x1cU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v29 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x1dU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v30 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x1eU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v31 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x1fU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v32 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x20U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v33 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x21U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v34 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x22U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v35 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x23U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v36 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x24U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v37 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x25U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v38 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x26U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v39 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x27U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v40 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x28U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v41 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x29U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v42 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x2aU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v43 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x2bU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v44 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x2cU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v45 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x2dU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v46 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x2eU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v47 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x2fU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v48 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x30U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v49 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x31U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v50 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x32U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v51 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x33U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v52 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x34U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v53 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x35U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v54 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x36U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v55 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x37U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v56 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x38U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v57 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x39U];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v58 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x3aU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v59 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x3bU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v60 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x3cU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v61 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x3dU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v62 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x3eU];
            __VdlyVal__tb_gemm_top__DOT__c_tile__v63 
                = vlSelfRef.tb_gemm_top__DOT__dut__DOT__c_live
                [0x3fU];
        }
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__cyc 
            = ((0U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))
                ? 0U : ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__cyc));
        if ((5U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
            vlSelfRef.__Vdly__tb_gemm_top__DOT__coverage_events 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_gemm_top__DOT__coverage_events)));
        }
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__drain_cnt 
            = ((3U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))
                ? (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__drain_cnt)))
                : 0U);
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt 
            = ((2U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))
                ? (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt)))
                : 0U);
    } else {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc_out = 0U;
        __VdlySet__tb_gemm_top__DOT__c_tile__v64 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3 = 1U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__cyc = 0U;
        vlSelfRef.__Vdly__tb_gemm_top__DOT__coverage_events = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__drain_cnt = 0U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6 = 1U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__k_cnt = 0U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7 = 1U;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7 = 1U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__c_tile__v0) {
        vlSelfRef.tb_gemm_top__DOT__c_tile[0U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v0;
        vlSelfRef.tb_gemm_top__DOT__c_tile[1U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v1;
        vlSelfRef.tb_gemm_top__DOT__c_tile[2U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v2;
        vlSelfRef.tb_gemm_top__DOT__c_tile[3U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v3;
        vlSelfRef.tb_gemm_top__DOT__c_tile[4U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v4;
        vlSelfRef.tb_gemm_top__DOT__c_tile[5U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v5;
        vlSelfRef.tb_gemm_top__DOT__c_tile[6U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v6;
        vlSelfRef.tb_gemm_top__DOT__c_tile[7U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v7;
        vlSelfRef.tb_gemm_top__DOT__c_tile[8U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v8;
        vlSelfRef.tb_gemm_top__DOT__c_tile[9U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v9;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0xaU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v10;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0xbU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v11;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0xcU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v12;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0xdU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v13;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0xeU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v14;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0xfU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v15;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x10U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v16;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x11U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v17;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x12U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v18;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x13U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v19;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x14U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v20;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x15U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v21;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x16U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v22;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x17U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v23;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x18U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v24;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x19U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v25;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x1aU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v26;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x1bU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v27;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x1cU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v28;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x1dU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v29;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x1eU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v30;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x1fU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v31;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x20U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v32;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x21U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v33;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x22U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v34;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x23U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v35;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x24U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v36;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x25U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v37;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x26U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v38;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x27U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v39;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x28U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v40;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x29U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v41;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x2aU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v42;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x2bU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v43;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x2cU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v44;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x2dU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v45;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x2eU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v46;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x2fU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v47;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x30U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v48;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x31U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v49;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x32U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v50;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x33U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v51;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x34U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v52;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x35U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v53;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x36U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v54;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x37U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v55;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x38U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v56;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x39U] = __VdlyVal__tb_gemm_top__DOT__c_tile__v57;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x3aU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v58;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x3bU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v59;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x3cU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v60;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x3dU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v61;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x3eU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v62;
        vlSelfRef.tb_gemm_top__DOT__c_tile[0x3fU] = __VdlyVal__tb_gemm_top__DOT__c_tile__v63;
    }
    if (__VdlySet__tb_gemm_top__DOT__c_tile__v64) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.tb_gemm_top__DOT__c_tile[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v0;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v0;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v1;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v2;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[4U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[4U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[4U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v4;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe__v5) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe[4U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[4U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[5U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[4U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[5U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[4U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v4;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[5U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v5;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe__v6) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[4U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe[5U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[4U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[5U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[6U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[4U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[5U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[6U] = 0U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[0U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[1U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v1;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[2U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v2;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[3U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v3;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[4U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v4;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[5U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v5;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[6U] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v6;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe__v7) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[0U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[1U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[2U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[3U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[4U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[5U] = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe[6U] = 0U;
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
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__1__KET____DOT__g_delay__DOT__pipe
        [0U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe
        [1U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__2__KET____DOT__g_delay__DOT__pipe
        [1U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
        [3U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__4__KET____DOT__g_delay__DOT__pipe
        [3U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
        [2U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__3__KET____DOT__g_delay__DOT__pipe
        [2U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
        [4U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__5__KET____DOT__g_delay__DOT__pipe
        [4U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
        [5U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__6__KET____DOT__g_delay__DOT__pipe
        [5U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_skewed[7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_a__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
        [6U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_skewed[7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_skew_b__DOT__g_lane__BRA__7__KET____DOT__g_delay__DOT__pipe
        [6U];
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[0U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[1U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[1U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[2U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[2U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[3U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[3U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[4U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[4U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[5U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[5U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[6U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[6U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[7U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][0U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][1U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][2U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][3U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][4U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][5U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][6U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__a_h[7U][8U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT__b_v[8U][7U] 
        = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
}

VL_INLINE_OPT void Vsa_pkg___024root___nba_sequent__TOP__1(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__a_mem__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__a_mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_gemm_top__DOT__dut__DOT__a_mem__v0;
    __VdlyDim0__tb_gemm_top__DOT__dut__DOT__a_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_gemm_top__DOT__dut__DOT__a_mem__v0;
    __VdlyDim1__tb_gemm_top__DOT__dut__DOT__a_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__a_mem__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__a_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_gemm_top__DOT__dut__DOT__b_mem__v0;
    __VdlyVal__tb_gemm_top__DOT__dut__DOT__b_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_gemm_top__DOT__dut__DOT__b_mem__v0;
    __VdlyDim0__tb_gemm_top__DOT__dut__DOT__b_mem__v0 = 0;
    SData/*8:0*/ __VdlyDim1__tb_gemm_top__DOT__dut__DOT__b_mem__v0;
    __VdlyDim1__tb_gemm_top__DOT__dut__DOT__b_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gemm_top__DOT__dut__DOT__b_mem__v0;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__b_mem__v0 = 0;
    // Body
    __VdlySet__tb_gemm_top__DOT__dut__DOT__a_mem__v0 = 0U;
    __VdlySet__tb_gemm_top__DOT__dut__DOT__b_mem__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_gemm_top__DOT__done_pulse_seen) 
                     & (0U < (IData)(vlSelfRef.tb_gemm_top__DOT__coverage_events))))) {
        VL_WRITEF_NX("[COV] done pulse observed, tile_size=%0#, k_range=%0#\n",0,
                     2,vlSelfRef.tb_gemm_top__DOT__tile_size_kind,
                     2,(IData)(vlSelfRef.tb_gemm_top__DOT__k_kind));
    }
    if (vlSelfRef.tb_gemm_top__DOT__ld_a_en) {
        __VdlyVal__tb_gemm_top__DOT__dut__DOT__a_mem__v0 
            = vlSelfRef.tb_gemm_top__DOT__ld_a_data;
        __VdlyDim0__tb_gemm_top__DOT__dut__DOT__a_mem__v0 
            = (0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__ld_a_k));
        __VdlyDim1__tb_gemm_top__DOT__dut__DOT__a_mem__v0 
            = vlSelfRef.tb_gemm_top__DOT__ld_a_row;
        __VdlySet__tb_gemm_top__DOT__dut__DOT__a_mem__v0 = 1U;
    }
    if (vlSelfRef.tb_gemm_top__DOT__ld_b_en) {
        __VdlyVal__tb_gemm_top__DOT__dut__DOT__b_mem__v0 
            = vlSelfRef.tb_gemm_top__DOT__ld_b_data;
        __VdlyDim0__tb_gemm_top__DOT__dut__DOT__b_mem__v0 
            = vlSelfRef.tb_gemm_top__DOT__ld_b_col;
        __VdlyDim1__tb_gemm_top__DOT__dut__DOT__b_mem__v0 
            = (0x1ffU & (IData)(vlSelfRef.tb_gemm_top__DOT__ld_b_k));
        __VdlySet__tb_gemm_top__DOT__dut__DOT__b_mem__v0 = 1U;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__a_mem__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__a_mem[__VdlyDim1__tb_gemm_top__DOT__dut__DOT__a_mem__v0][__VdlyDim0__tb_gemm_top__DOT__dut__DOT__a_mem__v0] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__a_mem__v0;
    }
    if (__VdlySet__tb_gemm_top__DOT__dut__DOT__b_mem__v0) {
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__b_mem[__VdlyDim1__tb_gemm_top__DOT__dut__DOT__b_mem__v0][__VdlyDim0__tb_gemm_top__DOT__dut__DOT__b_mem__v0] 
            = __VdlyVal__tb_gemm_top__DOT__dut__DOT__b_mem__v0;
    }
}

VL_INLINE_OPT void Vsa_pkg___024root___nba_sequent__TOP__2(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gemm_top__DOT__coverage_events = vlSelfRef.__Vdly__tb_gemm_top__DOT__coverage_events;
    if (vlSelfRef.tb_gemm_top__DOT__rst_n) {
        vlSelfRef.tb_gemm_top__DOT__k_kind = (VL_GTES_III(32, 8U, vlSelfRef.tb_gemm_top__DOT__K)
                                               ? 1U
                                               : (VL_GTES_III(32, 0x10U, vlSelfRef.tb_gemm_top__DOT__K)
                                                   ? 2U
                                                   : 3U));
        vlSelfRef.tb_gemm_top__DOT__tile_size_kind 
            = ((8U == vlSelfRef.tb_gemm_top__DOT__M)
                ? 1U : (((0x10U == vlSelfRef.tb_gemm_top__DOT__M) 
                         & (0x10U == vlSelfRef.tb_gemm_top__DOT__N))
                         ? 2U : 3U));
        if ((5U == (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
            vlSelfRef.tb_gemm_top__DOT__done_pulse_seen = 1U;
        }
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state 
            = vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__next_state;
    } else {
        vlSelfRef.tb_gemm_top__DOT__k_kind = 0U;
        vlSelfRef.tb_gemm_top__DOT__tile_size_kind = 0U;
        vlSelfRef.tb_gemm_top__DOT__done_pulse_seen = 0U;
        vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state = 0U;
    }
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
}

VL_INLINE_OPT void Vsa_pkg___024root___nba_comb__TOP__1(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsa_pkg___024root___timing_resume(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h36e11883__0.resume(
                                                   "@(posedge tb_gemm_top.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsa_pkg___024root___timing_commit(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h36e11883__0.commit(
                                                   "@(posedge tb_gemm_top.clk)");
    }
}

void Vsa_pkg___024root___eval_triggers__act(Vsa_pkg___024root* vlSelf);

bool Vsa_pkg___024root___eval_phase__act(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsa_pkg___024root___eval_triggers__act(vlSelf);
    Vsa_pkg___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsa_pkg___024root___timing_resume(vlSelf);
        Vsa_pkg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsa_pkg___024root___eval_phase__nba(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsa_pkg___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_pkg___024root___dump_triggers__nba(Vsa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_pkg___024root___dump_triggers__act(Vsa_pkg___024root* vlSelf);
#endif  // VL_DEBUG

void Vsa_pkg___024root___eval(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsa_pkg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 30, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsa_pkg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 30, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsa_pkg___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsa_pkg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsa_pkg___024root___eval_debug_assertions(Vsa_pkg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_pkg___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
