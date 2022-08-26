// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mem_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_mem_stage___sequent__TOP__ysyx_22040175_top__u_mem_stage__4(Vysyx_22040175_top_mem_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_mem_stage___sequent__TOP__ysyx_22040175_top__u_mem_stage__4\n"); );
    // Body
    vlSelf->__Vdly__reg_mstatus = vlSelf->__PVT__reg_mstatus;
    vlSelf->__Vdly__mem_send_id = vlSelf->__PVT__mem_send_id;
    vlSelf->__Vdly__reg_mem_addr = vlSelf->__PVT__reg_mem_addr;
    vlSelf->__Vdly__reg_rd_buf_flag = vlSelf->__PVT__reg_rd_buf_flag;
    vlSelf->__Vdly__reg_mstatus = ((IData)(vlSelf->__PVT__rst_n)
                                    ? vlSelf->__PVT__mstatus
                                    : 0xa0001800ULL);
    if (vlSelf->__PVT__rst_n) {
        if ((0U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__mem_send_id = 2U;
            vlSelf->__Vdly__reg_mem_addr = (vlSelf->__PVT__alu_src1 
                                            + vlSelf->__PVT__alu_src2);
            vlSelf->__Vdly__reg_rd_buf_flag = vlSelf->__PVT__rd_buf_flag;
        } else if ((1U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__mem_send_id = 2U;
            vlSelf->__Vdly__reg_mem_addr = vlSelf->__PVT__reg_mem_addr;
            vlSelf->__Vdly__reg_rd_buf_flag = vlSelf->__PVT__reg_rd_buf_flag;
        } else if ((2U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__mem_send_id = 2U;
            vlSelf->__Vdly__reg_mem_addr = vlSelf->__PVT__reg_mem_addr;
            vlSelf->__Vdly__reg_rd_buf_flag = vlSelf->__PVT__reg_rd_buf_flag;
        } else if ((3U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__mem_send_id = 0U;
            vlSelf->__Vdly__reg_mem_addr = 0ULL;
            vlSelf->__Vdly__reg_rd_buf_flag = vlSelf->__PVT__reg_rd_buf_flag;
        } else {
            vlSelf->__Vdly__mem_send_id = 0U;
            vlSelf->__Vdly__reg_mem_addr = 0ULL;
            vlSelf->__Vdly__reg_rd_buf_flag = 0U;
        }
    } else {
        vlSelf->__Vdly__mem_send_id = 0U;
        vlSelf->__Vdly__reg_mem_addr = 0ULL;
        vlSelf->__Vdly__reg_rd_buf_flag = 0U;
    }
    vlSelf->__PVT__reg_mstatus = vlSelf->__Vdly__reg_mstatus;
    vlSelf->__PVT__mem_send_id = vlSelf->__Vdly__mem_send_id;
    vlSelf->__PVT__reg_mem_addr = vlSelf->__Vdly__reg_mem_addr;
    vlSelf->__Vdly__present_state = vlSelf->__PVT__present_state;
    vlSelf->__PVT__reg_rd_buf_flag = vlSelf->__Vdly__reg_rd_buf_flag;
    vlSelf->__PVT__mem_addr = vlSelf->__PVT__reg_mem_addr;
    vlSelf->__Vdly__present_state = ((IData)(vlSelf->__PVT__rst_n)
                                      ? (IData)(vlSelf->__PVT__next_state)
                                      : 0U);
    vlSelf->__PVT__present_state = vlSelf->__Vdly__present_state;
    vlSelf->__PVT__mem_rd_buf_flag = ((3U == (IData)(vlSelf->__PVT__present_state))
                                       ? (IData)(vlSelf->__PVT__reg_rd_buf_flag)
                                       : 0U);
    vlSelf->__PVT__mem_no_use = (1U & (~ ((1U == (IData)(vlSelf->__PVT__present_state)) 
                                          | (2U == (IData)(vlSelf->__PVT__present_state)))));
    vlSelf->__PVT__mem_axi_valid = (1U == (IData)(vlSelf->__PVT__present_state));
    vlSelf->__PVT__mem_res_valid = (3U == (IData)(vlSelf->__PVT__present_state));
}

VL_INLINE_OPT void Vysyx_22040175_top_mem_stage___combo__TOP__ysyx_22040175_top__u_mem_stage__5(Vysyx_22040175_top_mem_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_mem_stage___combo__TOP__ysyx_22040175_top__u_mem_stage__5\n"); );
    // Body
    vlSelf->__PVT__rd_buf_lw = (((IData)(vlSelf->__PVT__r_done) 
                                 & (2U == (IData)(vlSelf->__PVT__return_id)))
                                 ? vlSelf->__PVT__axi_rdata
                                 : 0ULL);
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__present_state))
                                  ? (((((1U == (IData)(vlSelf->__PVT__rd_buf_flag)) 
                                        | (2U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                       | (4U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                      | (6U == (IData)(vlSelf->__PVT__rd_buf_flag)))
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelf->__PVT__present_state))
                                   ? ((IData)(vlSelf->__PVT__ar_hs)
                                       ? 2U : 1U) : 
                                  ((2U == (IData)(vlSelf->__PVT__present_state))
                                    ? (((IData)(vlSelf->__PVT__r_done) 
                                        & (2U == (IData)(vlSelf->__PVT__return_id)))
                                        ? 3U : 2U) : 0U)));
    if ((3U == (IData)(vlSelf->__PVT__alu_op))) {
        if ((1U == (IData)(vlSelf->__PVT__reg_rd_buf_flag))) {
            vlSelf->__PVT__alu_res = VL_EXTEND_QI(64,32, 
                                                  VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__rd_buf_lw, 0U, 0x20U));
        } else if ((2U == (IData)(vlSelf->__PVT__reg_rd_buf_flag))) {
            vlSelf->__PVT__alu_res = vlSelf->__PVT__rd_buf_lw;
        } else if ((4U == (IData)(vlSelf->__PVT__reg_rd_buf_flag))) {
            vlSelf->__PVT__alu_res = VL_EXTEND_QI(64,8, 
                                                  (0xffU 
                                                   & VL_SEL_IQII(8,64,6,32, vlSelf->__PVT__rd_buf_lw, 0U, 8U)));
        } else if ((6U == (IData)(vlSelf->__PVT__reg_rd_buf_flag))) {
            vlSelf->__PVT__alu_res = VL_EXTEND_QI(64,16, 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__rd_buf_lw, 0U, 0x10U)));
        }
    } else if ((0x18U == (IData)(vlSelf->__PVT__alu_op))) {
        if ((0x341U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mepc = (vlSelf->__PVT__alu_src1 
                                   | vlSelf->__PVT__alu_src2);
        } else if ((0x342U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mcause = (vlSelf->__PVT__alu_src1 
                                     | vlSelf->__PVT__alu_src2);
        } else if ((0x305U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mtvec = (vlSelf->__PVT__alu_src1 
                                    | vlSelf->__PVT__alu_src2);
        } else if ((0x300U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mstatus = (vlSelf->__PVT__alu_src1 
                                      | vlSelf->__PVT__alu_src2);
        }
    } else if ((0x19U == (IData)(vlSelf->__PVT__alu_op))) {
        if ((0x341U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mepc = vlSelf->__PVT__alu_src1;
        } else if ((0x342U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mcause = vlSelf->__PVT__alu_src1;
        } else if ((0x305U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mtvec = vlSelf->__PVT__alu_src1;
        } else if ((0x300U == (IData)(vlSelf->__PVT__mem_csr_addr))) {
            vlSelf->__PVT__mstatus = vlSelf->__PVT__alu_src1;
        }
    } else if ((0x1aU == (IData)(vlSelf->__PVT__alu_op))) {
        vlSelf->__PVT__mepc = vlSelf->__PVT__mem_pc;
        vlSelf->__PVT__mcause = 0xbULL;
        VL_ASSIGNBIT_QI(1,7U, vlSelf->__PVT__mstatus, 
                        (1U & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__reg_mstatus, 3U)));
        VL_ASSIGNBIT_QI(1,3U, vlSelf->__PVT__mstatus, 0U);
    } else if ((0x1bU == (IData)(vlSelf->__PVT__alu_op))) {
        VL_ASSIGNBIT_QI(1,3U, vlSelf->__PVT__mstatus, 
                        (1U & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__reg_mstatus, 7U)));
        VL_ASSIGNBIT_QO(1,7U, vlSelf->__PVT__mstatus, 1U);
    }
    vlSelf->__PVT__sign_alu_res = ((0U == (IData)(vlSelf->__PVT__mem_expand_signed))
                                    ? vlSelf->__PVT__alu_res
                                    : ((1U == (IData)(vlSelf->__PVT__mem_expand_signed))
                                        ? VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_res, 0x1fU)), 0x20U), 
                                                        VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x20U))
                                        : ((2U == (IData)(vlSelf->__PVT__mem_expand_signed))
                                            ? VL_EXTEND_QI(64,32, 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x20U))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__mem_expand_signed))
                                                ? VL_CONCAT_QQI(64,48,16, 
                                                                (0xffffffffffffULL 
                                                                 & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_res, 0xfU)), 0x30U)), 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x10U)))
                                                : vlSelf->__PVT__alu_res))));
    vlSelf->__PVT__wb_hazard_result = (((((1U == (IData)(vlSelf->__PVT__rd_buf_flag)) 
                                          | (2U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                         | (4U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                        | (6U == (IData)(vlSelf->__PVT__rd_buf_flag)))
                                        ? vlSelf->__PVT__sign_alu_res
                                        : vlSelf->__PVT__mem_from_ex_alu_res);
}
