// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_pc_predict.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_pc_predict___ctor_var_reset(Vysyx_22040175_top_pc_predict* vlSelf);

Vysyx_22040175_top_pc_predict::Vysyx_22040175_top_pc_predict(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_pc_predict___ctor_var_reset(this);
}

void Vysyx_22040175_top_pc_predict::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_pc_predict::~Vysyx_22040175_top_pc_predict() {
}

void Vysyx_22040175_top_pc_predict___settle__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__1(Vysyx_22040175_top_pc_predict* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_pc_predict___settle__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__1\n"); );
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

void Vysyx_22040175_top_pc_predict___settle__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__2(Vysyx_22040175_top_pc_predict* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_pc_predict___settle__TOP__ysyx_22040175_top__u_if_stage__u_pc_predict__2\n"); );
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

void Vysyx_22040175_top_pc_predict___ctor_var_reset(Vysyx_22040175_top_pc_predict* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_pc_predict___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__curr_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_curr_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__return_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__if_send_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_no_use = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mem_res_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_res_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mret_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ecall_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__present_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__md_add_pc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__md_present_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__md_next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ena = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__present_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__if_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__if_send_id = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__md_present_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__md_add_pc = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__curr_pc = VL_RAND_RESET_Q(64);
}
