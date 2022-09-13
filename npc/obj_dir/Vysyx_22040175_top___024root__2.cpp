// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22040175_top__ConstPool__TABLE_50dc1975_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_22040175_top__ConstPool__TABLE_2f9742b5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_badf2d89_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_97f8acd6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_39a1da1f_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_f1b32816_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_1dfb839f_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_61515356_0;
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__5(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*1:0*/ __Vdly__ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state;
    CData/*1:0*/ __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state;
    CData/*1:0*/ __Vdly__ysyx_22040175_top__DOT__r_resp;
    CData/*2:0*/ __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__1__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__2__rdata;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__r_data;
    // Body
    __Vdly__ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state 
        = vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state;
    __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count 
        = vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__count;
    __Vdly__ysyx_22040175_top__DOT__r_data = vlSelf->ysyx_22040175_top__DOT__r_data;
    __Vdly__ysyx_22040175_top__DOT__r_resp = vlSelf->ysyx_22040175_top__DOT__r_resp;
    __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state 
        = vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state;
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_req) 
                     << 7U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__mem_req_valid2) 
                                << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__aw_hs) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_done) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__b_hs) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)))))));
    if (Vysyx_22040175_top__ConstPool__TABLE_50dc1975_0
        [__Vtableidx3]) {
        vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state 
            = Vysyx_22040175_top__ConstPool__TABLE_2f9742b5_0
            [__Vtableidx3];
    }
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__ar_hs) 
                                << 4U) | ((((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_axi_rw__rw_valid_i) 
                                            & (1U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if (Vysyx_22040175_top__ConstPool__TABLE_badf2d89_0
        [__Vtableidx2]) {
        __Vdly__ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state 
            = Vysyx_22040175_top__ConstPool__TABLE_97f8acd6_0
            [__Vtableidx2];
    }
    __Vtableidx1 = ((((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_axi_rw__rw_valid_i) 
                      & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) 
                     << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__aw_hs) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__w_done) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__b_hs) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if (Vysyx_22040175_top__ConstPool__TABLE_39a1da1f_0
        [__Vtableidx1]) {
        vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_state 
            = Vysyx_22040175_top__ConstPool__TABLE_f1b32816_0
            [__Vtableidx1];
    }
    __Vtableidx4 = ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_hs) 
                      & (IData)(vlSelf->ysyx_22040175_top__DOT__r_last)) 
                     << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__ar_hs) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_req) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__mem_req_valid2) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state) 
                                               << 1U) 
                                              | (IData)(vlSelf->ysyx_22040175_top__DOT__rst_n))))));
    if (Vysyx_22040175_top__ConstPool__TABLE_1dfb839f_0
        [__Vtableidx4]) {
        __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state 
            = Vysyx_22040175_top__ConstPool__TABLE_61515356_0
            [__Vtableidx4];
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040175_top__DOT__rdata = 0ULL;
    } else if (((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state)) 
                & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state)))) {
        vlSelf->ysyx_22040175_top__DOT__rdata = vlSelf->ysyx_22040175_top__DOT__r_data;
    }
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state 
        = __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state;
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state 
        = __Vdly__ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state;
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__aw_hs 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state)) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_aw_valid_i));
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__b_hs 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_b_ready_i) 
           & (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state)));
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_done 
        = (((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state)) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_w_valid_i)) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_w_last_i));
    if ((((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state)) 
          & (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_w_valid_i)) 
         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_req))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_write_TOP(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_aw_addr_i, vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_w_data_i, (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_w_strb_i));
    }
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__aw_hs 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__aw_ready) 
           & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_state)));
    vlSelf->ysyx_22040175_top__DOT__b_hs = ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_state)) 
                                            & (IData)(vlSelf->ysyx_22040175_top__DOT__b_valid));
    vlSelf->ysyx_22040175_top__DOT__w_done = (((IData)(vlSelf->ysyx_22040175_top__DOT__w_ready) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_state))) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_state)));
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if (vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__ar_hs) {
            Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read_TOP((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__axi_r_addr)), __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__0__rdata);
            vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata 
                = __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__0__rdata;
            vlSelf->ysyx_22040175_top__DOT__r_last = 0U;
            __Vdly__ysyx_22040175_top__DOT__r_resp = 0U;
        } else if (vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_hs) {
            if ((1U == (((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
                         | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))
                         ? 1U : 0U))) {
                __Vdly__ysyx_22040175_top__DOT__r_data 
                    = vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata;
                vlSelf->ysyx_22040175_top__DOT__r_last = 1U;
                __Vdly__ysyx_22040175_top__DOT__r_resp = 3U;
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__count) 
                        == ((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
                              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))
                              ? 1U : 0U) - (IData)(1U)))) {
                __Vdly__ysyx_22040175_top__DOT__r_data 
                    = vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata;
                vlSelf->ysyx_22040175_top__DOT__r_last = 1U;
                __Vdly__ysyx_22040175_top__DOT__r_resp = 3U;
                __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count = 0U;
            } else {
                __Vdly__ysyx_22040175_top__DOT__r_data 
                    = vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata;
                vlSelf->ysyx_22040175_top__DOT__r_last = 0U;
                __Vdly__ysyx_22040175_top__DOT__r_resp = 3U;
                Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read_TOP(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__axi_r_addr)) 
                                                                                + 
                                                                                ((1ULL 
                                                                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__count))) 
                                                                                << 2U)), __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__1__rdata);
                vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata 
                    = __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__1__rdata;
                __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__count)));
            }
        } else {
            __Vdly__ysyx_22040175_top__DOT__r_data 
                = vlSelf->ysyx_22040175_top__DOT__r_data;
            __Vdly__ysyx_22040175_top__DOT__r_resp 
                = vlSelf->ysyx_22040175_top__DOT__r_resp;
            vlSelf->ysyx_22040175_top__DOT__r_last = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count = 0U;
        }
    } else {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read_TOP(0x80000000ULL, __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__2__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata 
            = __Vtask_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_read__2__rdata;
        vlSelf->ysyx_22040175_top__DOT__r_last = 0U;
        __Vdly__ysyx_22040175_top__DOT__r_resp = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__r_resp = __Vdly__ysyx_22040175_top__DOT__r_resp;
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__count 
        = __Vdly__ysyx_22040175_top__DOT__u_axi_slave2__DOT__count;
    vlSelf->ysyx_22040175_top__DOT__r_data = __Vdly__ysyx_22040175_top__DOT__r_data;
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_hs 
        = ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state)) 
           & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state)));
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__ar_hs 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state)) 
           & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state)));
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__9(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__9\n"); );
    // Body
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause = 0x8000000000000007ULL;
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause = 0xbULL;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause 
                                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                        }
                    }
                } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                    if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause 
                            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                               | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec 
                                            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                                    }
                                }
                            }
                        } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec 
                                        = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                           | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_pc;
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
                            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_pc;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
                            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                    }
                } else if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
                        = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                           | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest 
        = (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump)) 
             | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mret_flag)) 
            | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ecall_flag)) 
           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                        if ((0x300U 
                                             != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                            if ((0x304U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie 
                                                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    if ((0x300U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                        if ((0x304U 
                                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie 
                                                = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                   | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
            = ((0xffffffffffffff7fULL & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus) 
               | ((QData)((IData)((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus 
                                                 >> 3U))))) 
                  << 7U));
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
            = (0xfffffffffffffff7ULL & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus);
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = ((0xfffffffffffffff7ULL 
                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus 
                                                              >> 7U))))) 
                                  << 3U));
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = (0x80ULL | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus);
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = ((0xffffffffffffff7fULL 
                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus 
                                                              >> 3U))))) 
                                  << 7U));
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = (0xfffffffffffffff7ULL 
                               & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                                }
                            }
                        }
                    }
                } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                    if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                                    = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                       | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
        = ((((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag)) 
               | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag))) 
              | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag))) 
             | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_cunqu_hazard)))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_from_ex_alu_res);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_r_done2 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done));
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
               & 1U);
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__next_state 
        = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
            ? ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                ? 0U : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                         ? 0U : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint)
                                  ? 3U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__axi_ar_id_o)))
                                                     ? 3U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                    ? 2U
                                                    : 
                                                   ((((((1U 
                                                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)) 
                                                        | (2U 
                                                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                       | (4U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                      | (6U 
                                                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                     & ((0x2004000ULL 
                                                         != 
                                                         (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                          + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)) 
                                                        & (0x200bff8ULL 
                                                           != 
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                            + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))))
                                                     ? 1U
                                                     : 
                                                    (((0x2004000ULL 
                                                       == 
                                                       (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                        + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)) 
                                                      | (0x200bff8ULL 
                                                         == 
                                                         (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                          + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)))
                                                      ? 4U
                                                      : 0U)))));
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__10(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__10\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) {
        if (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
               & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
              & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
             & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                    ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))
                    : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                        ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))
                        : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                            ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
                                                                   >> 0xfU)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))))
                                : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))
                            : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))
                                : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))));
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[1U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[2U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[3U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[4U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[5U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[6U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[7U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[8U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[9U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0xaU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0xbU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0xcU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0xdU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0xeU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0xfU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x10U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x11U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x12U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x13U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x14U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x15U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x16U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x17U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x18U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x19U] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x1aU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x1bU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x1cU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x1dU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x1eU] = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[0x1fU] = 0ULL;
    }
    if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                & (0x2004000ULL != (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                                    + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm)))))
                ? 1U : (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                          & (0x2004000ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
                                              [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                                              + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm))))) 
                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag))
                         ? 4U : 0U));
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__wr_finish)
                ? 3U : 4U);
    } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__w_done)
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__b_hs)
                ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__11(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__axi_r_addr = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))
                                                      ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr
                                                      : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_addr))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))
                                                      ? 0ULL
                                                      : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_addr)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))
                                                      ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr
                                                      : 0ULL)))
                                                   : 0ULL);
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) {
        if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_ready)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_addr 
                    = (0xfffffffffffffff0ULL & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc);
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_ready 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_r_ready_o2) 
           & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_ar_id_o)));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__12(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__r_done2 = (((2U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__r_state)) 
                                                & (2U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state))) 
                                               & (IData)(vlSelf->ysyx_22040175_top__DOT__r_last));
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___multiclk__TOP__13(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___multiclk__TOP__13\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint)
            ? ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                ? ((0x2004000ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                     + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))
                    ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mtimecmp
                    : ((0x200bff8ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                         + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))
                        ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__mtime
                        : 0ULL)) : 0ULL) : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done)
                                             ? vlSelf->ysyx_22040175_top__DOT__rdata
                                             : 0ULL));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw));
                            } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw;
                            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw))));
                            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))
                        : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
            | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res);
}

extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__14(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__14\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx9;
    VlWide<10>/*319:0*/ __Vtemp684;
    VlWide<10>/*319:0*/ __Vtemp685;
    VlWide<10>/*319:0*/ __Vtemp686;
    VlWide<10>/*319:0*/ __Vtemp687;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__if_pc;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state)
            : 0U);
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
            ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                    >> 4U)) << 1U))][9U] 
                >> 0x16U) & ((0x3fffffffffffffULL & 
                              (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                [(0x7eU 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 4U)) 
                                                     << 1U))][9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                            [
                                                            (0x7eU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))][8U])))) 
                             == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                 >> 0xaU))) : ((3U 
                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                               & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                   [
                                                   (0x7eU 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                >> 4U)) 
                                                       << 1U))][9U] 
                                                   >> 0x16U) 
                                                  & ((0x3fffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                          [
                                                                          (0x7eU 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                              << 1U))][9U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                           [
                                                                           (0x7eU 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                               << 1U))][8U])))) 
                                                     == 
                                                     (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                      >> 0xaU)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1) 
              | ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
                  ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                       >> 0xaU))) : 
                 ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                  & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                       >> 0xaU)))))));
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_axi_rw__rw_valid_i 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
            | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
           | (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)));
    vlSelf->ysyx_22040175_top__DOT__r_id = (((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
                                             | (2U 
                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))
                                             ? 1U : 
                                            (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
                                              | (5U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))
                                              ? 2U : 0U));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__way 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))) 
           & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
               [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                   >> 4U)) << 1U))][9U] 
               >> 0x16U) & (~ (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                               [(0x7fU & ((IData)(1U) 
                                          + (0xfeU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                         >> 4U)) 
                                                << 1U))))][9U] 
                               >> 0x16U))));
    __Vtableidx9 = (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__count)) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__if_valid) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0
        [__Vtableidx9];
    __Vtemp684[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][0U];
    __Vtemp684[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][1U];
    __Vtemp684[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][2U];
    __Vtemp684[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][3U];
    __Vtemp684[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][4U];
    __Vtemp684[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][5U];
    __Vtemp684[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][6U];
    __Vtemp684[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][7U];
    __Vtemp684[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][8U];
    __Vtemp684[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][9U];
    __Vtemp685[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp685[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp685[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp685[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp685[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp685[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp685[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp685[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp685[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp685[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    __Vtemp686[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][0U];
    __Vtemp686[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][1U];
    __Vtemp686[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][2U];
    __Vtemp686[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][3U];
    __Vtemp686[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][4U];
    __Vtemp686[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][5U];
    __Vtemp686[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][6U];
    __Vtemp686[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][7U];
    __Vtemp686[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][8U];
    __Vtemp686[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][9U];
    __Vtemp687[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp687[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp687[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp687[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp687[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp687[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp687[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp687[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp687[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp687[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
            ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                ? ((0x136U >= (0xc0U & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                 >> 2U)) 
                                        << 6U))) ? 
                   (((QData)((IData)(__Vtemp684[(((IData)(0x3fU) 
                                                  + 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                               >> 2U)) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                     << 0x20U) | (QData)((IData)(__Vtemp684[
                                                 (6U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 2U)) 
                                                     << 1U))])))
                    : 0ULL) : ((0x136U >= (0xc0U & 
                                           ((IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                     >> 2U)) 
                                            << 6U)))
                                ? (((QData)((IData)(
                                                    __Vtemp685[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                   >> 2U)) 
                                                          << 6U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp685[
                                                                (6U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                             >> 2U)) 
                                                                    << 1U))])))
                                : 0ULL)) : (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
                                             ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                                                 ? 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp686[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp686[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL)
                                                 : 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp687[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp687[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL))
                                             : 0ULL));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit));
    __Vtableidx7 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_div) 
                     << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_mul) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__div_finish) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0
        [__Vtableidx7];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__delay_control_rest)))
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction)
            : 0x13U);
    vlSelf->inst = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst;
}

extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__15(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__15\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx5;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_from_id) 
            << 2U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem) 
                       << 1U) | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_wb_hazard)));
    if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
                if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                               == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res)))));
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res));
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res)));
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            }
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
    }
    __Vtableidx5 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                     << 7U) | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                                << 6U) | ((0x20U & 
                                           ((~ ((1U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)) 
                                                | (2U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)))) 
                                            << 5U)) 
                                          | (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                                              << 4U) 
                                             | ((((((1U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                  | (6U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                 << 3U) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0
        [__Vtableidx5];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
    } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
            } else if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
        } else if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
        } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
        } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
        } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
        } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))
                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm
                : 4ULL);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 = 0ULL;
    } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
            } else if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc;
            } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause;
            } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec;
            } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus;
            } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
        } else if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc;
        } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause;
        } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec;
        } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus;
        } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie;
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))
                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc
                : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))
                    ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm
                    : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata));
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero 
        = ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
            ? (IData)(((0U == (0xcU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                       & ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                           ? ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op)) 
                              & (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                 < vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))
                           : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op) 
                              & VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2)))))
            : ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                ? ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                    ? (IData)(((0U == (3U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                               & (0ULL != (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                           - vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))))
                    : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op) 
                        >> 1U) & ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                                   ? (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                      >= vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2)
                                   : VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2))))
                : (IData)(((4U == (7U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                           & (0ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                       - vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sig_jalr 
        = ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
               & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) 
           & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
                  & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) 
              & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                     & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)))) 
                 & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)) 
                    & (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)) 
                          | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                         | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (4ULL + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr))) {
        if ((1U & (~ (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)) 
                         | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                      | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)))))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
                = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f
                   [(0x1fU & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)] 
                   + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_sig_jalr)
                ? (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__delay_reg1_rdata 
                   + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm)
                : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_ebreak_flag)
                    ? 0x80000000ULL : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ecall_flag)
                                        ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec
                                        : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mret_flag)
                                            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc
                                            : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)
                                                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec
                                                : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)))));
    }
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040175_top__ConstPool__TABLE_815565d4_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___multiclk__TOP__16(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___multiclk__TOP__16\n"); );
    // Variables
    SData/*10:0*/ __Vtableidx10;
    // Body
    __Vtableidx10 = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                      << 0xaU) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_valid) 
                                   << 9U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                              << 8U) 
                                             | (((IData)(vlSelf->ysyx_22040175_top__DOT__r_id) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_815565d4_0
        [__Vtableidx10];
}

void Vysyx_22040175_top___024root___sequent__TOP__1(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__2(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__3(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__4(Vysyx_22040175_top___024root* vlSelf);

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22040175_top___024root___sequent__TOP__2(vlSelf);
        Vysyx_22040175_top___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) {
        Vysyx_22040175_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__10(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) {
        Vysyx_22040175_top___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__12(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___multiclk__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__15(vlSelf);
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___multiclk__TOP__16(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock 
        = vlSelf->ysyx_22040175_top__DOT__clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->time_set & 0xfeU))) {
        Verilated::overWidthError("time_set");}
}
#endif  // VL_DEBUG
