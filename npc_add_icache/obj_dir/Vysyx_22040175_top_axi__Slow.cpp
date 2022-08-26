// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_axi.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_axi___ctor_var_reset(Vysyx_22040175_top_axi* vlSelf);

Vysyx_22040175_top_axi::Vysyx_22040175_top_axi(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_axi___ctor_var_reset(this);
}

void Vysyx_22040175_top_axi::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_axi::~Vysyx_22040175_top_axi() {
}

void Vysyx_22040175_top_axi___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi__1(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi__1\n"); );
    // Body
    vlSelf->__PVT__w_state_idle = (0U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__r_state_idle = (0U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_addr = (1U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_resp = (3U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__r_state_read = (2U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__r_state_addr = (1U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_write = (2U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__axi_r_data_l = vlSelf->__PVT__axi_r_data_i;
    vlSelf->__PVT__axi_ar_id_o = vlSelf->__PVT__axi_r_id_i;
    vlSelf->__PVT__axi_ar_addr_o = vlSelf->__PVT__rw_addr_i;
    vlSelf->__PVT__axi_aw_addr_o = vlSelf->__PVT__rw_addr_i;
    vlSelf->__PVT__axi_aw_valid_o = vlSelf->__PVT__w_state_addr;
    vlSelf->__PVT__axi_b_ready_o = vlSelf->__PVT__w_state_resp;
    vlSelf->__PVT__axi_r_ready_o = vlSelf->__PVT__r_state_read;
    vlSelf->__PVT__axi_ar_valid_o = vlSelf->__PVT__r_state_addr;
    vlSelf->__PVT__axi_w_last_o = vlSelf->__PVT__w_state_write;
    vlSelf->__PVT__axi_w_valid_o = vlSelf->__PVT__w_state_write;
}

void Vysyx_22040175_top_axi___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi__2(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi__2\n"); );
    // Body
    vlSelf->__PVT__axi_w_strb_o = vlSelf->__PVT__rw_size_i;
    vlSelf->__PVT__axi_w_data_o = vlSelf->__PVT__rw_w_data_i;
    vlSelf->__PVT__aw_hs = ((IData)(vlSelf->__PVT__axi_aw_ready_i) 
                            & (IData)(vlSelf->__PVT__axi_aw_valid_o));
    vlSelf->__PVT__r_hs = ((IData)(vlSelf->__PVT__axi_r_ready_o) 
                           & (IData)(vlSelf->__PVT__axi_r_valid_i));
    vlSelf->__PVT__b_hs = ((IData)(vlSelf->__PVT__axi_b_ready_o) 
                           & (IData)(vlSelf->__PVT__axi_b_valid_i));
    vlSelf->__PVT__ar_hs = ((IData)(vlSelf->__PVT__axi_ar_ready_i) 
                            & (IData)(vlSelf->__PVT__axi_ar_valid_o));
    vlSelf->__PVT__w_hs = ((IData)(vlSelf->__PVT__axi_w_ready_i) 
                           & (IData)(vlSelf->__PVT__axi_w_valid_o));
    vlSelf->__PVT__axi_ar_len_o = ((IData)(vlSelf->__PVT__rw_burst)
                                    ? 4U : 0U);
    vlSelf->__PVT__r_done = ((IData)(vlSelf->__PVT__r_hs) 
                             & (IData)(vlSelf->__PVT__axi_r_last_i));
    vlSelf->__PVT__w_done = ((IData)(vlSelf->__PVT__w_hs) 
                             & (IData)(vlSelf->__PVT__axi_w_last_o));
}

void Vysyx_22040175_top_axi___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi__3(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi__3\n"); );
    // Body
    vlSelf->__PVT__w_trans = vlSelf->__PVT__rw_req_i;
    vlSelf->__PVT__r_trans = (1U & (~ (IData)(vlSelf->__PVT__rw_req_i)));
    vlSelf->__PVT__w_valid = ((IData)(vlSelf->__PVT__rw_valid_i) 
                              & (IData)(vlSelf->__PVT__w_trans));
    vlSelf->__PVT__r_valid = ((IData)(vlSelf->__PVT__rw_valid_i) 
                              & (IData)(vlSelf->__PVT__r_trans));
}

void Vysyx_22040175_top_axi___initial__TOP__ysyx_22040175_top__u_if_stage__u_axi__4(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___initial__TOP__ysyx_22040175_top__u_if_stage__u_axi__4\n"); );
    // Body
    vlSelf->__PVT__axi_ar_burst_o = 1U;
    vlSelf->__PVT__axi_ar_size_o = 0x40U;
}

void Vysyx_22040175_top_axi___ctor_var_reset(Vysyx_22040175_top_axi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rw_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rw_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rw_req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_read_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rw_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rw_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rw_size_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__rw_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_w_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_w_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_w_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_w_strb_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_w_last_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_b_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_b_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ar_id_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_ar_len_o = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ar_size_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ar_burst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ar_cache_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_resp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_r_data_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_r_last_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_id_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__w_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_trans = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_trans = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__r_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__w_state_idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_state_idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_state_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_state_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_data_l = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__w_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__r_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__data_read_o = VL_RAND_RESET_Q(64);
}
