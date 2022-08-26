// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_ex_mem_regs.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_ex_mem_regs___sequent__TOP__ysyx_22040175_top__u_ex_mem_regs__1(Vysyx_22040175_top_ex_mem_regs* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_mem_regs___sequent__TOP__ysyx_22040175_top__u_ex_mem_regs__1\n"); );
    // Body
    vlSelf->__Vdly__ebreak_flag_ex_mem_o = vlSelf->__PVT__ebreak_flag_ex_mem_o;
    vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_o;
    vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_o;
    vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_o;
    vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_o;
    vlSelf->__Vdly__rest_id_mem_ex_mem_o = vlSelf->__PVT__rest_id_mem_ex_mem_o;
    vlSelf->__Vdly__cunqu_hazard_ex_mem_o = vlSelf->__PVT__cunqu_hazard_ex_mem_o;
    vlSelf->__Vdly__rd_buf_flag_ex_mem_o = vlSelf->__PVT__rd_buf_flag_ex_mem_o;
    vlSelf->__Vdly__from_ex_alu_res_ex_mem_o = vlSelf->__PVT__from_ex_alu_res_ex_mem_o;
    vlSelf->__Vdly__expand_signed_ex_mem_o = vlSelf->__PVT__expand_signed_ex_mem_o;
    vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_o;
    vlSelf->__Vdly__reg_waddr_ex_mem_o = vlSelf->__PVT__reg_waddr_ex_mem_o;
    vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_o;
    vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_o;
    vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_o;
    vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_o;
    vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_o;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__rest_id_mem_ex_mem_i) {
            vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_i;
            vlSelf->__Vdly__reg_waddr_ex_mem_o = vlSelf->__PVT__reg_waddr_ex_mem_i;
            vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_i;
            vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_i;
            vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_i;
            vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_i;
            vlSelf->__Vdly__expand_signed_ex_mem_o 
                = vlSelf->__PVT__expand_signed_ex_mem_i;
            vlSelf->__Vdly__ebreak_flag_ex_mem_o = vlSelf->__PVT__ebreak_flag_ex_mem_i;
            vlSelf->__Vdly__rd_buf_flag_ex_mem_o = vlSelf->__PVT__rd_buf_flag_ex_mem_i;
            vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_i;
            vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_i;
            vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_i;
            vlSelf->__Vdly__from_ex_alu_res_ex_mem_o 
                = vlSelf->__PVT__from_ex_alu_res_ex_mem_i;
            vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_i;
            vlSelf->__Vdly__cunqu_hazard_ex_mem_o = vlSelf->__PVT__cunqu_hazard_ex_mem_i;
            vlSelf->__Vdly__rest_id_mem_ex_mem_o = 1U;
            vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_i;
        } else if (vlSelf->__PVT__id_mul_ex_mem_i) {
            if (vlSelf->__PVT__sh_fnsh_flag_ex_mem_i) {
                vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_i;
                vlSelf->__Vdly__reg_waddr_ex_mem_o 
                    = vlSelf->__PVT__reg_waddr_ex_mem_i;
                vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_i;
                vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_i;
                vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_i;
                vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_i;
                vlSelf->__Vdly__expand_signed_ex_mem_o 
                    = vlSelf->__PVT__expand_signed_ex_mem_i;
                vlSelf->__Vdly__ebreak_flag_ex_mem_o 
                    = vlSelf->__PVT__ebreak_flag_ex_mem_i;
                vlSelf->__Vdly__rd_buf_flag_ex_mem_o 
                    = vlSelf->__PVT__rd_buf_flag_ex_mem_i;
                vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_i;
                vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_i;
                vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_i;
                vlSelf->__Vdly__from_ex_alu_res_ex_mem_o 
                    = vlSelf->__PVT__from_ex_alu_res_ex_mem_i;
                vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_i;
                vlSelf->__Vdly__rest_id_mem_ex_mem_o = 0U;
                vlSelf->__Vdly__cunqu_hazard_ex_mem_o 
                    = vlSelf->__PVT__cunqu_hazard_ex_mem_i;
                vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_i;
            } else {
                vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_o;
                vlSelf->__Vdly__reg_waddr_ex_mem_o 
                    = vlSelf->__PVT__reg_waddr_ex_mem_o;
                vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_o;
                vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_o;
                vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_o;
                vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_o;
                vlSelf->__Vdly__expand_signed_ex_mem_o 
                    = vlSelf->__PVT__expand_signed_ex_mem_o;
                vlSelf->__Vdly__ebreak_flag_ex_mem_o 
                    = vlSelf->__PVT__ebreak_flag_ex_mem_o;
                vlSelf->__Vdly__rd_buf_flag_ex_mem_o 
                    = vlSelf->__PVT__rd_buf_flag_ex_mem_o;
                vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_o;
                vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_o;
                vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_o;
                vlSelf->__Vdly__from_ex_alu_res_ex_mem_o 
                    = vlSelf->__PVT__from_ex_alu_res_ex_mem_o;
                vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_o;
                vlSelf->__Vdly__rest_id_mem_ex_mem_o = 0U;
                vlSelf->__Vdly__cunqu_hazard_ex_mem_o 
                    = vlSelf->__PVT__cunqu_hazard_ex_mem_o;
                vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_o;
            }
        } else if (vlSelf->__PVT__id_div_ex_mem_i) {
            if (vlSelf->__PVT__div_finish_ex_mem_i) {
                vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_i;
                vlSelf->__Vdly__reg_waddr_ex_mem_o 
                    = vlSelf->__PVT__reg_waddr_ex_mem_i;
                vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_i;
                vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_i;
                vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_i;
                vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_i;
                vlSelf->__Vdly__expand_signed_ex_mem_o 
                    = vlSelf->__PVT__expand_signed_ex_mem_i;
                vlSelf->__Vdly__ebreak_flag_ex_mem_o 
                    = vlSelf->__PVT__ebreak_flag_ex_mem_i;
                vlSelf->__Vdly__rd_buf_flag_ex_mem_o 
                    = vlSelf->__PVT__rd_buf_flag_ex_mem_i;
                vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_i;
                vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_i;
                vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_i;
                vlSelf->__Vdly__from_ex_alu_res_ex_mem_o 
                    = vlSelf->__PVT__from_ex_alu_res_ex_mem_i;
                vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_i;
                vlSelf->__Vdly__rest_id_mem_ex_mem_o = 0U;
                vlSelf->__Vdly__cunqu_hazard_ex_mem_o 
                    = vlSelf->__PVT__cunqu_hazard_ex_mem_i;
                vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_i;
            } else {
                vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_o;
                vlSelf->__Vdly__reg_waddr_ex_mem_o 
                    = vlSelf->__PVT__reg_waddr_ex_mem_o;
                vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_o;
                vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_o;
                vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_o;
                vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_o;
                vlSelf->__Vdly__expand_signed_ex_mem_o 
                    = vlSelf->__PVT__expand_signed_ex_mem_o;
                vlSelf->__Vdly__ebreak_flag_ex_mem_o 
                    = vlSelf->__PVT__ebreak_flag_ex_mem_o;
                vlSelf->__Vdly__rd_buf_flag_ex_mem_o 
                    = vlSelf->__PVT__rd_buf_flag_ex_mem_o;
                vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_o;
                vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_o;
                vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_o;
                vlSelf->__Vdly__from_ex_alu_res_ex_mem_o 
                    = vlSelf->__PVT__from_ex_alu_res_ex_mem_o;
                vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_o;
                vlSelf->__Vdly__rest_id_mem_ex_mem_o = 0U;
                vlSelf->__Vdly__cunqu_hazard_ex_mem_o 
                    = vlSelf->__PVT__cunqu_hazard_ex_mem_o;
                vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_o;
            }
        } else {
            vlSelf->__Vdly__reg_wen_ex_mem_o = vlSelf->__PVT__reg_wen_ex_mem_i;
            vlSelf->__Vdly__reg_waddr_ex_mem_o = vlSelf->__PVT__reg_waddr_ex_mem_i;
            vlSelf->__Vdly__wmask_ex_mem_o = vlSelf->__PVT__wmask_ex_mem_i;
            vlSelf->__Vdly__s_flag_ex_mem_o = vlSelf->__PVT__s_flag_ex_mem_i;
            vlSelf->__Vdly__time_set_ex_mem_o = vlSelf->__PVT__time_set_ex_mem_i;
            vlSelf->__Vdly__s_imm_ex_mem_o = vlSelf->__PVT__s_imm_ex_mem_i;
            vlSelf->__Vdly__expand_signed_ex_mem_o 
                = vlSelf->__PVT__expand_signed_ex_mem_i;
            vlSelf->__Vdly__ebreak_flag_ex_mem_o = vlSelf->__PVT__ebreak_flag_ex_mem_i;
            vlSelf->__Vdly__rd_buf_flag_ex_mem_o = vlSelf->__PVT__rd_buf_flag_ex_mem_i;
            vlSelf->__Vdly__alu_op_ex_mem_o = vlSelf->__PVT__alu_op_ex_mem_i;
            vlSelf->__Vdly__alu_src1_ex_mem_o = vlSelf->__PVT__alu_src1_ex_mem_i;
            vlSelf->__Vdly__alu_src2_ex_mem_o = vlSelf->__PVT__alu_src2_ex_mem_i;
            vlSelf->__Vdly__from_ex_alu_res_ex_mem_o 
                = vlSelf->__PVT__from_ex_alu_res_ex_mem_i;
            vlSelf->__Vdly__pc_ex_mem_o = vlSelf->__PVT__pc_ex_mem_i;
            vlSelf->__Vdly__rest_id_mem_ex_mem_o = 0U;
            vlSelf->__Vdly__cunqu_hazard_ex_mem_o = vlSelf->__PVT__cunqu_hazard_ex_mem_i;
            vlSelf->__Vdly__csr_addr_ex_mem_o = vlSelf->__PVT__csr_addr_ex_mem_i;
        }
    } else {
        vlSelf->__Vdly__reg_wen_ex_mem_o = 0U;
        vlSelf->__Vdly__reg_waddr_ex_mem_o = 0U;
        vlSelf->__Vdly__wmask_ex_mem_o = 0U;
        vlSelf->__Vdly__s_flag_ex_mem_o = 0U;
        vlSelf->__Vdly__time_set_ex_mem_o = 0U;
        vlSelf->__Vdly__s_imm_ex_mem_o = 0U;
        vlSelf->__Vdly__expand_signed_ex_mem_o = 0U;
        vlSelf->__Vdly__ebreak_flag_ex_mem_o = 0U;
        vlSelf->__Vdly__rd_buf_flag_ex_mem_o = 0U;
        vlSelf->__Vdly__alu_op_ex_mem_o = 0U;
        vlSelf->__Vdly__alu_src1_ex_mem_o = 0ULL;
        vlSelf->__Vdly__alu_src2_ex_mem_o = 0ULL;
        vlSelf->__Vdly__from_ex_alu_res_ex_mem_o = 0ULL;
        vlSelf->__Vdly__pc_ex_mem_o = 0x80000000ULL;
        vlSelf->__Vdly__rest_id_mem_ex_mem_o = 0U;
        vlSelf->__Vdly__cunqu_hazard_ex_mem_o = 0U;
        vlSelf->__Vdly__csr_addr_ex_mem_o = 0U;
    }
    vlSelf->__PVT__reg_wen_ex_mem_o = vlSelf->__Vdly__reg_wen_ex_mem_o;
    vlSelf->__PVT__wmask_ex_mem_o = vlSelf->__Vdly__wmask_ex_mem_o;
    vlSelf->__PVT__time_set_ex_mem_o = vlSelf->__Vdly__time_set_ex_mem_o;
    vlSelf->__PVT__s_imm_ex_mem_o = vlSelf->__Vdly__s_imm_ex_mem_o;
    vlSelf->__PVT__ebreak_flag_ex_mem_o = vlSelf->__Vdly__ebreak_flag_ex_mem_o;
    vlSelf->__PVT__rest_id_mem_ex_mem_o = vlSelf->__Vdly__rest_id_mem_ex_mem_o;
    vlSelf->__PVT__cunqu_hazard_ex_mem_o = vlSelf->__Vdly__cunqu_hazard_ex_mem_o;
    vlSelf->__PVT__rd_buf_flag_ex_mem_o = vlSelf->__Vdly__rd_buf_flag_ex_mem_o;
    vlSelf->__PVT__from_ex_alu_res_ex_mem_o = vlSelf->__Vdly__from_ex_alu_res_ex_mem_o;
    vlSelf->__PVT__expand_signed_ex_mem_o = vlSelf->__Vdly__expand_signed_ex_mem_o;
    vlSelf->__PVT__s_flag_ex_mem_o = vlSelf->__Vdly__s_flag_ex_mem_o;
    vlSelf->__PVT__reg_waddr_ex_mem_o = vlSelf->__Vdly__reg_waddr_ex_mem_o;
    vlSelf->__PVT__alu_op_ex_mem_o = vlSelf->__Vdly__alu_op_ex_mem_o;
    vlSelf->__PVT__alu_src1_ex_mem_o = vlSelf->__Vdly__alu_src1_ex_mem_o;
    vlSelf->__PVT__alu_src2_ex_mem_o = vlSelf->__Vdly__alu_src2_ex_mem_o;
    vlSelf->__PVT__csr_addr_ex_mem_o = vlSelf->__Vdly__csr_addr_ex_mem_o;
    vlSelf->__PVT__pc_ex_mem_o = vlSelf->__Vdly__pc_ex_mem_o;
}
