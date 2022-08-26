// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_id_rest.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_id_rest___ctor_var_reset(Vysyx_22040175_top_id_rest* vlSelf);

Vysyx_22040175_top_id_rest::Vysyx_22040175_top_id_rest(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_id_rest___ctor_var_reset(this);
}

void Vysyx_22040175_top_id_rest::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_id_rest::~Vysyx_22040175_top_id_rest() {
}

void Vysyx_22040175_top_id_rest___settle__TOP__ysyx_22040175_top__u_id_stage__u_id_rest__1(Vysyx_22040175_top_id_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_rest___settle__TOP__ysyx_22040175_top__u_id_stage__u_id_rest__1\n"); );
    // Body
    if (((((0ULL != vlSelf->__PVT__id_pc) & (0x80000000ULL 
                                             != vlSelf->__PVT__id_pc)) 
          & (0U != (IData)(vlSelf->__PVT__reg_waddr))) 
         & (~ (IData)(vlSelf->__PVT__delay_rest_id_mem)))) {
        if (((((1U == (IData)(vlSelf->__PVT__rd_buf_flag)) 
               | (2U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
              | (4U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
             | (6U == (IData)(vlSelf->__PVT__rd_buf_flag)))) {
            if (((((((IData)(vlSelf->__PVT__reg1_raddr) 
                     == (IData)(vlSelf->__PVT__wb_reg_waddr)) 
                    & ((IData)(vlSelf->__PVT__reg2_raddr) 
                       == (IData)(vlSelf->__PVT__reg_waddr))) 
                   | (((IData)(vlSelf->__PVT__reg1_raddr) 
                       == (IData)(vlSelf->__PVT__reg_waddr)) 
                      & ((IData)(vlSelf->__PVT__reg2_raddr) 
                         == (IData)(vlSelf->__PVT__wb_reg_waddr)))) 
                  & (0U != (IData)(vlSelf->__PVT__wb_reg_waddr))) 
                 & (0U == vlSelf->__PVT__s_imm))) {
                vlSelf->__PVT__rest_from_id = 1U;
                vlSelf->__PVT__rest_id_mem = 1U;
                vlSelf->__PVT__rest_wb_hazard = 1U;
                vlSelf->__PVT__cunqu_hazard = 0U;
            } else if (((((IData)(vlSelf->__PVT__reg1_raddr) 
                          == (IData)(vlSelf->__PVT__reg_waddr)) 
                         | ((IData)(vlSelf->__PVT__reg2_raddr) 
                            == (IData)(vlSelf->__PVT__reg_waddr))) 
                        & (~ (IData)(vlSelf->__PVT__ex_s_flag)))) {
                vlSelf->__PVT__rest_from_id = 1U;
                vlSelf->__PVT__rest_id_mem = 1U;
                vlSelf->__PVT__rest_wb_hazard = 0U;
                vlSelf->__PVT__cunqu_hazard = 0U;
            } else if ((((((IData)(vlSelf->__PVT__reg1_raddr) 
                           == (IData)(vlSelf->__PVT__wb_reg_waddr)) 
                          | ((IData)(vlSelf->__PVT__reg2_raddr) 
                             == (IData)(vlSelf->__PVT__wb_reg_waddr))) 
                         & (0U != (IData)(vlSelf->__PVT__wb_reg_waddr))) 
                        & (~ (IData)(vlSelf->__PVT__mem_s_flag)))) {
                vlSelf->__PVT__rest_from_id = 1U;
                vlSelf->__PVT__rest_id_mem = 0U;
                vlSelf->__PVT__rest_wb_hazard = 1U;
                vlSelf->__PVT__cunqu_hazard = 0U;
            } else {
                vlSelf->__PVT__rest_id_mem = 0U;
                vlSelf->__PVT__rest_from_id = 0U;
                vlSelf->__PVT__rest_wb_hazard = 0U;
                vlSelf->__PVT__cunqu_hazard = 0U;
            }
        } else if ((((((IData)(vlSelf->__PVT__reg1_raddr) 
                       == (IData)(vlSelf->__PVT__reg_waddr)) 
                      & ((IData)(vlSelf->__PVT__reg2_raddr) 
                         == (IData)(vlSelf->__PVT__wb_reg_waddr))) 
                     | (((IData)(vlSelf->__PVT__reg1_raddr) 
                         == (IData)(vlSelf->__PVT__wb_reg_waddr)) 
                        & ((IData)(vlSelf->__PVT__reg2_raddr) 
                           == (IData)(vlSelf->__PVT__reg_waddr)))) 
                    & (0U != (IData)(vlSelf->__PVT__wb_reg_waddr)))) {
            vlSelf->__PVT__rest_from_id = 1U;
            vlSelf->__PVT__rest_id_mem = 0U;
            vlSelf->__PVT__rest_wb_hazard = 1U;
            vlSelf->__PVT__cunqu_hazard = 0U;
        } else if (((((IData)(vlSelf->__PVT__reg1_raddr) 
                      == (IData)(vlSelf->__PVT__reg_waddr)) 
                     | ((IData)(vlSelf->__PVT__reg2_raddr) 
                        == (IData)(vlSelf->__PVT__reg_waddr))) 
                    & (~ (IData)(vlSelf->__PVT__ex_s_flag)))) {
            vlSelf->__PVT__rest_from_id = 1U;
            vlSelf->__PVT__rest_id_mem = 0U;
            vlSelf->__PVT__rest_wb_hazard = 0U;
            vlSelf->__PVT__cunqu_hazard = 0U;
        } else if ((((((IData)(vlSelf->__PVT__reg1_raddr) 
                       == (IData)(vlSelf->__PVT__wb_reg_waddr)) 
                      | ((IData)(vlSelf->__PVT__reg2_raddr) 
                         == (IData)(vlSelf->__PVT__wb_reg_waddr))) 
                     & (0U != (IData)(vlSelf->__PVT__wb_reg_waddr))) 
                    & (~ (IData)(vlSelf->__PVT__mem_s_flag)))) {
            vlSelf->__PVT__rest_from_id = 1U;
            vlSelf->__PVT__rest_id_mem = 0U;
            vlSelf->__PVT__rest_wb_hazard = 1U;
            vlSelf->__PVT__cunqu_hazard = 0U;
        } else if (((((VL_EXTEND_QI(64,5, (IData)(vlSelf->__PVT__reg1_raddr)) 
                       + vlSelf->__PVT__imm) == (VL_EXTEND_QI(64,5, (IData)(vlSelf->__PVT__reg_waddr)) 
                                                 + 
                                                 VL_EXTEND_QI(64,32, vlSelf->__PVT__ex_s_imm))) 
                     & (IData)(vlSelf->__PVT__ex_s_flag)) 
                    & (0U != (IData)(vlSelf->__PVT__curr_rd_buf_flag)))) {
            vlSelf->__PVT__rest_from_id = 1U;
            vlSelf->__PVT__rest_id_mem = 0U;
            vlSelf->__PVT__rest_wb_hazard = 0U;
            vlSelf->__PVT__cunqu_hazard = 1U;
        } else {
            vlSelf->__PVT__rest_from_id = 0U;
            vlSelf->__PVT__rest_id_mem = 0U;
            vlSelf->__PVT__rest_wb_hazard = 0U;
            vlSelf->__PVT__cunqu_hazard = 0U;
        }
    } else {
        vlSelf->__PVT__rest_from_id = 0U;
        vlSelf->__PVT__rest_id_mem = 0U;
        vlSelf->__PVT__rest_wb_hazard = 0U;
        vlSelf->__PVT__cunqu_hazard = 0U;
    }
}

void Vysyx_22040175_top_id_rest___ctor_var_reset(Vysyx_22040175_top_id_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_rest___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rest_from_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rest_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__curr_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay_rest_id_mem = VL_RAND_RESET_I(1);
}
