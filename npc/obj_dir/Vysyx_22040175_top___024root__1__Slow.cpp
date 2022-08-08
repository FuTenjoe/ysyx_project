// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040175_top___024root___initial__TOP__4(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___initial__TOP__4\n"); );
    // Body
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f);
}

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    Vysyx_22040175_top___024root___initial__TOP__4(vlSelf);
}

void Vysyx_22040175_top___024root___settle__TOP__3(Vysyx_22040175_top___024root* vlSelf) VL_ATTR_COLD;

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22040175_top___024root___final(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___final\n"); );
}

void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->time_set = VL_RAND_RESET_I(1);
    vlSelf->diff_pc = VL_RAND_RESET_I(32);
    vlSelf->diff_delay_pc = VL_RAND_RESET_I(32);
    vlSelf->out_mem_rd_buf_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__if_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__if_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__id_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__id_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__id_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__id_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__id_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__id_alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__id_unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__id_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__id_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__rest_from_id = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_control_rest = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_mul = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__ex_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__ex_unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__ex_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__ex_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__ex_rd_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__id_rest_no_use = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_id_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__ex_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__write_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ex_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__mem_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__mem_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__mem_alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__mem_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__mem_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__mem_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__fr_ex_no_use = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__mem_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__wb_hazard_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__wb_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__wb_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__wb_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wb_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wb_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__wb_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__wb_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wb_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__wb_delay_pc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_sh_fg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x);
    VL_RAND_RESET_W(66, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x);
    VL_RAND_RESET_W(66, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_y);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay1_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__divisor_t[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__rdy_t = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__merchant_t[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read__0__rdata = 0;
    vlSelf->__Vtask_ysyx_22040175_top__DOT__u_mem_stage__DOT__pmem_read__2__rdata = 0;
    vlSelf->__Vdly__ysyx_22040175_top__DOT__id_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y);
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
