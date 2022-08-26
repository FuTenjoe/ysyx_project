// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_id_ex_regs.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_id_ex_regs___sequent__TOP__ysyx_22040175_top__u_id_ex_regs__1(Vysyx_22040175_top_id_ex_regs* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_ex_regs___sequent__TOP__ysyx_22040175_top__u_id_ex_regs__1\n"); );
    // Body
    vlSelf->__Vdly__ena_id_ex_o = vlSelf->__PVT__ena_id_ex_o;
    vlSelf->__Vdly__unknown_code_id_ex_o = vlSelf->__PVT__unknown_code_id_ex_o;
    vlSelf->__Vdly__csr_addr_id_ex_o = vlSelf->__PVT__csr_addr_id_ex_o;
    vlSelf->__Vdly__id_div_id_ex_o = vlSelf->__PVT__id_div_id_ex_o;
    vlSelf->__Vdly__id_mul_id_ex_o = vlSelf->__PVT__id_mul_id_ex_o;
    vlSelf->__Vdly__cunqu_hazard_id_ex_o = vlSelf->__PVT__cunqu_hazard_id_ex_o;
    vlSelf->__Vdly__rest_id_mem_id_ex_o = vlSelf->__PVT__rest_id_mem_id_ex_o;
    vlSelf->__Vdly__wmask_id_ex_o = vlSelf->__PVT__wmask_id_ex_o;
    vlSelf->__Vdly__ebreak_flag_id_ex_o = vlSelf->__PVT__ebreak_flag_id_ex_o;
    vlSelf->__Vdly__reg_wen_id_ex_o = vlSelf->__PVT__reg_wen_id_ex_o;
    vlSelf->__Vdly__pc_id_ex_o = vlSelf->__PVT__pc_id_ex_o;
    vlSelf->__Vdly__ex_inst = vlSelf->__PVT__ex_inst;
    vlSelf->__Vdly__s_imm_id_ex_o = vlSelf->__PVT__s_imm_id_ex_o;
    vlSelf->__Vdly__s_flag_id_ex_o = vlSelf->__PVT__s_flag_id_ex_o;
    vlSelf->__Vdly__rd_buf_flag_id_ex_o = vlSelf->__PVT__rd_buf_flag_id_ex_o;
    vlSelf->__Vdly__reg_waddr_id_ex_o = vlSelf->__PVT__reg_waddr_id_ex_o;
    vlSelf->__Vdly__rd_flag_id_ex_o = vlSelf->__PVT__rd_flag_id_ex_o;
    vlSelf->__Vdly__alu_op_id_ex_o = vlSelf->__PVT__alu_op_id_ex_o;
    vlSelf->__Vdly__expand_signed_id_ex_o = vlSelf->__PVT__expand_signed_id_ex_o;
    vlSelf->__Vdly__alu_src2_id_ex_o = vlSelf->__PVT__alu_src2_id_ex_o;
    vlSelf->__Vdly__alu_src1_id_ex_o = vlSelf->__PVT__alu_src1_id_ex_o;
    if (vlSelf->__PVT__rst_n) {
        vlSelf->__Vdly__pc_id_ex_o = vlSelf->__PVT__pc_id_ex_i;
        vlSelf->__Vdly__reg_wen_id_ex_o = vlSelf->__PVT__reg_wen_id_ex_i;
        vlSelf->__Vdly__reg_waddr_id_ex_o = vlSelf->__PVT__reg_waddr_id_ex_i;
        vlSelf->__Vdly__alu_op_id_ex_o = vlSelf->__PVT__alu_op_id_ex_i;
        vlSelf->__Vdly__unknown_code_id_ex_o = vlSelf->__PVT__unknown_code_id_ex_i;
        vlSelf->__Vdly__ebreak_flag_id_ex_o = vlSelf->__PVT__ebreak_flag_id_ex_i;
        vlSelf->__Vdly__wmask_id_ex_o = vlSelf->__PVT__wmask_id_ex_i;
        vlSelf->__Vdly__s_flag_id_ex_o = vlSelf->__PVT__s_flag_id_ex_i;
        vlSelf->__Vdly__s_imm_id_ex_o = vlSelf->__PVT__s_imm_id_ex_i;
        vlSelf->__Vdly__expand_signed_id_ex_o = vlSelf->__PVT__expand_signed_id_ex_i;
        vlSelf->__Vdly__rd_flag_id_ex_o = vlSelf->__PVT__rd_flag_id_ex_i;
        vlSelf->__Vdly__rd_buf_flag_id_ex_o = vlSelf->__PVT__rd_buf_flag_id_ex_i;
        vlSelf->__Vdly__ena_id_ex_o = vlSelf->__PVT__ena_id_ex_i;
        vlSelf->__Vdly__alu_src1_id_ex_o = vlSelf->__PVT__alu_src1_id_ex_i;
        vlSelf->__Vdly__alu_src2_id_ex_o = vlSelf->__PVT__alu_src2_id_ex_i;
        vlSelf->__Vdly__rest_id_mem_id_ex_o = vlSelf->__PVT__rest_id_mem_id_ex_i;
        vlSelf->__Vdly__ex_inst = vlSelf->__PVT__id_inst;
        vlSelf->__Vdly__cunqu_hazard_id_ex_o = vlSelf->__PVT__cunqu_hazard_id_ex_i;
        vlSelf->__Vdly__id_mul_id_ex_o = vlSelf->__PVT__id_mul_id_ex_i;
        vlSelf->__Vdly__id_div_id_ex_o = vlSelf->__PVT__id_div_id_ex_i;
        vlSelf->__Vdly__csr_addr_id_ex_o = vlSelf->__PVT__csr_addr_id_ex_i;
    } else {
        vlSelf->__Vdly__pc_id_ex_o = 0x80000000ULL;
        vlSelf->__Vdly__reg_wen_id_ex_o = 0U;
        vlSelf->__Vdly__reg_waddr_id_ex_o = 0U;
        vlSelf->__Vdly__alu_op_id_ex_o = 0U;
        vlSelf->__Vdly__unknown_code_id_ex_o = 0ULL;
        vlSelf->__Vdly__ebreak_flag_id_ex_o = 0U;
        vlSelf->__Vdly__wmask_id_ex_o = 0U;
        vlSelf->__Vdly__s_flag_id_ex_o = 0U;
        vlSelf->__Vdly__s_imm_id_ex_o = 0U;
        vlSelf->__Vdly__expand_signed_id_ex_o = 0U;
        vlSelf->__Vdly__rd_flag_id_ex_o = 0U;
        vlSelf->__Vdly__rd_buf_flag_id_ex_o = 0U;
        vlSelf->__Vdly__ena_id_ex_o = 0U;
        vlSelf->__Vdly__alu_src1_id_ex_o = 0ULL;
        vlSelf->__Vdly__alu_src2_id_ex_o = 0ULL;
        vlSelf->__Vdly__rest_id_mem_id_ex_o = 0U;
        vlSelf->__Vdly__ex_inst = 0ULL;
        vlSelf->__Vdly__cunqu_hazard_id_ex_o = 0U;
        vlSelf->__Vdly__id_mul_id_ex_o = 0U;
        vlSelf->__Vdly__id_div_id_ex_o = 0U;
        vlSelf->__Vdly__csr_addr_id_ex_o = 0U;
    }
    vlSelf->__PVT__unknown_code_id_ex_o = vlSelf->__Vdly__unknown_code_id_ex_o;
    vlSelf->__PVT__ena_id_ex_o = vlSelf->__Vdly__ena_id_ex_o;
    vlSelf->__PVT__pc_id_ex_o = vlSelf->__Vdly__pc_id_ex_o;
    vlSelf->__PVT__reg_wen_id_ex_o = vlSelf->__Vdly__reg_wen_id_ex_o;
    vlSelf->__PVT__ebreak_flag_id_ex_o = vlSelf->__Vdly__ebreak_flag_id_ex_o;
    vlSelf->__PVT__wmask_id_ex_o = vlSelf->__Vdly__wmask_id_ex_o;
    vlSelf->__PVT__rest_id_mem_id_ex_o = vlSelf->__Vdly__rest_id_mem_id_ex_o;
    vlSelf->__PVT__cunqu_hazard_id_ex_o = vlSelf->__Vdly__cunqu_hazard_id_ex_o;
    vlSelf->__PVT__id_mul_id_ex_o = vlSelf->__Vdly__id_mul_id_ex_o;
    vlSelf->__PVT__id_div_id_ex_o = vlSelf->__Vdly__id_div_id_ex_o;
    vlSelf->__PVT__csr_addr_id_ex_o = vlSelf->__Vdly__csr_addr_id_ex_o;
    vlSelf->__PVT__ex_inst = vlSelf->__Vdly__ex_inst;
    vlSelf->__PVT__s_flag_id_ex_o = vlSelf->__Vdly__s_flag_id_ex_o;
    vlSelf->__PVT__s_imm_id_ex_o = vlSelf->__Vdly__s_imm_id_ex_o;
    vlSelf->__PVT__rd_buf_flag_id_ex_o = vlSelf->__Vdly__rd_buf_flag_id_ex_o;
    vlSelf->__PVT__reg_waddr_id_ex_o = vlSelf->__Vdly__reg_waddr_id_ex_o;
    vlSelf->__PVT__rd_flag_id_ex_o = vlSelf->__Vdly__rd_flag_id_ex_o;
    vlSelf->__PVT__alu_op_id_ex_o = vlSelf->__Vdly__alu_op_id_ex_o;
    vlSelf->__PVT__expand_signed_id_ex_o = vlSelf->__Vdly__expand_signed_id_ex_o;
    vlSelf->__PVT__alu_src2_id_ex_o = vlSelf->__Vdly__alu_src2_id_ex_o;
    vlSelf->__PVT__alu_src1_id_ex_o = vlSelf->__Vdly__alu_src1_id_ex_o;
}
