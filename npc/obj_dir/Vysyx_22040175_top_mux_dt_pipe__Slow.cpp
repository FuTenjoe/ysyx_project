// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mux_dt_pipe.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_mux_dt_pipe___ctor_var_reset(Vysyx_22040175_top_mux_dt_pipe* vlSelf);

Vysyx_22040175_top_mux_dt_pipe::Vysyx_22040175_top_mux_dt_pipe(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_mux_dt_pipe___ctor_var_reset(this);
}

void Vysyx_22040175_top_mux_dt_pipe::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_mux_dt_pipe::~Vysyx_22040175_top_mux_dt_pipe() {
}

void Vysyx_22040175_top_mux_dt_pipe___settle__TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe__1(Vysyx_22040175_top_mux_dt_pipe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_dt_pipe___settle__TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe__1\n"); );
    // Body
    vlSelf->__PVT__data_rest_cond = VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__rest_from_id), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__delay_rest_id_mem), (IData)(vlSelf->__PVT__rest_wb_hazard)));
    if ((4U == (IData)(vlSelf->__PVT__data_rest_cond))) {
        if (vlSelf->__PVT__cunqu_hazard) {
            if ((0U == (IData)(vlSelf->__PVT__expand_signed))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_ex_alu_res;
                vlSelf->__PVT__reg2_rdata = 0ULL;
            } else if ((1U == (IData)(vlSelf->__PVT__expand_signed))) {
                vlSelf->__PVT__reg1_rdata = VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__from_ex_alu_res, 0x1fU)), 0x20U), 
                                                          VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__from_ex_alu_res, 0U, 0x20U));
                vlSelf->__PVT__reg2_rdata = 0ULL;
            } else if ((2U == (IData)(vlSelf->__PVT__expand_signed))) {
                vlSelf->__PVT__reg1_rdata = VL_EXTEND_QI(64,32, 
                                                         VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__from_ex_alu_res, 0U, 0x20U));
                vlSelf->__PVT__reg2_rdata = 0ULL;
            } else if ((3U == (IData)(vlSelf->__PVT__expand_signed))) {
                vlSelf->__PVT__reg1_rdata = VL_CONCAT_QQI(64,48,16, 
                                                          (0xffffffffffffULL 
                                                           & VL_REPLICATE_QOI(48,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__from_ex_alu_res, 0xfU)), 0x30U)), 
                                                          (0xffffU 
                                                           & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__from_ex_alu_res, 0U, 0x10U)));
                vlSelf->__PVT__reg2_rdata = 0ULL;
            } else {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_ex_alu_res;
                vlSelf->__PVT__reg2_rdata = 0ULL;
            }
        } else if (((IData)(vlSelf->__PVT__reg1_raddr) 
                    == (IData)(vlSelf->__PVT__reg_waddr))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_ex_alu_res;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        } else if (((IData)(vlSelf->__PVT__reg2_raddr) 
                    == (IData)(vlSelf->__PVT__reg_waddr))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_ex_alu_res;
        } else {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        }
    } else if ((6U == (IData)(vlSelf->__PVT__data_rest_cond))) {
        if (((IData)(vlSelf->__PVT__reg1_raddr) == (IData)(vlSelf->__PVT__delay_reg_waddr))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_mem_alu_res;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        } else if (((IData)(vlSelf->__PVT__reg2_raddr) 
                    == (IData)(vlSelf->__PVT__delay_reg_waddr))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_mem_alu_res;
        } else {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        }
    } else if ((5U == (IData)(vlSelf->__PVT__data_rest_cond))) {
        if ((4U == (IData)(vlSelf->__PVT__delay_data_rest_cond))) {
            if (((IData)(vlSelf->__PVT__reg1_raddr) 
                 == (IData)(vlSelf->__PVT__reg_waddr))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_ex_alu_res;
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg2_raddr];
            } else if (((IData)(vlSelf->__PVT__reg2_raddr) 
                        == (IData)(vlSelf->__PVT__reg_waddr))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg1_raddr];
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_ex_alu_res;
            } else if ((((IData)(vlSelf->__PVT__reg1_raddr) 
                         == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->__PVT__reg2_raddr) 
                           != (IData)(vlSelf->__PVT__mem_reg_waddr)))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__wb_hazard_result;
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg2_raddr];
            } else if ((((IData)(vlSelf->__PVT__reg2_raddr) 
                         == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->__PVT__reg1_raddr) 
                           != (IData)(vlSelf->__PVT__mem_reg_waddr)))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg1_raddr];
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__wb_hazard_result;
            } else {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg1_raddr];
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg2_raddr];
            }
        } else if ((6U == (IData)(vlSelf->__PVT__delay_data_rest_cond))) {
            if (((IData)(vlSelf->__PVT__reg1_raddr) 
                 == (IData)(vlSelf->__PVT__reg_waddr))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_mem_alu_res;
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg2_raddr];
            } else if (((IData)(vlSelf->__PVT__reg2_raddr) 
                        == (IData)(vlSelf->__PVT__reg_waddr))) {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg1_raddr];
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_mem_alu_res;
            } else {
                vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg1_raddr];
                vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                    [vlSelf->__PVT__reg2_raddr];
            }
        } else if (vlSelf->__PVT__mem_cunqu_hazard) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__mem_from_ex_alu_res;
            vlSelf->__PVT__reg2_rdata = 0ULL;
        } else if ((((IData)(vlSelf->__PVT__reg1_raddr) 
                     == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg2_raddr) 
                       == (IData)(vlSelf->__PVT__mem_reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__wb_hazard_result;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__wb_hazard_result;
        } else if ((((IData)(vlSelf->__PVT__reg1_raddr) 
                     == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg2_raddr) 
                       == (IData)(vlSelf->__PVT__reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__wb_hazard_result;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_ex_alu_res;
        } else if ((((IData)(vlSelf->__PVT__reg1_raddr) 
                     == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg2_raddr) 
                       != (IData)(vlSelf->__PVT__reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__wb_hazard_result;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        } else if ((((IData)(vlSelf->__PVT__reg2_raddr) 
                     == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg1_raddr) 
                       == (IData)(vlSelf->__PVT__reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_ex_alu_res;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__wb_hazard_result;
        } else if ((((IData)(vlSelf->__PVT__reg2_raddr) 
                     == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg1_raddr) 
                       != (IData)(vlSelf->__PVT__reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__wb_hazard_result;
        } else {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        }
    } else if ((7U == (IData)(vlSelf->__PVT__data_rest_cond))) {
        if ((((IData)(vlSelf->__PVT__reg1_raddr) == (IData)(vlSelf->__PVT__mem_reg_waddr)) 
             & ((IData)(vlSelf->__PVT__reg2_raddr) 
                == (IData)(vlSelf->__PVT__reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__wb_hazard_result;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_mem_alu_res;
        } else if ((((IData)(vlSelf->__PVT__reg1_raddr) 
                     == (IData)(vlSelf->__PVT__reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg2_raddr) 
                       == (IData)(vlSelf->__PVT__mem_reg_waddr)))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_mem_alu_res;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__wb_hazard_result;
        } else {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        }
    } else if ((2U == (IData)(vlSelf->__PVT__data_rest_cond))) {
        if (vlSelf->__PVT__mem_cunqu_hazard) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__mem_from_ex_alu_res;
            vlSelf->__PVT__reg2_rdata = 0ULL;
        } else if (((IData)(vlSelf->__PVT__reg1_raddr) 
                    == (IData)(vlSelf->__PVT__delay_reg_waddr))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__from_mem_alu_res;
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        } else if (((IData)(vlSelf->__PVT__reg2_raddr) 
                    == (IData)(vlSelf->__PVT__delay_reg_waddr))) {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__from_mem_alu_res;
        } else {
            vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg1_raddr];
            vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
                [vlSelf->__PVT__reg2_raddr];
        }
    } else if ((0U == (IData)(vlSelf->__PVT__data_rest_cond))) {
        vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
            [vlSelf->__PVT__reg1_raddr];
        vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
            [vlSelf->__PVT__reg2_raddr];
    } else {
        vlSelf->__PVT__reg1_rdata = vlSelf->__PVT__reg_f
            [vlSelf->__PVT__reg1_raddr];
        vlSelf->__PVT__reg2_rdata = vlSelf->__PVT__reg_f
            [vlSelf->__PVT__reg2_raddr];
    }
}

void Vysyx_22040175_top_mux_dt_pipe___ctor_var_reset(Vysyx_22040175_top_mux_dt_pipe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_dt_pipe___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rest_from_id = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_hazard_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mem_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rest_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->__PVT__delay_reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__expand_signed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__test = VL_RAND_RESET_I(3);
    vlSelf->__PVT__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__delay_data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->__PVT__delay_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__delay_data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__delay_control_rest = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay_reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__delay_reg2_rdata = VL_RAND_RESET_Q(64);
}
