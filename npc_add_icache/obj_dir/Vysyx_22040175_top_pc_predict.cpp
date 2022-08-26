// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_pc_predict.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_pc_predict___sequent__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__3(Vysyx_22040175_top_pc_predict* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_pc_predict___sequent__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__3\n"); );
    // Body
    vlSelf->__Vdly__ena = vlSelf->__PVT__ena;
    vlSelf->__Vdly__if_send_id = vlSelf->__PVT__if_send_id;
    vlSelf->__Vdly__if_valid = vlSelf->__PVT__if_valid;
    vlSelf->__Vdly__curr_pc = vlSelf->__PVT__curr_pc;
    if (vlSelf->__PVT__rst_n) {
        if ((0U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 0U;
            vlSelf->__Vdly__if_send_id = 0U;
        } else if ((4U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 0U;
            vlSelf->__Vdly__if_send_id = 0U;
        } else if ((5U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 0U;
            vlSelf->__Vdly__if_send_id = 0U;
        } else if ((1U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 0U;
            vlSelf->__Vdly__if_send_id = 0U;
        } else if ((6U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 1U;
            vlSelf->__Vdly__if_send_id = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 0U;
            vlSelf->__Vdly__if_send_id = 1U;
        } else if ((3U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__if_valid = 0U;
            vlSelf->__Vdly__if_send_id = 0U;
        }
    } else {
        vlSelf->__Vdly__if_valid = 0U;
        vlSelf->__Vdly__if_send_id = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__id_mul) {
            if (((~ (IData)(vlSelf->__PVT__sh_fnsh_flag)) 
                 & (3U != (IData)(vlSelf->__PVT__md_add_pc)))) {
                vlSelf->__Vdly__curr_pc = vlSelf->__PVT__curr_pc;
            } else if ((3U == (IData)(vlSelf->__PVT__md_add_pc))) {
                vlSelf->__Vdly__curr_pc = (4ULL + vlSelf->__PVT__curr_pc);
            }
        } else if (vlSelf->__PVT__id_div) {
            if (((~ (IData)(vlSelf->__PVT__div_finish)) 
                 & (3U != (IData)(vlSelf->__PVT__md_add_pc)))) {
                vlSelf->__Vdly__curr_pc = vlSelf->__PVT__curr_pc;
            } else if ((3U == (IData)(vlSelf->__PVT__md_add_pc))) {
                vlSelf->__Vdly__curr_pc = (4ULL + vlSelf->__PVT__curr_pc);
            }
        } else if (vlSelf->__PVT__rest_id_mem) {
            vlSelf->__Vdly__curr_pc = vlSelf->__PVT__curr_pc;
        } else if (vlSelf->__PVT__sig_jalr) {
            vlSelf->__Vdly__curr_pc = vlSelf->__PVT__curr_pc;
        } else if (vlSelf->__PVT__delay_sig_jalr) {
            vlSelf->__Vdly__curr_pc = vlSelf->__PVT__id_next_pc;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__rest_id_mem)))) {
            if (vlSelf->__PVT__control_rest) {
                vlSelf->__Vdly__curr_pc = vlSelf->__PVT__id_next_pc;
            } else if (((((IData)(vlSelf->__PVT__cpu_ready) 
                          & (1U != (IData)(vlSelf->__PVT__md_add_pc))) 
                         & (2U != (IData)(vlSelf->__PVT__md_add_pc))) 
                        | (3U == (IData)(vlSelf->__PVT__md_add_pc)))) {
                vlSelf->__Vdly__curr_pc = (4ULL + vlSelf->__PVT__curr_pc);
            }
        }
    } else {
        vlSelf->__Vdly__curr_pc = 0x80000000ULL;
    }
    vlSelf->__PVT__if_send_id = vlSelf->__Vdly__if_send_id;
    vlSelf->__PVT__if_valid = vlSelf->__Vdly__if_valid;
    vlSelf->__Vdly__present_state = vlSelf->__PVT__present_state;
    vlSelf->__Vdly__delay_sig_jalr = vlSelf->__PVT__delay_sig_jalr;
    vlSelf->__Vdly__md_add_pc = vlSelf->__PVT__md_add_pc;
    vlSelf->__PVT__curr_pc = vlSelf->__Vdly__curr_pc;
    vlSelf->__Vdly__present_state = ((IData)(vlSelf->__PVT__rst_n)
                                      ? (IData)(vlSelf->__PVT__next_state)
                                      : 0U);
    if (vlSelf->__PVT__rst_n) {
        vlSelf->__Vdly__ena = 1U;
        vlSelf->__Vdly__delay_sig_jalr = vlSelf->__PVT__sig_jalr;
    } else {
        vlSelf->__Vdly__ena = 0U;
        vlSelf->__Vdly__delay_sig_jalr = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rst_n)))) {
        vlSelf->__Vdly__md_add_pc = 0U;
    }
    vlSelf->__Vdly__md_add_pc = ((0U == (IData)(vlSelf->__PVT__md_present_state))
                                  ? 0U : ((1U == (IData)(vlSelf->__PVT__md_present_state))
                                           ? 1U : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__md_present_state))
                                                    ? 2U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->__PVT__md_present_state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__control_rest)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))));
    vlSelf->__PVT__present_state = vlSelf->__Vdly__present_state;
    vlSelf->__PVT__delay_sig_jalr = vlSelf->__Vdly__delay_sig_jalr;
    vlSelf->__PVT__ena = vlSelf->__Vdly__ena;
    vlSelf->__PVT__md_add_pc = vlSelf->__Vdly__md_add_pc;
    vlSelf->__Vdly__md_present_state = vlSelf->__PVT__md_present_state;
    vlSelf->__Vdly__md_present_state = ((IData)(vlSelf->__PVT__rst_n)
                                         ? (IData)(vlSelf->__PVT__md_next_state)
                                         : 0U);
    vlSelf->__PVT__md_present_state = vlSelf->__Vdly__md_present_state;
}

VL_INLINE_OPT void Vysyx_22040175_top_pc_predict___combo__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__4(Vysyx_22040175_top_pc_predict* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_pc_predict___combo__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__4\n"); );
    // Body
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__present_state))
                                  ? (((((1U == (IData)(vlSelf->__PVT__ex_rd_buf_flag)) 
                                        | (2U == (IData)(vlSelf->__PVT__ex_rd_buf_flag))) 
                                       | (4U == (IData)(vlSelf->__PVT__ex_rd_buf_flag))) 
                                      | (6U == (IData)(vlSelf->__PVT__ex_rd_buf_flag)))
                                      ? 4U : 1U) : 
                                 ((4U == (IData)(vlSelf->__PVT__present_state))
                                   ? ((IData)(vlSelf->__PVT__mem_res_valid)
                                       ? 5U : 4U) : 
                                  ((5U == (IData)(vlSelf->__PVT__present_state))
                                    ? ((IData)(vlSelf->__PVT__wb_res_valid)
                                        ? 6U : 5U) : 
                                   ((1U == (IData)(vlSelf->__PVT__present_state))
                                     ? ((IData)(vlSelf->__PVT__w_start)
                                         ? 5U : 6U)
                                     : ((6U == (IData)(vlSelf->__PVT__present_state))
                                         ? (((IData)(vlSelf->__PVT__ar_hs) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__return_id)))
                                             ? 2U : 6U)
                                         : ((2U == (IData)(vlSelf->__PVT__present_state))
                                             ? (((IData)(vlSelf->__PVT__r_done) 
                                                 & (1U 
                                                    == (IData)(vlSelf->__PVT__return_id)))
                                                 ? 3U
                                                 : 2U)
                                             : 0U))))));
}

VL_INLINE_OPT void Vysyx_22040175_top_pc_predict___combo__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__5(Vysyx_22040175_top_pc_predict* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_pc_predict___combo__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__5\n"); );
    // Body
    vlSelf->__PVT__md_next_state = ((0U == (IData)(vlSelf->__PVT__md_present_state))
                                     ? (((IData)(vlSelf->__PVT__id_mul) 
                                         | (IData)(vlSelf->__PVT__id_div))
                                         ? 1U : 0U)
                                     : ((1U == (IData)(vlSelf->__PVT__md_present_state))
                                         ? (((((IData)(vlSelf->__PVT__sh_fnsh_flag) 
                                               | (IData)(vlSelf->__PVT__div_finish)) 
                                              & (IData)(vlSelf->__PVT__r_done)) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__return_id)))
                                             ? 3U : 
                                            ((((IData)(vlSelf->__PVT__sh_fnsh_flag) 
                                               | (IData)(vlSelf->__PVT__div_finish)) 
                                              & (~ (IData)(vlSelf->__PVT__r_done)))
                                              ? 2U : 1U))
                                         : ((2U == (IData)(vlSelf->__PVT__md_present_state))
                                             ? ((IData)(vlSelf->__PVT__r_done)
                                                 ? 3U
                                                 : 2U)
                                             : 0U)));
}
