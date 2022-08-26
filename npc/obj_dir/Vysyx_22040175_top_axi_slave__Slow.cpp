// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_axi_slave.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_axi_slave___ctor_var_reset(Vysyx_22040175_top_axi_slave* vlSelf);

Vysyx_22040175_top_axi_slave::Vysyx_22040175_top_axi_slave(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_axi_slave___ctor_var_reset(this);
}

void Vysyx_22040175_top_axi_slave::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_axi_slave::~Vysyx_22040175_top_axi_slave() {
}

void Vysyx_22040175_top_axi_slave___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__1(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__1\n"); );
    // Body
    vlSelf->__PVT__axi_r_id_o = vlSelf->__PVT__axi_ar_id_i;
    vlSelf->__PVT__r_state_idle = (0U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_idle = (0U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__w_state_addr = (1U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__r_state_read = (2U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_resp = (3U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__r_state_addr = (1U == (IData)(vlSelf->__PVT__r_state));
    vlSelf->__PVT__w_state_write = (2U == (IData)(vlSelf->__PVT__w_state));
    vlSelf->__PVT__axi_aw_ready_o = vlSelf->__PVT__w_state_addr;
    vlSelf->__PVT__axi_r_valid_o = vlSelf->__PVT__r_state_read;
    vlSelf->__PVT__axi_b_valid_o = vlSelf->__PVT__w_state_resp;
    vlSelf->__PVT__axi_ar_ready_o = vlSelf->__PVT__r_state_addr;
    vlSelf->__PVT__axi_w_ready_o = vlSelf->__PVT__w_state_write;
}

void Vysyx_22040175_top_axi_slave___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__2(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__2\n"); );
    // Body
    vlSelf->__PVT__aw_hs = ((IData)(vlSelf->__PVT__axi_aw_ready_o) 
                            & (IData)(vlSelf->__PVT__axi_aw_valid_i));
    vlSelf->__PVT__b_hs = ((IData)(vlSelf->__PVT__axi_b_ready_i) 
                           & (IData)(vlSelf->__PVT__axi_b_valid_o));
    vlSelf->__PVT__r_hs = ((IData)(vlSelf->__PVT__axi_r_ready_i) 
                           & (IData)(vlSelf->__PVT__axi_r_valid_o));
    vlSelf->__PVT__ar_hs = ((IData)(vlSelf->__PVT__axi_ar_ready_o) 
                            & (IData)(vlSelf->__PVT__axi_ar_valid_i));
    vlSelf->__PVT__w_hs = ((IData)(vlSelf->__PVT__axi_w_ready_o) 
                           & (IData)(vlSelf->__PVT__axi_w_valid_i));
    vlSelf->__PVT__r_done = ((IData)(vlSelf->__PVT__r_hs) 
                             & (IData)(vlSelf->__PVT__axi_r_last_o));
    vlSelf->__PVT__w_done = ((IData)(vlSelf->__PVT__w_hs) 
                             & (IData)(vlSelf->__PVT__axi_w_last_i));
}

void Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_write_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_22040175_top_axi_slave___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__3(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_slave__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__w_hs) & (IData)(vlSelf->__PVT__axi_req))) {
        Vysyx_22040175_top_axi_slave____Vdpiimwrap_pmem_write_TOP__ysyx_22040175_top__u_if_stage__u_axi_slave(vlSelf->__PVT__axi_aw_addr_i, vlSelf->__PVT__axi_w_data_i, (IData)(vlSelf->__PVT__axi_w_strb_i));
    }
}

void Vysyx_22040175_top_axi_slave___ctor_var_reset(Vysyx_22040175_top_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_slave___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ar_id_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_ar_len_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ar_size_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ar_burst_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_r_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_resp_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_r_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_r_last_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_id_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_addr_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_w_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_w_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_w_strb_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_w_last_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_b_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_b_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__r_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__r_state_idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_state_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_state_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_state_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__count = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__1__rdata = 0;
    vlSelf->__Vtask_pmem_read__2__rdata = 0;
    vlSelf->__Vdly__w_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__r_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__axi_r_last_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__axi_r_resp_o = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__axi_r_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__count = VL_RAND_RESET_I(3);
}
