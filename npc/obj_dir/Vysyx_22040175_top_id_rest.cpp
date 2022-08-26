// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_id_rest.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_id_rest___sequent__TOP__ysyx_22040175_top__u_id_stage__u_id_rest__2(Vysyx_22040175_top_id_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_rest___sequent__TOP__ysyx_22040175_top__u_id_stage__u_id_rest__2\n"); );
    // Body
    vlSelf->__Vdly__delay_rest_id_mem = vlSelf->__PVT__delay_rest_id_mem;
    vlSelf->__Vdly__delay_rest_id_mem = ((IData)(vlSelf->__PVT__rst_n) 
                                         & (IData)(vlSelf->__PVT__rest_id_mem));
    vlSelf->__PVT__delay_rest_id_mem = vlSelf->__Vdly__delay_rest_id_mem;
}

VL_INLINE_OPT void Vysyx_22040175_top_id_rest___combo__TOP__ysyx_22040175_top__u_id_stage__u_id_rest__3(Vysyx_22040175_top_id_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_rest___combo__TOP__ysyx_22040175_top__u_id_stage__u_id_rest__3\n"); );
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
