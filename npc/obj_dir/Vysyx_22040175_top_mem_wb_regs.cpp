// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mem_wb_regs.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_mem_wb_regs___sequent__TOP__ysyx_22040175_top__u_mem_wb_regs__1(Vysyx_22040175_top_mem_wb_regs* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_mem_wb_regs___sequent__TOP__ysyx_22040175_top__u_mem_wb_regs__1\n"); );
    // Body
    vlSelf->__Vdly__wm_valid = vlSelf->__PVT__wm_valid;
    vlSelf->__Vdly__pc_mem_wb_o = vlSelf->__PVT__pc_mem_wb_o;
    vlSelf->__Vdly__ebreak_flag_mem_wb_o = vlSelf->__PVT__ebreak_flag_mem_wb_o;
    vlSelf->__Vdly__s_imm_mem_wb_o = vlSelf->__PVT__s_imm_mem_wb_o;
    vlSelf->__Vdly__time_set_mem_wb_o = vlSelf->__PVT__time_set_mem_wb_o;
    vlSelf->__Vdly__wmask_mem_wb_o = vlSelf->__PVT__wmask_mem_wb_o;
    vlSelf->__Vdly__expand_signed_mem_wb_o = vlSelf->__PVT__expand_signed_mem_wb_o;
    vlSelf->__Vdly__s_flag_mem_wb_o = vlSelf->__PVT__s_flag_mem_wb_o;
    vlSelf->__Vdly__reg_waddr_mem_wb_o = vlSelf->__PVT__reg_waddr_mem_wb_o;
    vlSelf->__Vdly__reg_wen_mem_wb_o = vlSelf->__PVT__reg_wen_mem_wb_o;
    vlSelf->__Vdly__cunqu_hazard_mem_wb_o = vlSelf->__PVT__cunqu_hazard_mem_wb_o;
    vlSelf->__Vdly__from_mem_alu_res_mem_wb_o = vlSelf->__PVT__from_mem_alu_res_mem_wb_o;
    vlSelf->__Vdly__from_ex_alu_res_mem_wb_o = vlSelf->__PVT__from_ex_alu_res_mem_wb_o;
    vlSelf->__Vdly__rd_buf_flag_mem_wb_o = vlSelf->__PVT__rd_buf_flag_mem_wb_o;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__rest_id_mem_ex_mem_o) {
            vlSelf->__Vdly__reg_wen_mem_wb_o = vlSelf->__PVT__reg_wen_mem_wb_o;
            vlSelf->__Vdly__reg_waddr_mem_wb_o = vlSelf->__PVT__reg_waddr_mem_wb_o;
            vlSelf->__Vdly__wmask_mem_wb_o = vlSelf->__PVT__wmask_mem_wb_o;
            vlSelf->__Vdly__s_flag_mem_wb_o = vlSelf->__PVT__s_flag_mem_wb_o;
            vlSelf->__Vdly__time_set_mem_wb_o = vlSelf->__PVT__time_set_mem_wb_o;
            vlSelf->__Vdly__s_imm_mem_wb_o = vlSelf->__PVT__s_imm_mem_wb_o;
            vlSelf->__Vdly__expand_signed_mem_wb_o 
                = vlSelf->__PVT__expand_signed_mem_wb_o;
            vlSelf->__Vdly__ebreak_flag_mem_wb_o = vlSelf->__PVT__ebreak_flag_mem_wb_o;
            vlSelf->__Vdly__rd_buf_flag_mem_wb_o = vlSelf->__PVT__rd_buf_flag_mem_wb_o;
            vlSelf->__Vdly__from_ex_alu_res_mem_wb_o 
                = vlSelf->__PVT__from_ex_alu_res_mem_wb_o;
            vlSelf->__Vdly__from_mem_alu_res_mem_wb_o 
                = vlSelf->__PVT__from_mem_alu_res_mem_wb_i;
            vlSelf->__Vdly__pc_mem_wb_o = vlSelf->__PVT__pc_mem_wb_o;
            vlSelf->__Vdly__cunqu_hazard_mem_wb_o = vlSelf->__PVT__cunqu_hazard_mem_wb_o;
            vlSelf->__Vdly__wm_valid = 0U;
        } else if (vlSelf->__PVT__mem_no_use) {
            if (((IData)(vlSelf->__PVT__mem_no_use) 
                 & (~ (IData)(vlSelf->__PVT__delay_mem_no_use)))) {
                vlSelf->__Vdly__reg_wen_mem_wb_o = vlSelf->__PVT__reg_wen_mem_wb_o;
                vlSelf->__Vdly__reg_waddr_mem_wb_o 
                    = vlSelf->__PVT__reg_waddr_mem_wb_o;
                vlSelf->__Vdly__wmask_mem_wb_o = vlSelf->__PVT__wmask_mem_wb_o;
                vlSelf->__Vdly__s_flag_mem_wb_o = vlSelf->__PVT__s_flag_mem_wb_o;
                vlSelf->__Vdly__time_set_mem_wb_o = vlSelf->__PVT__time_set_mem_wb_o;
                vlSelf->__Vdly__s_imm_mem_wb_o = vlSelf->__PVT__s_imm_mem_wb_o;
                vlSelf->__Vdly__expand_signed_mem_wb_o 
                    = vlSelf->__PVT__expand_signed_mem_wb_o;
                vlSelf->__Vdly__ebreak_flag_mem_wb_o 
                    = vlSelf->__PVT__ebreak_flag_mem_wb_o;
                vlSelf->__Vdly__rd_buf_flag_mem_wb_o 
                    = vlSelf->__PVT__rd_buf_flag_mem_wb_o;
                vlSelf->__Vdly__from_ex_alu_res_mem_wb_o 
                    = vlSelf->__PVT__from_ex_alu_res_mem_wb_o;
                vlSelf->__Vdly__from_mem_alu_res_mem_wb_o 
                    = vlSelf->__PVT__from_mem_alu_res_mem_wb_o;
                vlSelf->__Vdly__pc_mem_wb_o = vlSelf->__PVT__pc_mem_wb_o;
                vlSelf->__Vdly__cunqu_hazard_mem_wb_o 
                    = vlSelf->__PVT__cunqu_hazard_mem_wb_o;
                vlSelf->__Vdly__wm_valid = 0U;
            } else {
                vlSelf->__Vdly__reg_wen_mem_wb_o = vlSelf->__PVT__reg_wen_mem_wb_i;
                vlSelf->__Vdly__reg_waddr_mem_wb_o 
                    = vlSelf->__PVT__reg_waddr_mem_wb_i;
                vlSelf->__Vdly__wmask_mem_wb_o = vlSelf->__PVT__wmask_mem_wb_i;
                vlSelf->__Vdly__s_flag_mem_wb_o = vlSelf->__PVT__s_flag_mem_wb_i;
                vlSelf->__Vdly__time_set_mem_wb_o = vlSelf->__PVT__time_set_mem_wb_i;
                vlSelf->__Vdly__s_imm_mem_wb_o = vlSelf->__PVT__s_imm_mem_wb_i;
                vlSelf->__Vdly__expand_signed_mem_wb_o 
                    = vlSelf->__PVT__expand_signed_mem_wb_i;
                vlSelf->__Vdly__ebreak_flag_mem_wb_o 
                    = vlSelf->__PVT__ebreak_flag_mem_wb_i;
                vlSelf->__Vdly__rd_buf_flag_mem_wb_o 
                    = vlSelf->__PVT__rd_buf_flag_mem_wb_i;
                vlSelf->__Vdly__from_ex_alu_res_mem_wb_o 
                    = vlSelf->__PVT__from_ex_alu_res_mem_wb_i;
                vlSelf->__Vdly__from_mem_alu_res_mem_wb_o 
                    = vlSelf->__PVT__from_mem_alu_res_mem_wb_i;
                vlSelf->__Vdly__pc_mem_wb_o = vlSelf->__PVT__pc_mem_wb_i;
                vlSelf->__Vdly__cunqu_hazard_mem_wb_o 
                    = vlSelf->__PVT__cunqu_hazard_mem_wb_i;
                vlSelf->__Vdly__wm_valid = 1U;
            }
        } else {
            vlSelf->__Vdly__reg_wen_mem_wb_o = vlSelf->__PVT__reg_wen_mem_wb_o;
            vlSelf->__Vdly__reg_waddr_mem_wb_o = vlSelf->__PVT__reg_waddr_mem_wb_o;
            vlSelf->__Vdly__wmask_mem_wb_o = vlSelf->__PVT__wmask_mem_wb_o;
            vlSelf->__Vdly__s_flag_mem_wb_o = vlSelf->__PVT__s_flag_mem_wb_o;
            vlSelf->__Vdly__time_set_mem_wb_o = vlSelf->__PVT__time_set_mem_wb_o;
            vlSelf->__Vdly__s_imm_mem_wb_o = vlSelf->__PVT__s_imm_mem_wb_o;
            vlSelf->__Vdly__expand_signed_mem_wb_o 
                = vlSelf->__PVT__expand_signed_mem_wb_o;
            vlSelf->__Vdly__ebreak_flag_mem_wb_o = vlSelf->__PVT__ebreak_flag_mem_wb_o;
            vlSelf->__Vdly__rd_buf_flag_mem_wb_o = vlSelf->__PVT__rd_buf_flag_mem_wb_o;
            vlSelf->__Vdly__from_ex_alu_res_mem_wb_o 
                = vlSelf->__PVT__from_ex_alu_res_mem_wb_o;
            vlSelf->__Vdly__from_mem_alu_res_mem_wb_o 
                = vlSelf->__PVT__from_mem_alu_res_mem_wb_i;
            vlSelf->__Vdly__pc_mem_wb_o = vlSelf->__PVT__pc_mem_wb_o;
            vlSelf->__Vdly__cunqu_hazard_mem_wb_o = vlSelf->__PVT__cunqu_hazard_mem_wb_o;
            vlSelf->__Vdly__wm_valid = 0U;
        }
    } else {
        vlSelf->__Vdly__reg_wen_mem_wb_o = 0U;
        vlSelf->__Vdly__reg_waddr_mem_wb_o = 0U;
        vlSelf->__Vdly__wmask_mem_wb_o = 0U;
        vlSelf->__Vdly__s_flag_mem_wb_o = 0U;
        vlSelf->__Vdly__time_set_mem_wb_o = 0U;
        vlSelf->__Vdly__s_imm_mem_wb_o = 0U;
        vlSelf->__Vdly__expand_signed_mem_wb_o = 0U;
        vlSelf->__Vdly__ebreak_flag_mem_wb_o = 0U;
        vlSelf->__Vdly__rd_buf_flag_mem_wb_o = 0U;
        vlSelf->__Vdly__from_ex_alu_res_mem_wb_o = 0ULL;
        vlSelf->__Vdly__from_mem_alu_res_mem_wb_o = 0ULL;
        vlSelf->__Vdly__pc_mem_wb_o = 0x80000000ULL;
        vlSelf->__Vdly__cunqu_hazard_mem_wb_o = 0U;
        vlSelf->__Vdly__wm_valid = 0U;
    }
    vlSelf->__PVT__wm_valid = vlSelf->__Vdly__wm_valid;
    vlSelf->__PVT__time_set_mem_wb_o = vlSelf->__Vdly__time_set_mem_wb_o;
    vlSelf->__PVT__wmask_mem_wb_o = vlSelf->__Vdly__wmask_mem_wb_o;
    vlSelf->__PVT__s_imm_mem_wb_o = vlSelf->__Vdly__s_imm_mem_wb_o;
    vlSelf->__PVT__ebreak_flag_mem_wb_o = vlSelf->__Vdly__ebreak_flag_mem_wb_o;
    vlSelf->__Vdly__delay_mem_no_use = vlSelf->__PVT__delay_mem_no_use;
    vlSelf->__PVT__pc_mem_wb_o = vlSelf->__Vdly__pc_mem_wb_o;
    vlSelf->__PVT__expand_signed_mem_wb_o = vlSelf->__Vdly__expand_signed_mem_wb_o;
    vlSelf->__PVT__reg_wen_mem_wb_o = vlSelf->__Vdly__reg_wen_mem_wb_o;
    vlSelf->__PVT__reg_waddr_mem_wb_o = vlSelf->__Vdly__reg_waddr_mem_wb_o;
    vlSelf->__PVT__s_flag_mem_wb_o = vlSelf->__Vdly__s_flag_mem_wb_o;
    vlSelf->__PVT__rd_buf_flag_mem_wb_o = vlSelf->__Vdly__rd_buf_flag_mem_wb_o;
    vlSelf->__PVT__from_ex_alu_res_mem_wb_o = vlSelf->__Vdly__from_ex_alu_res_mem_wb_o;
    vlSelf->__PVT__cunqu_hazard_mem_wb_o = vlSelf->__Vdly__cunqu_hazard_mem_wb_o;
    vlSelf->__PVT__from_mem_alu_res_mem_wb_o = vlSelf->__Vdly__from_mem_alu_res_mem_wb_o;
    vlSelf->__Vdly__delay_mem_no_use = ((IData)(vlSelf->__PVT__rst_n) 
                                        & (IData)(vlSelf->__PVT__mem_no_use));
    vlSelf->__PVT__delay_mem_no_use = vlSelf->__Vdly__delay_mem_no_use;
}
