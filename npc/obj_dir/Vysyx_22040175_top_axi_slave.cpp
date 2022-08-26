// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_axi_slave.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_read_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_read_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_write_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_write_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vysyx_22040175_top_axi_slave___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__4(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__4\n"); );
    // Body
    vlSelf->__PVT__axi_r_id_o = vlSelf->__PVT__axi_ar_id_i;
}

VL_INLINE_OPT void Vysyx_22040175_top_axi_slave___sequent__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__5(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___sequent__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__5\n"); );
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    vlSelf->__Vdly__axi_r_resp_o = vlSelf->__PVT__axi_r_resp_o;
    vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__axi_r_data_o;
    vlSelf->__Vdly__axi_r_last_o = vlSelf->__PVT__axi_r_last_o;
    vlSelf->__Vdly__r_state = vlSelf->__PVT__r_state;
    vlSelf->__Vdly__w_state = vlSelf->__PVT__w_state;
    if (vlSelf->__PVT__reset_n) {
        if (vlSelf->__PVT__ar_hs) {
            Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_read_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(
                                                                                VL_EXTEND_QI(64,32, vlSelf->__PVT__axi_ar_addr_i), vlSelf->__Vtask_pmem_read__0__rdata);
            vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
            vlSelf->__Vdly__axi_r_last_o = 0U;
            vlSelf->__Vdly__axi_r_resp_o = 0U;
        } else if (vlSelf->__PVT__r_hs) {
            if ((0U == (IData)(vlSelf->__PVT__axi_ar_len_i))) {
                vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__rdata;
                vlSelf->__Vdly__axi_r_last_o = 1U;
                vlSelf->__Vdly__axi_r_resp_o = 3U;
            } else if ((VL_EXTEND_II(32,3, (IData)(vlSelf->__PVT__count)) 
                        == (VL_EXTEND_II(32,3, (IData)(vlSelf->__PVT__axi_ar_len_i)) 
                            - (IData)(1U)))) {
                vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__rdata;
                vlSelf->__Vdly__axi_r_last_o = 1U;
                vlSelf->__Vdly__axi_r_resp_o = 3U;
                vlSelf->__Vdly__count = 0U;
            } else {
                vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__rdata;
                Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_read_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(
                                                                                (VL_EXTEND_QI(64,32, vlSelf->__PVT__axi_ar_addr_i) 
                                                                                + 
                                                                                ((0x3fU 
                                                                                >= 2U)
                                                                                 ? 
                                                                                ((1ULL 
                                                                                + 
                                                                                VL_EXTEND_QI(64,3, (IData)(vlSelf->__PVT__count))) 
                                                                                << 2U)
                                                                                 : 0ULL)), vlSelf->__Vtask_pmem_read__1__rdata);
                vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read__1__rdata;
                vlSelf->__Vdly__axi_r_last_o = 0U;
                vlSelf->__Vdly__axi_r_resp_o = 3U;
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
        } else {
            vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__axi_r_data_o;
            vlSelf->__Vdly__axi_r_last_o = 0U;
            vlSelf->__Vdly__axi_r_resp_o = vlSelf->__PVT__axi_r_resp_o;
        }
    } else {
        Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_read_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(0x80000000ULL, vlSelf->__Vtask_pmem_read__2__rdata);
        vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read__2__rdata;
        vlSelf->__Vdly__axi_r_last_o = 0U;
        vlSelf->__Vdly__axi_r_resp_o = 0U;
        vlSelf->__Vdly__count = 0U;
    }
    if (vlSelf->__PVT__reset_n) {
        if ((0U == (IData)(vlSelf->__PVT__r_state))) {
            if (((IData)(vlSelf->__PVT__r_valid) & 
                 (~ (IData)(vlSelf->__PVT__axi_req)))) {
                vlSelf->__Vdly__r_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__r_state))) {
            if (vlSelf->__PVT__ar_hs) {
                vlSelf->__Vdly__r_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__r_state))) {
            if (vlSelf->__PVT__r_done) {
                vlSelf->__Vdly__r_state = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__r_state = 0U;
    }
    if (vlSelf->__PVT__reset_n) {
        if ((0U == (IData)(vlSelf->__PVT__w_state))) {
            if (((IData)(vlSelf->__PVT__r_valid) & (IData)(vlSelf->__PVT__axi_req))) {
                vlSelf->__Vdly__w_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__w_state))) {
            if (vlSelf->__PVT__aw_hs) {
                vlSelf->__Vdly__w_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__w_state))) {
            if (vlSelf->__PVT__w_done) {
                vlSelf->__Vdly__w_state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__w_state))) {
            if (vlSelf->__PVT__b_hs) {
                vlSelf->__Vdly__w_state = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__w_state = 0U;
    }
    vlSelf->__PVT__count = vlSelf->__Vdly__count;
    vlSelf->__PVT__axi_r_resp_o = vlSelf->__Vdly__axi_r_resp_o;
    vlSelf->__PVT__axi_r_data_o = vlSelf->__Vdly__axi_r_data_o;
    vlSelf->__PVT__axi_r_last_o = vlSelf->__Vdly__axi_r_last_o;
    vlSelf->__PVT__r_state = vlSelf->__Vdly__r_state;
    vlSelf->__PVT__w_state = vlSelf->__Vdly__w_state;
    vlSelf->__PVT__r_state_idle = (0U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__r_state_read = (2U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__r_state_addr = (1U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_idle = (0U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_addr = (1U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_resp = (3U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_write = (2U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__axi_r_valid_o = vlSelf->__PVT__r_state_read;
    vlSelf->__PVT__axi_ar_ready_o = vlSelf->__PVT__r_state_addr;
    vlSelf->__PVT__axi_aw_ready_o = vlSelf->__PVT__w_state_addr;
    vlSelf->__PVT__axi_b_valid_o = vlSelf->__PVT__w_state_resp;
    vlSelf->__PVT__axi_w_ready_o = vlSelf->__PVT__w_state_write;
}

VL_INLINE_OPT void Vysyx_22040175_top_axi_slave___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__6(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__6\n"); );
    // Body
    vlSelf->__PVT__r_hs = ((IData)(vlSelf->__PVT__axi_r_ready_i) 
                           & (IData)(vlSelf->__PVT__axi_r_valid_o));
    vlSelf->__PVT__ar_hs = ((IData)(vlSelf->__PVT__axi_ar_ready_o) 
                            & (IData)(vlSelf->__PVT__axi_ar_valid_i));
    vlSelf->__PVT__aw_hs = ((IData)(vlSelf->__PVT__axi_aw_ready_o) 
                            & (IData)(vlSelf->__PVT__axi_aw_valid_i));
    vlSelf->__PVT__b_hs = ((IData)(vlSelf->__PVT__axi_b_ready_i) 
                           & (IData)(vlSelf->__PVT__axi_b_valid_o));
    vlSelf->__PVT__w_hs = ((IData)(vlSelf->__PVT__axi_w_ready_o) 
                           & (IData)(vlSelf->__PVT__axi_w_valid_i));
    vlSelf->__PVT__r_done = ((IData)(vlSelf->__PVT__r_hs) 
                             & (IData)(vlSelf->__PVT__axi_r_last_o));
    vlSelf->__PVT__w_done = ((IData)(vlSelf->__PVT__w_hs) 
                             & (IData)(vlSelf->__PVT__axi_w_last_i));
}

VL_INLINE_OPT void Vysyx_22040175_top_axi_slave___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__7(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__7\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__w_hs) & (IData)(vlSelf->__PVT__axi_req))) {
        Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_write_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(vlSelf->__PVT__axi_aw_addr_i, vlSelf->__PVT__axi_w_data_i, (IData)(vlSelf->__PVT__axi_w_strb_i));
    }
}
