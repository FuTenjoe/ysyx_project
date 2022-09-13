// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22040175_top___024root___multiclk__TOP__12(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___multiclk__TOP__12\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp706;
    VlWide<3>/*95:0*/ __Vtemp707;
    VlWide<4>/*127:0*/ __Vtemp708;
    VlWide<3>/*95:0*/ __Vtemp709;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__ar_hs 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state)) 
           & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state)));
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_hs 
        = ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state)) 
           & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state)));
    __Vtemp706[0U] = 0xffU;
    __Vtemp706[1U] = 0U;
    __Vtemp706[2U] = 0U;
    __Vtemp706[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp707, vlSelf->ysyx_22040175_top__DOT__axi_r_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp708, __Vtemp706, 
                  (0x38U & (__Vtemp707[0U] << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp709, vlSelf->ysyx_22040175_top__DOT__axi_r_addr);
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__axi_r_data_l 
        = ((vlSelf->ysyx_22040175_top__DOT__r_data 
            & (((QData)((IData)(__Vtemp708[1U])) << 0x20U) 
               | (QData)((IData)(__Vtemp708[0U])))) 
           >> (0x38U & (__Vtemp709[0U] << 3U)));
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__len_incr_en 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__len) 
            != (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__axi_len)) 
           & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_hs) 
              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_hs)));
    vlSelf->ysyx_22040175_top__DOT__r_done2 = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_hs) 
                                               & (IData)(vlSelf->ysyx_22040175_top__DOT__r_last));
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040175_top__ConstPool__TABLE_815565d4_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___multiclk__TOP__13(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___multiclk__TOP__13\n"); );
    // Variables
    SData/*10:0*/ __Vtableidx10;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__trans_done 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__b_hs)
            : (IData)(vlSelf->ysyx_22040175_top__DOT__r_done2));
    __Vtableidx10 = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                      << 0xaU) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_valid) 
                                   << 9U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                              << 8U) 
                                             | (((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
                                                 << 3U) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_815565d4_0
        [__Vtableidx10];
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__rw_ready_en 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__trans_done) 
           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__rw_ready));
}

void Vysyx_22040175_top___024root___sequent__TOP__3(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__4(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__5(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__6(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__7(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__9(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___combo__TOP__10(Vysyx_22040175_top___024root* vlSelf);

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vysyx_22040175_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vysyx_22040175_top___024root___sequent__TOP__6(vlSelf);
        Vysyx_22040175_top___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__10(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->ysyx_22040175_top__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clk))))) {
        Vysyx_22040175_top___024root___multiclk__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->ysyx_22040175_top__DOT__clk) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clk)))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___multiclk__TOP__13(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clk 
        = vlSelf->ysyx_22040175_top__DOT__clk;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
}

QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040175_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/cpu.v:41: ysyx_22040175_top.u_cpu.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
