// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_ysyx_22040175_top.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__8(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__8\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__time_set 
        = vlSelf->time_set;
    vlSelf->__PVT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__9(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__9\n"); );
    // Body
    vlSelf->__PVT__mem_send_id = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_send_id;
    vlSelf->__PVT__mem_addr = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_addr;
    vlSelf->__PVT__reg_rd_buf_flag = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_rd_buf_flag;
    vlSelf->__PVT__mem_no_use = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_no_use;
    vlSelf->__PVT__mem_valid = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_axi_valid;
    vlSelf->__PVT__mem_res_valid = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_res_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__mem_send_id 
        = vlSelf->__PVT__mem_send_id;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__mem_addr 
        = vlSelf->__PVT__mem_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__reg_rd_buf_flag 
        = vlSelf->__PVT__reg_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__mem_no_use 
        = vlSelf->__PVT__mem_no_use;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__mem_valid 
        = vlSelf->__PVT__mem_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__mem_res_valid 
        = vlSelf->__PVT__mem_res_valid;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__10(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__10\n"); );
    // Body
    vlSelf->__PVT__mem_reg_wen = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__reg_wen_ex_mem_o;
    vlSelf->__PVT__mem_wmask = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__wmask_ex_mem_o;
    vlSelf->__PVT__mem_time_set = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__time_set_ex_mem_o;
    vlSelf->__PVT__mem_s_imm = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__s_imm_ex_mem_o;
    vlSelf->__PVT__mem_ebreak_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__ebreak_flag_ex_mem_o;
    vlSelf->__PVT__mem_rest_id_mem = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__rest_id_mem_ex_mem_o;
    vlSelf->__PVT__mem_cunqu_hazard = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__cunqu_hazard_ex_mem_o;
    vlSelf->__PVT__mem_rd_buf_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__rd_buf_flag_ex_mem_o;
    vlSelf->__PVT__mem_from_ex_alu_res = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__from_ex_alu_res_ex_mem_o;
    vlSelf->__PVT__mem_expand_signed = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__expand_signed_ex_mem_o;
    vlSelf->__PVT__mem_s_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__s_flag_ex_mem_o;
    vlSelf->__PVT__mem_reg_waddr = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__reg_waddr_ex_mem_o;
    vlSelf->__PVT__mem_alu_op = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__alu_op_ex_mem_o;
    vlSelf->__PVT__mem_alu_src1 = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__alu_src1_ex_mem_o;
    vlSelf->__PVT__mem_alu_src2 = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__alu_src2_ex_mem_o;
    vlSelf->__PVT__mem_csr_addr = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__csr_addr_ex_mem_o;
    vlSelf->__PVT__mem_pc = vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__pc_ex_mem_o;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_cunqu_hazard 
        = vlSelf->__PVT__mem_cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mem_cunqu_hazard 
        = vlSelf->__PVT__mem_cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__rd_buf_flag 
        = vlSelf->__PVT__mem_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mem_from_ex_alu_res 
        = vlSelf->__PVT__mem_from_ex_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_from_ex_alu_res 
        = vlSelf->__PVT__mem_from_ex_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_expand_signed 
        = vlSelf->__PVT__mem_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mem_s_flag 
        = vlSelf->__PVT__mem_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mem_reg_waddr 
        = vlSelf->__PVT__mem_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__alu_op 
        = vlSelf->__PVT__mem_alu_op;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__alu_src1 
        = vlSelf->__PVT__mem_alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__alu_src2 
        = vlSelf->__PVT__mem_alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_csr_addr 
        = vlSelf->__PVT__mem_csr_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mem_pc 
        = vlSelf->__PVT__mem_pc;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__11(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__11\n"); );
    // Body
    vlSelf->__PVT__delay_r_done = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__delay_r_done;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__r_done 
        = vlSelf->__PVT__delay_r_done;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__12(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__12\n"); );
    // Body
    vlSelf->__PVT__id_ena = vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__ena_if_id_o;
    vlSelf->__PVT__id_time_set = vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__time_set_if_id_o;
    vlSelf->__PVT__id_pc = vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__pc_if_id_o;
    vlSelf->__PVT__id_inst = vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__instr_if_id_o;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__time_set_id_ex_i 
        = vlSelf->__PVT__id_time_set;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__id_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__id_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__id_pc 
        = vlSelf->__PVT__id_pc;
    vlSelf->__Vcellinp__u_id_ex_regs__id_inst = VL_EXTEND_QI(64,32, vlSelf->__PVT__id_inst);
    vlSelf->__Vcellinp__u_id_stage__inst = VL_EXTEND_QI(64,32, vlSelf->__PVT__id_inst);
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__inst 
        = vlSelf->__Vcellinp__u_id_stage__inst;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__13(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__13\n"); );
    // Body
    vlSelf->__PVT__ex_unknown_code = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__unknown_code_id_ex_o;
    vlSelf->__PVT__ex_ena = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__ena_id_ex_o;
    vlSelf->__PVT__ex_pc = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__pc_id_ex_o;
    vlSelf->__PVT__ex_reg_wen = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__reg_wen_id_ex_o;
    vlSelf->__PVT__ex_ebreak_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__ebreak_flag_id_ex_o;
    vlSelf->__PVT__ex_wmask = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__wmask_id_ex_o;
    vlSelf->__PVT__ex_rest_id_mem = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rest_id_mem_id_ex_o;
    vlSelf->__PVT__ex_cunqu_hazard = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__cunqu_hazard_id_ex_o;
    vlSelf->__PVT__ex_id_mul = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__id_mul_id_ex_o;
    vlSelf->__PVT__ex_id_div = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__id_div_id_ex_o;
    vlSelf->__PVT__ex_csr_addr = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__csr_addr_id_ex_o;
    vlSelf->__Vcellout__u_id_ex_regs__ex_inst = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__ex_inst;
    vlSelf->__PVT__ex_s_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__s_flag_id_ex_o;
    vlSelf->__PVT__ex_s_imm = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__s_imm_id_ex_o;
    vlSelf->__PVT__ex_rd_buf_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rd_buf_flag_id_ex_o;
    vlSelf->__PVT__ex_reg_waddr = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__reg_waddr_id_ex_o;
    vlSelf->__PVT__ex_rd_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rd_flag_id_ex_o;
    vlSelf->__PVT__ex_alu_op = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__alu_op_id_ex_o;
    vlSelf->__PVT__ex_expand_signed = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__expand_signed_id_ex_o;
    vlSelf->__PVT__ex_alu_src2 = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__alu_src2_id_ex_o;
    vlSelf->__PVT__ex_alu_src1 = vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__alu_src1_id_ex_o;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__pc_ex_mem_i 
        = vlSelf->__PVT__ex_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__reg_wen_ex_mem_i 
        = vlSelf->__PVT__ex_reg_wen;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__ebreak_flag_ex_mem_i 
        = vlSelf->__PVT__ex_ebreak_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__wmask_ex_mem_i 
        = vlSelf->__PVT__ex_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__rest_id_mem_ex_mem_i 
        = vlSelf->__PVT__ex_rest_id_mem;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__cunqu_hazard_ex_mem_i 
        = vlSelf->__PVT__ex_cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__id_mul_ex_mem_i 
        = vlSelf->__PVT__ex_id_mul;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__id_div_ex_mem_i 
        = vlSelf->__PVT__ex_id_div;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__csr_addr_ex_mem_i 
        = vlSelf->__PVT__ex_csr_addr;
    vlSelf->__PVT__ex_inst = VL_SEL_IQII(32,64,32,32, vlSelf->__Vcellout__u_id_ex_regs__ex_inst, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__s_flag_ex_mem_i 
        = vlSelf->__PVT__ex_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ex_s_flag 
        = vlSelf->__PVT__ex_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__s_imm_ex_mem_i 
        = vlSelf->__PVT__ex_s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ex_s_imm 
        = vlSelf->__PVT__ex_s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__rd_buf_flag_ex_mem_i 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__ex_rd_buf_flag 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ex_rd_buf_flag 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__reg_waddr_ex_mem_i 
        = vlSelf->__PVT__ex_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ex_reg_waddr 
        = vlSelf->__PVT__ex_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__rd_flag 
        = vlSelf->__PVT__ex_rd_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__alu_op_ex_mem_i 
        = vlSelf->__PVT__ex_alu_op;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__alu_op 
        = vlSelf->__PVT__ex_alu_op;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__expand_signed_ex_mem_i 
        = vlSelf->__PVT__ex_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__expand_signed 
        = vlSelf->__PVT__ex_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__alu_src2_ex_mem_i 
        = vlSelf->__PVT__ex_alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__alu_src2 
        = vlSelf->__PVT__ex_alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__alu_src1_ex_mem_i 
        = vlSelf->__PVT__ex_alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__alu_src1 
        = vlSelf->__PVT__ex_alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ex_inst 
        = vlSelf->__PVT__ex_inst;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__14(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__14\n"); );
    // Body
    vlSelf->__PVT__wb_delay_pc = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__wb_delay_pc;
    vlSelf->__PVT__reg_write_data = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_write_data;
    vlSelf->__PVT__reg_write_wmask = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_write_wmask;
    vlSelf->__PVT__reg_write_addr = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_write_addr;
    vlSelf->__PVT__wb_res_valid = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__wb_res_valid;
    vlSelf->__PVT__axi_req = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__axi_req;
    vlSelf->__PVT__waxi_valid = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__waxi_valid;
    vlSelf->diff_delay_pc = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__wb_delay_pc, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__reg_write_data 
        = vlSelf->__PVT__reg_write_data;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__reg_write_wmask 
        = vlSelf->__PVT__reg_write_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__reg_write_addr 
        = vlSelf->__PVT__reg_write_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__wb_res_valid 
        = vlSelf->__PVT__wb_res_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__axi_req 
        = vlSelf->__PVT__axi_req;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__waxi_valid 
        = vlSelf->__PVT__waxi_valid;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__15(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__15\n"); );
    // Body
    vlSelf->__PVT__wb_time_set = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__time_set_mem_wb_o;
    vlSelf->__PVT__wb_wmask = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__wmask_mem_wb_o;
    vlSelf->__PVT__wb_s_imm = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__s_imm_mem_wb_o;
    vlSelf->__PVT__wb_ebreak_flag = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__ebreak_flag_mem_wb_o;
    vlSelf->__PVT__wb_pc = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__pc_mem_wb_o;
    vlSelf->__PVT__wb_expand_signed = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__expand_signed_mem_wb_o;
    vlSelf->__PVT__wb_reg_wen = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__reg_wen_mem_wb_o;
    vlSelf->__PVT__wb_reg_waddr = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__reg_waddr_mem_wb_o;
    vlSelf->__PVT__wb_s_flag = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__s_flag_mem_wb_o;
    vlSelf->__PVT__wb_rd_buf_flag = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__rd_buf_flag_mem_wb_o;
    vlSelf->__PVT__wb_from_ex_alu_res = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__from_ex_alu_res_mem_wb_o;
    vlSelf->__PVT__wb_cunqu_hazard = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__cunqu_hazard_mem_wb_o;
    vlSelf->__PVT__wb_from_mem_alu_res = vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__from_mem_alu_res_mem_wb_o;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__wmask 
        = vlSelf->__PVT__wb_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__s_imm 
        = vlSelf->__PVT__wb_s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__ebreak_flag 
        = vlSelf->__PVT__wb_ebreak_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__wb_pc 
        = vlSelf->__PVT__wb_pc;
    vlSelf->diff_pc = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__wb_pc, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__expand_signed 
        = vlSelf->__PVT__wb_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_wen 
        = vlSelf->__PVT__wb_reg_wen;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_waddr 
        = vlSelf->__PVT__wb_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__s_flag 
        = vlSelf->__PVT__wb_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__rd_buf_flag 
        = vlSelf->__PVT__wb_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__from_ex_alu_res 
        = vlSelf->__PVT__wb_from_ex_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__cunqu_hazard 
        = vlSelf->__PVT__wb_cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__from_mem_alu_res 
        = vlSelf->__PVT__wb_from_mem_alu_res;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__16(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__16\n"); );
    // Body
    vlSelf->__PVT__delay_sig_jalr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__delay_sig_jalr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__delay_sig_jalr 
        = vlSelf->__PVT__delay_sig_jalr;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__17(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__17\n"); );
    // Body
    vlSelf->__PVT__if_pc = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__curr_pc;
    vlSelf->__PVT__if_ena = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__ena;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__pc_if_id_i 
        = vlSelf->__PVT__if_pc;
    vlSelf->pc = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__if_pc, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__ena_if_id_i 
        = vlSelf->__PVT__if_ena;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__18(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__18\n"); );
    // Body
    vlSelf->__PVT__if_inst = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__inst;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__instr_if_id_i 
        = vlSelf->__PVT__if_inst;
    vlSelf->inst = vlSelf->__PVT__if_inst;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__19(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__19\n"); );
    // Body
    vlSelf->__PVT__rdata = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__rdata;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__axi_rdata 
        = vlSelf->__PVT__rdata;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__20(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__20\n"); );
    // Body
    vlSelf->__PVT__sh_fnsh_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__sh_fnsh_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__sh_fnsh_flag 
        = vlSelf->__PVT__sh_fnsh_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__sh_fnsh_flag_ex_mem_i 
        = vlSelf->__PVT__sh_fnsh_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__sh_fnsh_flag 
        = vlSelf->__PVT__sh_fnsh_flag;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__21(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__21\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__time_set_if_id_i 
        = vlSelf->time_set;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__22(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__22\n"); );
    // Body
    vlSelf->__PVT__w_start = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__w_start;
    vlSelf->__Vcellout__u_wb_stage__reg_f[0U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[1U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [1U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[2U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [2U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[3U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [3U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[4U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [4U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[5U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [5U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[6U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [6U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[7U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [7U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[8U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [8U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[9U] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [9U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0xaU] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0xaU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0xbU] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0xbU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0xcU] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0xcU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0xdU] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0xdU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0xeU] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0xeU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0xfU] = vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0xfU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x10U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x10U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x11U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x11U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x12U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x12U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x13U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x13U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x14U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x14U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x15U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x15U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x16U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x16U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x17U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x17U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x18U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x18U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x19U] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x19U];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x1aU] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x1aU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x1bU] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x1bU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x1cU] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x1cU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x1dU] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x1dU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x1eU] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x1eU];
    vlSelf->__Vcellout__u_wb_stage__reg_f[0x1fU] = 
        vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__reg_f
        [0x1fU];
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__w_start 
        = vlSelf->__PVT__w_start;
    vlSelf->__PVT__from_wb_reg_f[0U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0U];
    vlSelf->__PVT__from_wb_reg_f[1U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [1U];
    vlSelf->__PVT__from_wb_reg_f[2U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [2U];
    vlSelf->__PVT__from_wb_reg_f[3U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [3U];
    vlSelf->__PVT__from_wb_reg_f[4U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [4U];
    vlSelf->__PVT__from_wb_reg_f[5U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [5U];
    vlSelf->__PVT__from_wb_reg_f[6U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [6U];
    vlSelf->__PVT__from_wb_reg_f[7U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [7U];
    vlSelf->__PVT__from_wb_reg_f[8U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [8U];
    vlSelf->__PVT__from_wb_reg_f[9U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [9U];
    vlSelf->__PVT__from_wb_reg_f[0xaU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0xaU];
    vlSelf->__PVT__from_wb_reg_f[0xbU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0xbU];
    vlSelf->__PVT__from_wb_reg_f[0xcU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0xcU];
    vlSelf->__PVT__from_wb_reg_f[0xdU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0xdU];
    vlSelf->__PVT__from_wb_reg_f[0xeU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0xeU];
    vlSelf->__PVT__from_wb_reg_f[0xfU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0xfU];
    vlSelf->__PVT__from_wb_reg_f[0x10U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x10U];
    vlSelf->__PVT__from_wb_reg_f[0x11U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x11U];
    vlSelf->__PVT__from_wb_reg_f[0x12U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x12U];
    vlSelf->__PVT__from_wb_reg_f[0x13U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x13U];
    vlSelf->__PVT__from_wb_reg_f[0x14U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x14U];
    vlSelf->__PVT__from_wb_reg_f[0x15U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x15U];
    vlSelf->__PVT__from_wb_reg_f[0x16U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x16U];
    vlSelf->__PVT__from_wb_reg_f[0x17U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x17U];
    vlSelf->__PVT__from_wb_reg_f[0x18U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x18U];
    vlSelf->__PVT__from_wb_reg_f[0x19U] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x19U];
    vlSelf->__PVT__from_wb_reg_f[0x1aU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x1aU];
    vlSelf->__PVT__from_wb_reg_f[0x1bU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x1bU];
    vlSelf->__PVT__from_wb_reg_f[0x1cU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x1cU];
    vlSelf->__PVT__from_wb_reg_f[0x1dU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x1dU];
    vlSelf->__PVT__from_wb_reg_f[0x1eU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x1eU];
    vlSelf->__PVT__from_wb_reg_f[0x1fU] = vlSelf->__Vcellout__u_wb_stage__reg_f
        [0x1fU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0U] = vlSelf->__PVT__from_wb_reg_f
        [0U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[1U] = vlSelf->__PVT__from_wb_reg_f
        [1U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[2U] = vlSelf->__PVT__from_wb_reg_f
        [2U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[3U] = vlSelf->__PVT__from_wb_reg_f
        [3U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[4U] = vlSelf->__PVT__from_wb_reg_f
        [4U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[5U] = vlSelf->__PVT__from_wb_reg_f
        [5U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[6U] = vlSelf->__PVT__from_wb_reg_f
        [6U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[7U] = vlSelf->__PVT__from_wb_reg_f
        [7U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[8U] = vlSelf->__PVT__from_wb_reg_f
        [8U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[9U] = vlSelf->__PVT__from_wb_reg_f
        [9U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0xaU] = vlSelf->__PVT__from_wb_reg_f
        [0xaU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0xbU] = vlSelf->__PVT__from_wb_reg_f
        [0xbU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0xcU] = vlSelf->__PVT__from_wb_reg_f
        [0xcU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0xdU] = vlSelf->__PVT__from_wb_reg_f
        [0xdU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0xeU] = vlSelf->__PVT__from_wb_reg_f
        [0xeU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0xfU] = vlSelf->__PVT__from_wb_reg_f
        [0xfU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x10U] = 
        vlSelf->__PVT__from_wb_reg_f[0x10U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x11U] = 
        vlSelf->__PVT__from_wb_reg_f[0x11U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x12U] = 
        vlSelf->__PVT__from_wb_reg_f[0x12U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x13U] = 
        vlSelf->__PVT__from_wb_reg_f[0x13U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x14U] = 
        vlSelf->__PVT__from_wb_reg_f[0x14U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x15U] = 
        vlSelf->__PVT__from_wb_reg_f[0x15U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x16U] = 
        vlSelf->__PVT__from_wb_reg_f[0x16U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x17U] = 
        vlSelf->__PVT__from_wb_reg_f[0x17U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x18U] = 
        vlSelf->__PVT__from_wb_reg_f[0x18U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x19U] = 
        vlSelf->__PVT__from_wb_reg_f[0x19U];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x1aU] = 
        vlSelf->__PVT__from_wb_reg_f[0x1aU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x1bU] = 
        vlSelf->__PVT__from_wb_reg_f[0x1bU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x1cU] = 
        vlSelf->__PVT__from_wb_reg_f[0x1cU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x1dU] = 
        vlSelf->__PVT__from_wb_reg_f[0x1dU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x1eU] = 
        vlSelf->__PVT__from_wb_reg_f[0x1eU];
    vlSelf->__Vcellinp__u_id_stage__reg_f[0x1fU] = 
        vlSelf->__PVT__from_wb_reg_f[0x1fU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[1U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[1U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[2U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[2U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[3U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[3U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[4U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[4U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[5U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[5U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[6U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[6U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[7U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[7U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[8U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[8U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[9U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[9U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0xaU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0xaU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0xbU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0xbU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0xcU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0xcU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0xdU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0xdU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0xeU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0xeU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0xfU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0xfU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x10U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x10U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x11U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x11U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x12U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x12U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x13U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x13U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x14U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x14U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x15U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x15U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x16U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x16U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x17U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x17U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x18U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x18U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x19U] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x19U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x1aU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x1aU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x1bU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x1bU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x1cU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x1cU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x1dU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x1dU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x1eU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x1eU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_f[0x1fU] 
        = vlSelf->__Vcellinp__u_id_stage__reg_f[0x1fU];
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__23(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__23\n"); );
    // Body
    vlSelf->__PVT__ar_hs = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__ar_hs;
    vlSelf->__PVT__b_hs = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__b_hs;
    vlSelf->__PVT__axi_ar_id_o = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__axi_ar_id_o;
    vlSelf->__PVT__w_done = vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__w_done;
    vlSelf->__PVT__id_reg_wen = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_wen;
    vlSelf->__PVT__id_reg_waddr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__reg_waddr;
    vlSelf->__PVT__id_wmask = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__wmask;
    vlSelf->__PVT__id_rd_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__rd_flag;
    vlSelf->__PVT__id_unknown_code = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__unknown_code;
    vlSelf->__PVT__id_s_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__s_flag;
    vlSelf->__PVT__id_mul = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__id_mul;
    vlSelf->__PVT__id_div = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__id_div;
    vlSelf->__PVT__id_jalr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__jalr;
    vlSelf->__PVT__id_ebreak_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ebreak_flag;
    vlSelf->__PVT__ecall_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__ecall_flag;
    vlSelf->__PVT__mret_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mret_flag;
    vlSelf->__PVT__id_alu_op = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__alu_op;
    vlSelf->__PVT__id_alu_src_sel = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__alu_src_sel;
    vlSelf->__PVT__id_expand_signed = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__expand_signed;
    vlSelf->__PVT__id_rd_buf_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__rd_buf_flag;
    vlSelf->__PVT__id_s_imm = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__s_imm;
    vlSelf->__Vcellout__u_id_stage__csr_addr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__csr_addr;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__ar_hs 
        = vlSelf->__PVT__ar_hs;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__b_hs 
        = vlSelf->__PVT__b_hs;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__return_id 
        = vlSelf->__PVT__axi_ar_id_o;
    vlSymsp->TOP__ysyx_22040175_top__u_wb_stage.__PVT__w_done 
        = vlSelf->__PVT__w_done;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__reg_wen_id_ex_i 
        = vlSelf->__PVT__id_reg_wen;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__reg_waddr_id_ex_i 
        = vlSelf->__PVT__id_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__wmask_id_ex_i 
        = vlSelf->__PVT__id_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rd_flag_id_ex_i 
        = vlSelf->__PVT__id_rd_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__unknown_code_id_ex_i 
        = vlSelf->__PVT__id_unknown_code;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__s_flag_id_ex_i 
        = vlSelf->__PVT__id_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__id_mul 
        = vlSelf->__PVT__id_mul;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__id_mul_id_ex_i 
        = vlSelf->__PVT__id_mul;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__id_mul 
        = vlSelf->__PVT__id_mul;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__id_div 
        = vlSelf->__PVT__id_div;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__id_div_id_ex_i 
        = vlSelf->__PVT__id_div;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__id_div 
        = vlSelf->__PVT__id_div;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__ebreak_flag_id_ex_i 
        = vlSelf->__PVT__id_ebreak_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__ecall_flag 
        = vlSelf->__PVT__ecall_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__mret_flag 
        = vlSelf->__PVT__mret_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__alu_op_id_ex_i 
        = vlSelf->__PVT__id_alu_op;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__expand_signed_id_ex_i 
        = vlSelf->__PVT__id_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rd_buf_flag_id_ex_i 
        = vlSelf->__PVT__id_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__s_imm_id_ex_i 
        = vlSelf->__PVT__id_s_imm;
    vlSelf->__PVT__id_csr_addr = (0xfffU & VL_SEL_IQII(12,64,32,32, vlSelf->__Vcellout__u_id_stage__csr_addr, 0U, 0xcU));
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__csr_addr_id_ex_i 
        = vlSelf->__PVT__id_csr_addr;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__24(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__24\n"); );
    // Body
    vlSelf->__PVT__from_ex_alu_res = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__alu_res;
    vlSelf->__Vcellout__u_mem_stage__mstatus = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mstatus;
    vlSelf->__PVT__from_mem_mcause = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mcause;
    vlSelf->__PVT__from_mem_mepc = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mepc;
    vlSelf->__PVT__from_mem_mtvec = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__mtvec;
    vlSelf->__PVT__from_mem_alu_res = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__sign_alu_res;
    vlSelf->__PVT__wb_hazard_result = vlSymsp->TOP__ysyx_22040175_top__u_mem_stage.__PVT__wb_hazard_result;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__from_ex_alu_res_ex_mem_i 
        = vlSelf->__PVT__from_ex_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__from_ex_alu_res 
        = vlSelf->__PVT__from_ex_alu_res;
    vlSelf->__PVT__from_mem_mstatus = (1U & VL_BITSEL_IQII(1,64,32,32, vlSelf->__Vcellout__u_mem_stage__mstatus, 0U));
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mcause 
        = vlSelf->__PVT__from_mem_mcause;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mepc 
        = vlSelf->__PVT__from_mem_mepc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__mtvec 
        = vlSelf->__PVT__from_mem_mtvec;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__from_mem_alu_res_mem_wb_i 
        = vlSelf->__PVT__from_mem_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__from_mem_alu_res 
        = vlSelf->__PVT__from_mem_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__wb_hazard_result 
        = vlSelf->__PVT__wb_hazard_result;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__25(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__25\n"); );
    // Body
    vlSelf->__PVT__id_control_rest = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__control_rest;
    vlSelf->__PVT__id_imm = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__imm;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__control_rest 
        = vlSelf->__PVT__id_control_rest;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__control_rest 
        = vlSelf->__PVT__id_control_rest;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__26(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__26\n"); );
    // Body
    vlSelf->__PVT__rest_id_mem = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__rest_id_mem;
    vlSelf->__PVT__rest_wb_hazard = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__rest_wb_hazard;
    vlSelf->__PVT__rest_from_id = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__rest_from_id;
    vlSelf->__PVT__id_cunqu_hazard = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__rest_id_mem 
        = vlSelf->__PVT__rest_id_mem;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__rest_id_mem_id_ex_i 
        = vlSelf->__PVT__rest_id_mem;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__rest_id_mem 
        = vlSelf->__PVT__rest_id_mem;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__cunqu_hazard_id_ex_i 
        = vlSelf->__PVT__id_cunqu_hazard;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__27(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__27\n"); );
    // Body
    vlSelf->__PVT__id_alu_src1 = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__alu_src1;
    vlSelf->__PVT__id_alu_src2 = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__alu_src1_id_ex_i 
        = vlSelf->__PVT__id_alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__alu_src2_id_ex_i 
        = vlSelf->__PVT__id_alu_src2;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__28(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___combo__TOP__ysyx_22040175_top__28\n"); );
    // Body
    vlSelf->__PVT__id_next_pc = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__next_pc;
    vlSelf->__PVT__sig_jalr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage.__PVT__sig_jalr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__id_next_pc 
        = vlSelf->__PVT__id_next_pc;
    vlSelf->out_mem_rd_buf_flag = vlSelf->__PVT__sig_jalr;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__sig_jalr 
        = vlSelf->__PVT__sig_jalr;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__29(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__29\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__pc_id_ex_i 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__ena_id_ex_i 
        = vlSelf->__PVT__id_ena;
    vlSymsp->TOP__ysyx_22040175_top__u_id_ex_regs.__PVT__id_inst 
        = vlSelf->__Vcellinp__u_id_ex_regs__id_inst;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__30(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__30\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__rest_id_mem_ex_mem_o 
        = vlSelf->__PVT__mem_rest_id_mem;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__reg_wen_mem_wb_i 
        = vlSelf->__PVT__mem_reg_wen;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__reg_waddr_mem_wb_i 
        = vlSelf->__PVT__mem_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__wmask_mem_wb_i 
        = vlSelf->__PVT__mem_wmask;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__s_flag_mem_wb_i 
        = vlSelf->__PVT__mem_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__time_set_mem_wb_i 
        = vlSelf->__PVT__mem_time_set;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__s_imm_mem_wb_i 
        = vlSelf->__PVT__mem_s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__expand_signed_mem_wb_i 
        = vlSelf->__PVT__mem_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__ebreak_flag_mem_wb_i 
        = vlSelf->__PVT__mem_ebreak_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__rd_buf_flag_mem_wb_i 
        = vlSelf->__PVT__mem_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__from_ex_alu_res_mem_wb_i 
        = vlSelf->__PVT__mem_from_ex_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__pc_mem_wb_i 
        = vlSelf->__PVT__mem_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__cunqu_hazard_mem_wb_i 
        = vlSelf->__PVT__mem_cunqu_hazard;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__31(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___sequent__TOP__ysyx_22040175_top__31\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_mem_wb_regs.__PVT__mem_no_use 
        = vlSelf->__PVT__mem_no_use;
}

VL_INLINE_OPT void Vysyx_22040175_top_ysyx_22040175_top___multiclk__TOP__ysyx_22040175_top__32(Vysyx_22040175_top_ysyx_22040175_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22040175_top_ysyx_22040175_top___multiclk__TOP__ysyx_22040175_top__32\n"); );
    // Body
    vlSelf->__PVT__div_finish = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage.__PVT__div_finish;
    vlSymsp->TOP__ysyx_22040175_top__u_if_id_regs.__PVT__div_finish 
        = vlSelf->__PVT__div_finish;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_mem_regs.__PVT__div_finish_ex_mem_i 
        = vlSelf->__PVT__div_finish;
    vlSymsp->TOP__ysyx_22040175_top__u_if_stage.__PVT__div_finish 
        = vlSelf->__PVT__div_finish;
}
