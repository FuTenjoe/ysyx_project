// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_axi.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_axi___sequent__TOP__ysyx_22040175_top__u_if_stage__u_axi__5(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___sequent__TOP__ysyx_22040175_top__u_if_stage__u_axi__5\n"); );
    // Body
    vlSelf->__Vdly__r_state = vlSelf->__PVT__r_state;
    vlSelf->__Vdly__w_state = vlSelf->__PVT__w_state;
    vlSelf->__Vdly__data_read_o = vlSelf->__PVT__data_read_o;
    if (vlSelf->__PVT__reset_n) {
        if ((0U == (IData)(vlSelf->__PVT__r_state))) {
            if (vlSelf->__PVT__r_valid) {
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
            if (vlSelf->__PVT__w_valid) {
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
    if (vlSelf->__PVT__reset_n) {
        if (((IData)(vlSelf->__PVT__axi_r_ready_o) 
             & (IData)(vlSelf->__PVT__axi_r_valid_i))) {
            vlSelf->__Vdly__data_read_o = vlSelf->__PVT__axi_r_data_l;
        }
    } else {
        vlSelf->__Vdly__data_read_o = 0ULL;
    }
    vlSelf->__PVT__r_state = vlSelf->__Vdly__r_state;
    vlSelf->__PVT__w_state = vlSelf->__Vdly__w_state;
    vlSelf->__PVT__data_read_o = vlSelf->__Vdly__data_read_o;
    vlSelf->__PVT__r_state_idle = (0U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__r_state_read = (2U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__r_state_addr = (1U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_idle = (0U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_addr = (1U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_resp = (3U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_write = (2U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__axi_r_ready_o = vlSelf->__PVT__r_state_read;
    vlSelf->__PVT__axi_ar_valid_o = vlSelf->__PVT__r_state_addr;
    vlSelf->__PVT__axi_aw_valid_o = vlSelf->__PVT__w_state_addr;
    vlSelf->__PVT__axi_b_ready_o = vlSelf->__PVT__w_state_resp;
    vlSelf->__PVT__axi_w_last_o = vlSelf->__PVT__w_state_write;
    vlSelf->__PVT__axi_w_valid_o = vlSelf->__PVT__w_state_write;
}

VL_INLINE_OPT void Vysyx_22040175_top_axi___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi__6(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi__6\n"); );
    // Body
    vlSelf->__PVT__axi_ar_addr_o = vlSelf->__PVT__rw_addr_i;
    vlSelf->__PVT__axi_aw_addr_o = vlSelf->__PVT__rw_addr_i;
    vlSelf->__PVT__axi_r_data_l = vlSelf->__PVT__axi_r_data_i;
    vlSelf->__PVT__ar_hs = ((IData)(vlSelf->__PVT__axi_ar_ready_i) 
                            & (IData)(vlSelf->__PVT__axi_ar_valid_o));
    vlSelf->__PVT__aw_hs = ((IData)(vlSelf->__PVT__axi_aw_ready_i) 
                            & (IData)(vlSelf->__PVT__axi_aw_valid_o));
    vlSelf->__PVT__b_hs = ((IData)(vlSelf->__PVT__axi_b_ready_o) 
                           & (IData)(vlSelf->__PVT__axi_b_valid_i));
    vlSelf->__PVT__w_hs = ((IData)(vlSelf->__PVT__axi_w_ready_i) 
                           & (IData)(vlSelf->__PVT__axi_w_valid_o));
    vlSelf->__PVT__axi_ar_id_o = vlSelf->__PVT__axi_r_id_i;
    vlSelf->__PVT__axi_ar_len_o = ((IData)(vlSelf->__PVT__rw_burst)
                                    ? 4U : 0U);
    vlSelf->__PVT__axi_w_data_o = vlSelf->__PVT__rw_w_data_i;
    vlSelf->__PVT__axi_w_strb_o = vlSelf->__PVT__rw_size_i;
    vlSelf->__PVT__w_trans = vlSelf->__PVT__rw_req_i;
    vlSelf->__PVT__r_trans = (1U & (~ (IData)(vlSelf->__PVT__rw_req_i)));
    vlSelf->__PVT__w_done = ((IData)(vlSelf->__PVT__w_hs) 
                             & (IData)(vlSelf->__PVT__axi_w_last_o));
    vlSelf->__PVT__w_valid = ((IData)(vlSelf->__PVT__rw_valid_i) 
                              & (IData)(vlSelf->__PVT__w_trans));
    vlSelf->__PVT__r_valid = ((IData)(vlSelf->__PVT__rw_valid_i) 
                              & (IData)(vlSelf->__PVT__r_trans));
}

VL_INLINE_OPT void Vysyx_22040175_top_axi___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi__7(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi__7\n"); );
    // Body
    vlSelf->__PVT__r_hs = ((IData)(vlSelf->__PVT__axi_r_ready_o) 
                           & (IData)(vlSelf->__PVT__axi_r_valid_i));
    vlSelf->__PVT__r_done = ((IData)(vlSelf->__PVT__r_hs) 
                             & (IData)(vlSelf->__PVT__axi_r_last_i));
}
