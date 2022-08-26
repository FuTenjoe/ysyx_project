// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mux_dt_pipe.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_mux_dt_pipe___sequent__TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe__2(Vysyx_22040175_top_mux_dt_pipe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_dt_pipe___sequent__TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe__2\n"); );
    // Body
    vlSelf->__Vdly__delay_reg2_rdata = vlSelf->__PVT__delay_reg2_rdata;
    vlSelf->__Vdly__delay_control_rest = vlSelf->__PVT__delay_control_rest;
    vlSelf->__Vdly__delay_reg1_rdata = vlSelf->__PVT__delay_reg1_rdata;
    vlSelf->__Vdly__delay_reg_waddr = vlSelf->__PVT__delay_reg_waddr;
    vlSelf->__Vdly__delay_rest_id_mem = vlSelf->__PVT__delay_rest_id_mem;
    vlSelf->__Vdly__delay_data_rest_cond = vlSelf->__PVT__delay_data_rest_cond;
    if (vlSelf->__PVT__rst_n) {
        vlSelf->__Vdly__delay_data_rest_cond = vlSelf->__PVT__data_rest_cond;
        vlSelf->__Vdly__delay_rest_id_mem = vlSelf->__PVT__rest_id_mem;
        vlSelf->__Vdly__delay_reg_waddr = vlSelf->__PVT__reg_waddr;
        vlSelf->__Vdly__delay_control_rest = vlSelf->__PVT__control_rest;
        vlSelf->__Vdly__delay_reg1_rdata = vlSelf->__PVT__reg1_rdata;
        vlSelf->__Vdly__delay_reg2_rdata = vlSelf->__PVT__reg2_rdata;
    } else {
        vlSelf->__Vdly__delay_data_rest_cond = 0U;
        vlSelf->__Vdly__delay_rest_id_mem = 0U;
        vlSelf->__Vdly__delay_reg_waddr = 0U;
        vlSelf->__Vdly__delay_control_rest = 0U;
        vlSelf->__Vdly__delay_reg1_rdata = 0ULL;
        vlSelf->__Vdly__delay_reg2_rdata = 0ULL;
    }
    vlSelf->__PVT__delay_control_rest = vlSelf->__Vdly__delay_control_rest;
    vlSelf->__PVT__delay_reg2_rdata = vlSelf->__Vdly__delay_reg2_rdata;
    vlSelf->__PVT__delay_reg1_rdata = vlSelf->__Vdly__delay_reg1_rdata;
    vlSelf->__PVT__delay_data_rest_cond = vlSelf->__Vdly__delay_data_rest_cond;
    vlSelf->__PVT__delay_rest_id_mem = vlSelf->__Vdly__delay_rest_id_mem;
    vlSelf->__PVT__delay_reg_waddr = vlSelf->__Vdly__delay_reg_waddr;
}

VL_INLINE_OPT void Vysyx_22040175_top_mux_dt_pipe___combo__TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe__3(Vysyx_22040175_top_mux_dt_pipe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_dt_pipe___combo__TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe__3\n"); );
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
