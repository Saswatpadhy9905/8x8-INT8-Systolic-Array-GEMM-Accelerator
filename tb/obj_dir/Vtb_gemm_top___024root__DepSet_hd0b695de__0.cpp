// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gemm_top.h for the primary calling header

#include "Vtb_gemm_top__pch.h"
#include "Vtb_gemm_top__Syms.h"
#include "Vtb_gemm_top___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_gemm_top___024root___eval_initial__TOP__Vtiming__0(Vtb_gemm_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gemm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gemm_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_gemm_top__DOT__unnamedblk8__DOT__tm;
    tb_gemm_top__DOT__unnamedblk8__DOT__tm = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__read_dims__1__fd;
    __Vtask_tb_gemm_top__DOT__read_dims__1__fd = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__read_dims__1__code;
    __Vtask_tb_gemm_top__DOT__read_dims__1__code = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__load_tile__3__tm;
    __Vtask_tb_gemm_top__DOT__load_tile__3__tm = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__load_tile__3__tn;
    __Vtask_tb_gemm_top__DOT__load_tile__3__tn = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k;
    __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k;
    __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__run_tile__4__guard;
    __Vtask_tb_gemm_top__DOT__run_tile__4__guard = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__check_tile__5__tm;
    __Vtask_tb_gemm_top__DOT__check_tile__5__tm = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__check_tile__5__tn;
    __Vtask_tb_gemm_top__DOT__check_tile__5__tn = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got;
    __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    IData/*31:0*/ __Vtask_tb_gemm_top__DOT__check_tile__5__local_err;
    __Vtask_tb_gemm_top__DOT__check_tile__5__local_err = 0;
    // Body
    vlSelfRef.tb_gemm_top__DOT__rst_n = 0U;
    vlSelfRef.tb_gemm_top__DOT__start = 0U;
    vlSelfRef.tb_gemm_top__DOT__K_in = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_a_en = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_a_row = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_a_k = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_a_data = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_b_en = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_b_k = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_b_col = 0U;
    vlSelfRef.tb_gemm_top__DOT__ld_b_data = 0U;
    co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gemm_top.clk)", 
                                                         "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                         111);
    co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gemm_top.clk)", 
                                                         "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                         111);
    co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gemm_top.clk)", 
                                                         "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                         111);
    vlSelfRef.tb_gemm_top__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gemm_top.clk)", 
                                                         "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                         113);
    __Vtask_tb_gemm_top__DOT__read_dims__1__fd = VL_FOPEN_NN(
                                                             std::string{"../sim/dims.txt"}
                                                             , 
                                                             std::string{"r"});
    ;
    if (VL_UNLIKELY((0U == __Vtask_tb_gemm_top__DOT__read_dims__1__fd))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:121: Assertion failed in %Ntb_gemm_top.read_dims: [TB] Could not open ../sim/dims.txt - run golden_model.py first.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 121, "", false);
    }
    __Vtask_tb_gemm_top__DOT__read_dims__1__code = VL_FSCANF_INX(__Vtask_tb_gemm_top__DOT__read_dims__1__fd,"%# %# %#",0,
                                                                 32,
                                                                 &(vlSelfRef.tb_gemm_top__DOT__M),
                                                                 32,
                                                                 &(vlSelfRef.tb_gemm_top__DOT__N),
                                                                 32,
                                                                 &(vlSelfRef.tb_gemm_top__DOT__K)) ;
    VL_FCLOSE_I(__Vtask_tb_gemm_top__DOT__read_dims__1__fd); if (VL_UNLIKELY(
                                                                             (3U 
                                                                              != __Vtask_tb_gemm_top__DOT__read_dims__1__code))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:125: Assertion failed in %Ntb_gemm_top.read_dims: [TB] dims.txt parse error (got %0d fields).\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_gemm_top__DOT__read_dims__1__code);
        VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 125, "", false);
    }
    if (VL_UNLIKELY((0U != VL_MODDIVS_III(32, vlSelfRef.tb_gemm_top__DOT__M, (IData)(8U))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:126: Assertion failed in %Ntb_gemm_top.read_dims: [TB] M=%0d must be a multiple of 8.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_gemm_top__DOT__M);
        VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 126, "", false);
    }
    if (VL_UNLIKELY((0U != VL_MODDIVS_III(32, vlSelfRef.tb_gemm_top__DOT__N, (IData)(8U))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:127: Assertion failed in %Ntb_gemm_top.read_dims: [TB] N=%0d must be a multiple of 8.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_gemm_top__DOT__N);
        VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 127, "", false);
    }
    if (VL_UNLIKELY(((VL_LTS_III(32, 0x40U, vlSelfRef.tb_gemm_top__DOT__M) 
                      | VL_LTS_III(32, 0x40U, vlSelfRef.tb_gemm_top__DOT__N)) 
                     | VL_LTS_III(32, 0x200U, vlSelfRef.tb_gemm_top__DOT__K)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:129: Assertion failed in %Ntb_gemm_top.read_dims: [TB] dims (%0dx%0dx%0d) exceed TB capacity (64x64x512).\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_gemm_top__DOT__M,
                     32,vlSelfRef.tb_gemm_top__DOT__N,
                     32,vlSelfRef.tb_gemm_top__DOT__K);
        VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 129, "", false);
    }
    VL_WRITEF_NX("[TB] GEMM dims: M=%0d N=%0d K=%0d  (%0d x %0d output tiles)\n",0,
                 32,vlSelfRef.tb_gemm_top__DOT__M,32,
                 vlSelfRef.tb_gemm_top__DOT__N,32,vlSelfRef.tb_gemm_top__DOT__K,
                 32,VL_DIVS_III(32, vlSelfRef.tb_gemm_top__DOT__M, (IData)(8U)),
                 32,VL_DIVS_III(32, vlSelfRef.tb_gemm_top__DOT__N, (IData)(8U)));
    VL_READMEM_N(true, 8, 32768, 0, std::string{"../sim/a.hex"}
                 ,  &(vlSelfRef.tb_gemm_top__DOT__a_flat)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 32768, 0, std::string{"../sim/b.hex"}
                 ,  &(vlSelfRef.tb_gemm_top__DOT__b_flat)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 4096, 0, std::string{"../sim/c_golden.hex"}
                 ,  &(vlSelfRef.tb_gemm_top__DOT__c_flat)
                 , 0, ~0ULL);
    tb_gemm_top__DOT__unnamedblk8__DOT__tm = 0U;
    while (VL_LTS_III(32, tb_gemm_top__DOT__unnamedblk8__DOT__tm, 
                      VL_DIVS_III(32, vlSelfRef.tb_gemm_top__DOT__M, (IData)(8U)))) {
        vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn = 0U;
        while (VL_LTS_III(32, vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn, 
                          VL_DIVS_III(32, vlSelfRef.tb_gemm_top__DOT__N, (IData)(8U)))) {
            VL_WRITEF_NX("[TB] --- output tile (%0d,%0d) ---\n",0,
                         32,tb_gemm_top__DOT__unnamedblk8__DOT__tm,
                         32,vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn);
            __Vtask_tb_gemm_top__DOT__load_tile__3__tn 
                = vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn;
            __Vtask_tb_gemm_top__DOT__load_tile__3__tm 
                = tb_gemm_top__DOT__unnamedblk8__DOT__tm;
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 0U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, (IData)(8U), 
                                             VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__tm, vlSelfRef.tb_gemm_top__DOT__K)) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 2U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 3U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(3U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 4U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(4U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 5U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 6U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     147);
                vlSelfRef.tb_gemm_top__DOT__ld_a_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_row = 7U;
                vlSelfRef.tb_gemm_top__DOT__ld_a_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_a_data 
                    = vlSelfRef.tb_gemm_top__DOT__a_flat
                    [(0x7fffU & (VL_MULS_III(32, ((IData)(7U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tm)), vlSelfRef.tb_gemm_top__DOT__K) 
                                 + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk1__DOT__unnamedblk2__DOT__k);
            }
            co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gemm_top.clk)", 
                                                                 "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                 154);
            vlSelfRef.tb_gemm_top__DOT__ld_a_en = 0U;
            __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__K)) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 0U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                 + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn)))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(1U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 2U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(2U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 3U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(3U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 4U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(4U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 5U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(5U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 6U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(6U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     160);
                vlSelfRef.tb_gemm_top__DOT__ld_b_en = 1U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_k 
                    = (0xffffU & __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
                vlSelfRef.tb_gemm_top__DOT__ld_b_col = 7U;
                vlSelfRef.tb_gemm_top__DOT__ld_b_data 
                    = vlSelfRef.tb_gemm_top__DOT__b_flat
                    [(0x7fffU & ((IData)(7U) + (VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k, vlSelfRef.tb_gemm_top__DOT__N) 
                                                + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__load_tile__3__tn))))];
                __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__load_tile__3__unnamedblk3__DOT__k);
            }
            co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gemm_top.clk)", 
                                                                 "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                 167);
            vlSelfRef.tb_gemm_top__DOT__ld_b_en = 0U;
            co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gemm_top.clk)", 
                                                                 "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                 174);
            vlSelfRef.tb_gemm_top__DOT__start = 1U;
            vlSelfRef.tb_gemm_top__DOT__K_in = (0xffffU 
                                                & vlSelfRef.tb_gemm_top__DOT__K);
            co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gemm_top.clk)", 
                                                                 "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                 177);
            vlSelfRef.tb_gemm_top__DOT__start = 0U;
            __Vtask_tb_gemm_top__DOT__run_tile__4__guard = 0U;
            while ((5U != (IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__state))) {
                co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_gemm_top.clk)", 
                                                                     "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                     183);
                __Vtask_tb_gemm_top__DOT__run_tile__4__guard 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__run_tile__4__guard);
                if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_gemm_top__DOT__run_tile__4__guard, 
                                           ((IData)(0x60U) 
                                            + vlSelfRef.tb_gemm_top__DOT__K)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:186: Assertion failed in %Ntb_gemm_top.run_tile: [TB] Timeout waiting for 'done' (tile finished too slowly).\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 186, "", false);
                }
            }
            co_await vlSelfRef.__VtrigSched_h36e11883__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_gemm_top.clk)", 
                                                                 "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                                 189);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                                 190);
            __Vtask_tb_gemm_top__DOT__check_tile__5__tn 
                = vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn;
            __Vtask_tb_gemm_top__DOT__check_tile__5__tm 
                = tb_gemm_top__DOT__unnamedblk8__DOT__tm;
            __Vtask_tb_gemm_top__DOT__check_tile__5__local_err = 0U;
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, (IData)(8U), 
                                        VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [1U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [2U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [3U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [4U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [5U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [6U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [7U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, (IData)(8U), 
                                                       VL_MULS_III(32, __Vtask_tb_gemm_top__DOT__check_tile__5__tm, vlSelfRef.tb_gemm_top__DOT__N)) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [8U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [9U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0xaU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0xbU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0xcU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0xdU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0xeU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0xfU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x10U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x11U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x12U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x13U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x14U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x15U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x16U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x17U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x18U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x19U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x1aU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x1bU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x1cU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x1dU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x1eU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x1fU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x20U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x21U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x22U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x23U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x24U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x25U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x26U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x27U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x28U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x29U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x2aU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x2bU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x2cU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x2dU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x2eU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x2fU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x30U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x31U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x32U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x33U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x34U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x35U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x36U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x37U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x38U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & (VL_MULS_III(32, ((IData)(7U) 
                                             + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x39U];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(1U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x3aU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(2U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(2U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x3bU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(3U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(3U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x3cU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(4U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(4U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x3dU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(5U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(5U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x3eU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(6U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(6U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                = vlSelfRef.tb_gemm_top__DOT__c_tile
                [0x3fU];
            __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                = vlSelfRef.tb_gemm_top__DOT__c_flat
                [(0xfffU & ((IData)(7U) + (VL_MULS_III(32, 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)), vlSelfRef.tb_gemm_top__DOT__N) 
                                           + VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn))))];
            vlSelfRef.tb_gemm_top__DOT__checks = ((IData)(1U) 
                                                  + vlSelfRef.tb_gemm_top__DOT__checks);
            if ((__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got 
                 != __Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                vlSelfRef.tb_gemm_top__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__errors);
                __Vtask_tb_gemm_top__DOT__check_tile__5__local_err 
                    = ((IData)(1U) + __Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
                if (VL_UNLIKELY(VL_GTES_III(32, 8U, __Vtask_tb_gemm_top__DOT__check_tile__5__local_err))) {
                    VL_WRITEF_NX("  [FAIL] C[%0d][%0d] got=%0d exp=%0d\n",0,
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tm)),
                                 32,((IData)(7U) + 
                                     VL_MULS_III(32, (IData)(8U), __Vtask_tb_gemm_top__DOT__check_tile__5__tn)),
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__got,
                                 32,__Vtask_tb_gemm_top__DOT__check_tile__5__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp);
                }
            }
            if ((0U == __Vtask_tb_gemm_top__DOT__check_tile__5__local_err)) {
                VL_WRITEF_NX("  [PASS] tile (%0d,%0d)  %0# cycles\n",0,
                             32,__Vtask_tb_gemm_top__DOT__check_tile__5__tm,
                             32,__Vtask_tb_gemm_top__DOT__check_tile__5__tn,
                             32,vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__cyc);
            } else {
                VL_WRITEF_NX("  [FAIL] tile (%0d,%0d): %0d/64 mismatches\n",0,
                             32,__Vtask_tb_gemm_top__DOT__check_tile__5__tm,
                             32,__Vtask_tb_gemm_top__DOT__check_tile__5__tn,
                             32,__Vtask_tb_gemm_top__DOT__check_tile__5__local_err);
            }
            vlSelfRef.tb_gemm_top__DOT__tiles = ((IData)(1U) 
                                                 + vlSelfRef.tb_gemm_top__DOT__tiles);
            vlSelfRef.tb_gemm_top__DOT__total_cycles 
                = (vlSelfRef.tb_gemm_top__DOT__total_cycles 
                   + (QData)((IData)(vlSelfRef.tb_gemm_top__DOT__dut__DOT__u_ctrl__DOT__cyc)));
            vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn 
                = ((IData)(1U) + vlSelfRef.tb_gemm_top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__tn);
        }
        tb_gemm_top__DOT__unnamedblk8__DOT__tm = ((IData)(1U) 
                                                  + tb_gemm_top__DOT__unnamedblk8__DOT__tm);
    }
    VL_WRITEF_NX("\n=====================================================\n  tb_gemm_top summary\n    output tiles : %0#\n    comparisons  : %0#\n    mismatches   : %0#\n    total cycles : %0# (sum over tiles)\n",0,
                 32,vlSelfRef.tb_gemm_top__DOT__tiles,
                 32,vlSelfRef.tb_gemm_top__DOT__checks,
                 32,vlSelfRef.tb_gemm_top__DOT__errors,
                 64,vlSelfRef.tb_gemm_top__DOT__total_cycles);
    if ((0U == vlSelfRef.tb_gemm_top__DOT__errors)) {
        VL_WRITEF_NX("  ==== ALL TESTS PASSED ====\n",0);
    } else {
        VL_WRITEF_NX("  ==== %0# FAILURE(S) ====\n",0,
                     32,vlSelfRef.tb_gemm_top__DOT__errors);
    }
    VL_WRITEF_NX("=====================================================\n",0);
    VL_FINISH_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 248, "");
}

VL_INLINE_OPT VlCoroutine Vtb_gemm_top___024root___eval_initial__TOP__Vtiming__1(Vtb_gemm_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gemm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gemm_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x77359400ULL, 
                                         nullptr, "/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 
                                         253);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_gemm_top.sv:254: Assertion failed in %Ntb_gemm_top: [TB] Global timeout - simulation did not finish.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("/mnt/d/Infineon_Work/systolic_array/tb/tb_gemm_top.sv", 254, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gemm_top___024root___dump_triggers__act(Vtb_gemm_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gemm_top___024root___eval_triggers__act(Vtb_gemm_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gemm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gemm_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_gemm_top__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gemm_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_gemm_top__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gemm_top__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gemm_top__DOT__clk__0 
        = vlSelfRef.tb_gemm_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gemm_top__DOT__rst_n__0 
        = vlSelfRef.tb_gemm_top__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gemm_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
