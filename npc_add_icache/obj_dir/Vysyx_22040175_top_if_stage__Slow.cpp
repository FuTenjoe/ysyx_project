// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_if_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_if_stage___ctor_var_reset(Vysyx_22040175_top_if_stage* vlSelf);

Vysyx_22040175_top_if_stage::Vysyx_22040175_top_if_stage(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_if_stage___ctor_var_reset(this);
}

void Vysyx_22040175_top_if_stage::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_if_stage::~Vysyx_22040175_top_if_stage() {
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__1(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__1\n"); );
    // Body
    vlSelf->__PVT__rw_ready_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_ready 
        = vlSelf->__PVT__dd_r_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__reset_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__reset_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_req_valid 
        = vlSelf->__PVT__delay_rw_burst;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__r_done 
        = vlSelf->__PVT__delay_r_done;
    vlSelf->__PVT__if_send_id = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__if_send_id;
    vlSelf->__PVT__axi_r_resp_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_resp_o;
    vlSelf->__PVT__axi_r_data_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_data_o;
    vlSelf->__PVT__if_valid = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__if_valid;
    vlSelf->__PVT__curr_pc = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__curr_pc;
    vlSelf->__PVT__mem_req_valid = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_req_valid;
    vlSelf->__PVT__instruction = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_data_read;
    vlSelf->__PVT__cpu_ready = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_ready;
    vlSelf->__PVT__axi_r_last_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_last_o;
    vlSelf->__PVT__mem_req_addr = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_req_addr;
    vlSelf->__PVT__axi_addr = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_addr;
    vlSelf->__PVT__rdata = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__data_read_o;
    vlSelf->__PVT__axi_id = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_done 
        = vlSelf->__PVT__delay_r_done;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSelf->__PVT__ena = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ena;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__if_send_id 
        = vlSelf->__PVT__if_send_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_resp_i 
        = vlSelf->__PVT__axi_r_resp_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_data_i 
        = vlSelf->__PVT__axi_r_data_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__if_valid 
        = vlSelf->__PVT__if_valid;
    vlSelf->__Vcellinp__u_axi_judge__pc = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__curr_pc, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__cpu_ready 
        = vlSelf->__PVT__cpu_ready;
    vlSelf->__PVT__inst = ((IData)(vlSelf->__PVT__cpu_ready)
                            ? VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__instruction, 0U, 0x20U)
                            : 0x13U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_last_i 
        = vlSelf->__PVT__axi_r_last_i;
    vlSelf->__Vcellinp__u_axi__rw_addr_i = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__mem_req_addr, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__mem_data_read 
        = vlSelf->__PVT__rdata;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_id_i 
        = vlSelf->__PVT__axi_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__pc 
        = vlSelf->__Vcellinp__u_axi_judge__pc;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_addr_i 
        = vlSelf->__Vcellinp__u_axi__rw_addr_i;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__2(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__2\n"); );
    // Body
    vlSelf->__PVT__axi_aw_ready_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_aw_ready_o;
    vlSelf->__PVT__axi_r_valid_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_valid_o;
    vlSelf->__PVT__axi_b_valid_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_b_valid_o;
    vlSelf->__PVT__axi_ar_ready_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_ready_o;
    vlSelf->__PVT__axi_w_ready_i = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_ready_o;
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
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__mem_send_id 
        = vlSelf->__PVT__mem_send_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_size_i 
        = vlSelf->__PVT__reg_write_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_w_data_i 
        = vlSelf->__PVT__reg_write_data;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ex_rd_buf_flag 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_curr_pc 
        = vlSelf->__PVT__id_pc;
    vlSelf->__PVT__axi_ar_id_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_id_o;
    vlSelf->__Vcellout__u_axi__axi_ar_addr_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_addr_o;
    vlSelf->__Vcellout__u_axi__axi_aw_addr_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_aw_addr_o;
    vlSelf->__PVT__axi_aw_valid_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_aw_valid_o;
    vlSelf->__PVT__axi_b_ready_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_b_ready_o;
    vlSelf->__PVT__axi_r_ready_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_ready_o;
    vlSelf->__PVT__axi_ar_valid_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_valid_o;
    vlSelf->__PVT__axi_w_last_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_last_o;
    vlSelf->__PVT__axi_w_valid_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_valid_o;
    vlSelf->__PVT__axi_valid = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_valid;
    vlSelf->__PVT__rw_burst = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__axi_burst;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_aw_ready_i 
        = vlSelf->__PVT__axi_aw_ready_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_r_valid_i 
        = vlSelf->__PVT__axi_r_valid_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_b_valid_i 
        = vlSelf->__PVT__axi_b_valid_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_ready_i 
        = vlSelf->__PVT__axi_ar_ready_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_ready_i 
        = vlSelf->__PVT__axi_w_ready_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__return_id 
        = vlSelf->__PVT__axi_ar_id_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__return_id 
        = vlSelf->__PVT__axi_ar_id_o;
    vlSelf->__PVT__axi_ar_addr_o = VL_EXTEND_QI(64,32, vlSelf->__Vcellout__u_axi__axi_ar_addr_o);
    vlSelf->__PVT__axi_aw_addr_o = VL_EXTEND_QI(64,32, vlSelf->__Vcellout__u_axi__axi_aw_addr_o);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_aw_valid_i 
        = vlSelf->__PVT__axi_aw_valid_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_b_ready_i 
        = vlSelf->__PVT__axi_b_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_r_ready_i 
        = vlSelf->__PVT__axi_r_ready_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_valid_i 
        = vlSelf->__PVT__axi_ar_valid_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_last_i 
        = vlSelf->__PVT__axi_w_last_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_valid_i 
        = vlSelf->__PVT__axi_w_valid_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__r_valid 
        = vlSelf->__PVT__axi_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_burst 
        = vlSelf->__PVT__rw_burst;
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_addr_i 
        = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__axi_ar_addr_o, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_aw_addr_i 
        = vlSelf->__PVT__axi_aw_addr_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_addr_i 
        = vlSelf->__Vcellinp__u_axi_slave__axi_ar_addr_i;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__3(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__3\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__mem_addr 
        = vlSelf->__PVT__mem_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__mem_no_use 
        = vlSelf->__PVT__mem_no_use;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__mem_valid 
        = vlSelf->__PVT__mem_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__mem_res_valid 
        = vlSelf->__PVT__mem_res_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__wb_res_valid 
        = vlSelf->__PVT__wb_res_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_req 
        = vlSelf->__PVT__axi_req;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_req_i 
        = vlSelf->__PVT__axi_req;
    vlSelf->__Vcellinp__u_axi__rw_valid_i = ((IData)(vlSelf->__PVT__mem_req_valid) 
                                             | (IData)(vlSelf->__PVT__waxi_valid));
    vlSelf->__PVT__rw_addr_i = ((IData)(vlSelf->__PVT__waxi_valid)
                                 ? vlSelf->__PVT__reg_write_addr
                                 : vlSelf->__PVT__axi_addr);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__w_start 
        = vlSelf->__PVT__w_start;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__sh_fnsh_flag 
        = vlSelf->__PVT__sh_fnsh_flag;
    vlSelf->__PVT__axi_w_strb_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_strb_o;
    vlSelf->__PVT__axi_w_data_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_w_data_o;
    vlSelf->__PVT__b_hs = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__b_hs;
    vlSelf->__PVT__ar_hs = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__ar_hs;
    vlSelf->__Vcellout__u_axi__axi_ar_len_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_len_o;
    vlSelf->__PVT__r_done = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__r_done;
    vlSelf->__PVT__w_done = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__w_done;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__rw_valid_i 
        = vlSelf->__Vcellinp__u_axi__rw_valid_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_i_cache.__PVT__cpu_req_addr 
        = vlSelf->__PVT__rw_addr_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_strb_i 
        = vlSelf->__PVT__axi_w_strb_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_w_data_i 
        = vlSelf->__PVT__axi_w_data_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ar_hs 
        = vlSelf->__PVT__ar_hs;
    vlSelf->__PVT__axi_ar_len_o = VL_EXTEND_II(8,3, (IData)(vlSelf->__Vcellout__u_axi__axi_ar_len_o));
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_judge.__PVT__r_done 
        = vlSelf->__PVT__r_done;
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_len_i = 
        (7U & VL_SEL_IIII(3,8,32,32, (IData)(vlSelf->__PVT__axi_ar_len_o), 0U, 3U));
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_len_i 
        = vlSelf->__Vcellinp__u_axi_slave__axi_ar_len_i;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__4(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__4\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_mul 
        = vlSelf->__PVT__id_mul;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_div 
        = vlSelf->__PVT__id_div;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__ecall_flag 
        = vlSelf->__PVT__ecall_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__mret_flag 
        = vlSelf->__PVT__mret_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__div_finish 
        = vlSelf->__PVT__div_finish;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__5(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__5\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__control_rest 
        = vlSelf->__PVT__control_rest;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__6(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__6\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__rest_id_mem 
        = vlSelf->__PVT__rest_id_mem;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__7(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__7\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__id_next_pc 
        = vlSelf->__PVT__id_next_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_pc_predict.__PVT__sig_jalr 
        = vlSelf->__PVT__sig_jalr;
}

void Vysyx_22040175_top_if_stage___initial__TOP__ysyx_22040175_top__u_if_stage__9(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___initial__TOP__ysyx_22040175_top__u_if_stage__9\n"); );
    // Body
    vlSelf->__PVT__axi_ar_burst_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_burst_o;
    vlSelf->__Vcellout__u_axi__axi_ar_size_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_size_o;
}

void Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__17(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___settle__TOP__ysyx_22040175_top__u_if_stage__17\n"); );
    // Body
    vlSelf->__PVT__axi_ar_burst_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_burst_o;
    vlSelf->__Vcellout__u_axi__axi_ar_size_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi.__PVT__axi_ar_size_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_burst_i 
        = vlSelf->__PVT__axi_ar_burst_o;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_burst_i 
        = vlSelf->__PVT__axi_ar_burst_o;
    vlSelf->__PVT__axi_ar_size_o = (7U & VL_SEL_IIII(3,8,32,32, (IData)(vlSelf->__Vcellout__u_axi__axi_ar_size_o), 0U, 3U));
    vlSelf->__PVT__axi_ar_size_o = (7U & VL_SEL_IIII(3,8,32,32, (IData)(vlSelf->__Vcellout__u_axi__axi_ar_size_o), 0U, 3U));
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_size_i 
        = VL_EXTEND_II(8,3, (IData)(vlSelf->__PVT__axi_ar_size_o));
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_size_i 
        = VL_EXTEND_II(8,3, (IData)(vlSelf->__PVT__axi_ar_size_o));
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_size_i 
        = vlSelf->__Vcellinp__u_axi_slave__axi_ar_size_i;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage__u_axi_slave.__PVT__axi_ar_size_i 
        = vlSelf->__Vcellinp__u_axi_slave__axi_ar_size_i;
}

void Vysyx_22040175_top_if_stage___ctor_var_reset(Vysyx_22040175_top_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__curr_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_send_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_r_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_id_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_no_use = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mem_res_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__waxi_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg_write_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg_write_wmask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__wb_res_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mret_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ecall_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rw_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_r_resp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_r_data_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_r_last_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_send_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__r_done = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_axi_judge__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_aw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_aw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_w_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_w_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_w_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_w_strb_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_w_last_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_b_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_b_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rw_addr_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rw_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ar_len_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ar_size_o = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ar_burst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__instruction = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dd_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_rw_burst = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__u_axi__axi_ar_size_o = VL_RAND_RESET_I(8);
    vlSelf->__Vcellout__u_axi__axi_ar_len_o = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__u_axi__axi_ar_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__u_axi__axi_aw_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_axi__rw_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_axi__rw_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_size_i = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_len_i = VL_RAND_RESET_I(3);
    vlSelf->__Vcellinp__u_axi_slave__axi_ar_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__delay_r_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay_rw_burst = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__d_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dd_r_ready_o = VL_RAND_RESET_I(1);
}
