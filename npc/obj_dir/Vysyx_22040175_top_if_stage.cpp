// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_if_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__8(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__8\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__clock 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__clock 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__10(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__10\n"); );
    // Body
    vlSelf->__Vdly__d_r_ready_o = vlSelf->__PVT__d_r_ready_o;
    vlSelf->__Vdly__dd_r_ready_o = vlSelf->__PVT__dd_r_ready_o;
    vlSelf->__Vdly__delay_rw_burst = vlSelf->__PVT__delay_rw_burst;
    if (vlSelf->__PVT__rst_n) {
        vlSelf->__Vdly__d_r_ready_o = vlSelf->__PVT__axi_r_ready_o;
        vlSelf->__Vdly__dd_r_ready_o = vlSelf->__PVT__d_r_ready_o;
    } else {
        vlSelf->__Vdly__d_r_ready_o = 0U;
        vlSelf->__Vdly__dd_r_ready_o = 0U;
    }
    vlSelf->__Vdly__delay_rw_burst = ((IData)(vlSelf->__PVT__rst_n) 
                                      & (IData)(vlSelf->__PVT__rw_burst));
    vlSelf->__PVT__d_r_ready_o = vlSelf->__Vdly__d_r_ready_o;
    vlSelf->__PVT__dd_r_ready_o = vlSelf->__Vdly__dd_r_ready_o;
    vlSelf->__PVT__delay_rw_burst = vlSelf->__Vdly__delay_rw_burst;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_req_valid 
        = vlSelf->__PVT__delay_rw_burst;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__11(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__11\n"); );
    // Body
    vlSelf->__Vdly__delay_r_done = vlSelf->__PVT__delay_r_done;
    vlSelf->__Vdly__delay_r_done = ((IData)(vlSelf->__PVT__rst_n) 
                                    & (IData)(vlSelf->__PVT__r_done));
    vlSelf->__PVT__delay_r_done = vlSelf->__Vdly__delay_r_done;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__r_done 
        = vlSelf->__PVT__delay_r_done;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__12(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__12\n"); );
    // Body
    vlSelf->__PVT__if_send_id = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__if_send_id;
    vlSelf->__PVT__if_valid = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__if_valid;
    vlSelf->__PVT__curr_pc = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__curr_pc;
    vlSelf->__PVT__ena = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ena;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__if_valid 
        = vlSelf->__PVT__if_valid;
    vlSelf->__Vcellinp__u_axi_judge__pc = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__curr_pc, 0U, 0x20U);
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__13(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__13\n"); );
    // Body
    vlSelf->__PVT__axi_r_resp_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_resp_o;
    vlSelf->__PVT__axi_r_data_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_data_o;
    vlSelf->__PVT__axi_r_last_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_last_o;
    vlSelf->__PVT__axi_r_valid_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_valid_o;
    vlSelf->__PVT__axi_ar_ready_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_ready_o;
    vlSelf->__PVT__axi_aw_ready_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_aw_ready_o;
    vlSelf->__PVT__axi_b_valid_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_b_valid_o;
    vlSelf->__PVT__axi_w_ready_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_resp_i 
        = vlSelf->__PVT__axi_r_resp_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_data_i 
        = vlSelf->__PVT__axi_r_data_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_last_i 
        = vlSelf->__PVT__axi_r_last_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_ready_i 
        = vlSelf->__PVT__axi_ar_ready_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_aw_ready_i 
        = vlSelf->__PVT__axi_aw_ready_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_b_valid_i 
        = vlSelf->__PVT__axi_b_valid_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_ready_i 
        = vlSelf->__PVT__axi_w_ready_i;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__14(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__14\n"); );
    // Body
    vlSelf->__PVT__instruction = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_data_read;
    vlSelf->__PVT__cpu_ready = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_ready;
    vlSelf->__PVT__mem_req_valid = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_req_valid;
    vlSelf->__PVT__mem_req_addr = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_req_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__cpu_ready 
        = vlSelf->__PVT__cpu_ready;
    vlSelf->__PVT__inst = ((IData)(vlSelf->__PVT__cpu_ready)
                            ? VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__instruction, 0U, 0x20U)
                            : 0x13U);
    vlSelf->__Vcellinp__u_axi__rw_addr_i = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__mem_req_addr, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_addr_i 
        = vlSelf->__Vcellinp__u_axi__rw_addr_i;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__15(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__15\n"); );
    // Body
    vlSelf->__PVT__rdata = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__data_read_o;
    vlSelf->__PVT__axi_r_ready_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_ready_o;
    vlSelf->__PVT__axi_ar_valid_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_valid_o;
    vlSelf->__PVT__axi_aw_valid_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_aw_valid_o;
    vlSelf->__PVT__axi_b_ready_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_b_ready_o;
    vlSelf->__PVT__axi_w_last_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_last_o;
    vlSelf->__PVT__axi_w_valid_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_valid_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_data_read 
        = vlSelf->__PVT__rdata;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_ready_i 
        = vlSelf->__PVT__axi_r_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_valid_i 
        = vlSelf->__PVT__axi_ar_valid_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_aw_valid_i 
        = vlSelf->__PVT__axi_aw_valid_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_b_ready_i 
        = vlSelf->__PVT__axi_b_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_last_i 
        = vlSelf->__PVT__axi_w_last_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_valid_i 
        = vlSelf->__PVT__axi_w_valid_o;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__16(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__16\n"); );
    // Body
    vlSelf->__PVT__axi_addr = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_addr;
    vlSelf->__PVT__axi_id = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_id;
    vlSelf->__PVT__axi_valid = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_valid;
    vlSelf->__PVT__rw_burst = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_burst;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_id_i 
        = vlSelf->__PVT__axi_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__r_valid 
        = vlSelf->__PVT__axi_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_burst 
        = vlSelf->__PVT__rw_burst;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__18(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__18\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__mem_no_use 
        = vlSelf->__PVT__mem_no_use;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__mem_valid 
        = vlSelf->__PVT__mem_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__mem_res_valid 
        = vlSelf->__PVT__mem_res_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_curr_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ex_rd_buf_flag 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_w_data_i 
        = vlSelf->__PVT__reg_write_data;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_size_i 
        = vlSelf->__PVT__reg_write_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__wb_res_valid 
        = vlSelf->__PVT__wb_res_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_req_i 
        = vlSelf->__PVT__axi_req;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__reset_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_req 
        = vlSelf->__PVT__axi_req;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSelf->__Vcellinp__u_axi__rw_valid_i = ((IData)(vlSelf->__PVT__mem_req_valid) 
                                             | (IData)(vlSelf->__PVT__waxi_valid));
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__reset_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__mem_send_id 
        = vlSelf->__PVT__mem_send_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__mem_addr 
        = vlSelf->__PVT__mem_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSelf->__PVT__rw_addr_i = ((IData)(vlSelf->__PVT__waxi_valid)
                                 ? vlSelf->__PVT__reg_write_addr
                                 : vlSelf->__PVT__axi_addr);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__sh_fnsh_flag 
        = vlSelf->__PVT__sh_fnsh_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_valid_i 
        = vlSelf->__Vcellinp__u_axi__rw_valid_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_req_addr 
        = vlSelf->__PVT__rw_addr_i;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__19(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__19\n"); );
    // Body
    vlSelf->__Vcellout__u_axi__axi_ar_addr_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_addr_o;
    vlSelf->__Vcellout__u_axi__axi_aw_addr_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_aw_addr_o;
    vlSelf->__PVT__ar_hs = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__ar_hs;
    vlSelf->__PVT__b_hs = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__b_hs;
    vlSelf->__PVT__axi_ar_id_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_id_o;
    vlSelf->__Vcellout__u_axi__axi_ar_len_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_len_o;
    vlSelf->__PVT__axi_w_data_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_data_o;
    vlSelf->__PVT__axi_w_strb_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_strb_o;
    vlSelf->__PVT__w_done = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__w_done;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__w_start 
        = vlSelf->__PVT__w_start;
    vlSelf->__PVT__axi_ar_addr_o = VL_EXTEND_QI(64,32, vlSelf->__Vcellout__u_axi__axi_ar_addr_o);
    vlSelf->__PVT__axi_aw_addr_o = VL_EXTEND_QI(64,32, vlSelf->__Vcellout__u_axi__axi_aw_addr_o);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ar_hs 
        = vlSelf->__PVT__ar_hs;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__return_id 
        = vlSelf->__PVT__axi_ar_id_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__return_id 
        = vlSelf->__PVT__axi_ar_id_o;
    vlSelf->__PVT__axi_ar_len_o = VL_EXTEND_II(8,3, (IData)(vlSelf->__Vcellout__u_axi__axi_ar_len_o));
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_data_i 
        = vlSelf->__PVT__axi_w_data_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_strb_i 
        = vlSelf->__PVT__axi_w_strb_o;
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_addr_i 
        = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__axi_ar_addr_o, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_aw_addr_i 
        = vlSelf->__PVT__axi_aw_addr_o;
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_len_i = 
        (7U & VL_SEL_IIII(3,8,32,32, (IData)(vlSelf->__PVT__axi_ar_len_o), 0U, 3U));
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_addr_i 
        = vlSelf->__Vcellinp__u_axi_slave__axi_ar_addr_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_len_i 
        = vlSelf->__Vcellinp__u_axi_slave__axi_ar_len_i;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__20(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__20\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_mul 
        = vlSelf->__PVT__id_mul;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_div 
        = vlSelf->__PVT__id_div;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ecall_flag 
        = vlSelf->__PVT__ecall_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__mret_flag 
        = vlSelf->__PVT__mret_flag;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__21(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__21\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__control_rest 
        = vlSelf->__PVT__control_rest;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__22(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__22\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__rest_id_mem 
        = vlSelf->__PVT__rest_id_mem;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__23(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__23\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_next_pc 
        = vlSelf->__PVT__id_next_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__sig_jalr 
        = vlSelf->__PVT__sig_jalr;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__24(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__24\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_ready 
        = vlSelf->__PVT__dd_r_ready_o;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__25(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__25\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_done 
        = vlSelf->__PVT__delay_r_done;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__26(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__26\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_valid_i 
        = vlSelf->__PVT__axi_r_valid_i;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__27(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___sequent__TOP__ysyx_22040175_top__u_if_stage__27\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__if_send_id 
        = vlSelf->__PVT__if_send_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__pc 
        = vlSelf->__Vcellinp__u_axi_judge__pc;
}

VL_INLINE_OPT void Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__28(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___combo__TOP__ysyx_22040175_top__u_if_stage__28\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__div_finish 
        = vlSelf->__PVT__div_finish;
    vlSelf->__PVT__r_done = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__r_done;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__r_done 
        = vlSelf->__PVT__r_done;
}
