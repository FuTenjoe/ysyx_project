// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

void Vysyx_22040175_top___024root___settle__TOP__6(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___settle__TOP__6\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp676;
    VlWide<5>/*159:0*/ __Vtemp677;
    VlWide<5>/*159:0*/ __Vtemp679;
    VlWide<5>/*159:0*/ __Vtemp680;
    VlWide<5>/*159:0*/ __Vtemp683;
    // Body
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__res_sign))
                ? ((IData)(1U) + (~ vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                                  [0U])) : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
               [0U]);
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__res_sign))
                ? (1ULL + (~ vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                           [0U])) : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
               [0U]);
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res 
            = ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__res_sign))
                ? ((IData)(1U) + (~ vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__merchant_t
                                  [0U])) : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__merchant_t
               [0U]);
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64 
            = ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__res_sign))
                ? (1ULL + (~ vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__merchant_t
                           [0U])) : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__merchant_t
               [0U]);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_id_mem 
        = ((((0ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc) 
             & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)) 
                 | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
               | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
              & (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                    | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) 
                   & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                  & (0U == vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)) 
                 | ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__cond2 
        = (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
              == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
             | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
            & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
           & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_s_flag)));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__next_state 
        = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
            ? ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                ? 0U : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                         ? 0U : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint)
                                  ? 3U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__axi_ar_id_o)))
                                                     ? 3U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                    ? 2U
                                                    : 
                                                   ((((((1U 
                                                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)) 
                                                        | (2U 
                                                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                       | (4U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                      | (6U 
                                                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                     & ((0x2004000ULL 
                                                         != 
                                                         (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                          + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)) 
                                                        & (0x200bff8ULL 
                                                           != 
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                            + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))))
                                                     ? 1U
                                                     : 
                                                    (((0x2004000ULL 
                                                       == 
                                                       (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                        + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)) 
                                                      | (0x200bff8ULL 
                                                         == 
                                                         (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                          + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)))
                                                      ? 4U
                                                      : 0U)))));
    if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                & (0x2004000ULL != (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                                    + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm)))))
                ? 1U : (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                          & (0x2004000ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
                                              [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                                              + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm))))) 
                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag))
                         ? 4U : 0U));
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__wr_finish)
                ? 3U : 4U);
    } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__w_done)
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__b_hs)
                ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1fU];
    VL_EXTEND_WI(130,32, __Vtemp676, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res);
    VL_EXTEND_WI(130,32, __Vtemp677, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_div_res32);
    VL_EXTEND_WQ(130,64, __Vtemp679, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64);
    VL_EXTEND_WQ(130,64, __Vtemp680, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_div_res64);
    VL_EXTEND_WQ(130,64, __Vtemp683, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
        = (((QData)((IData)(((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid)
                              ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2)
                                  ? __Vtemp676[1U] : 
                                 __Vtemp677[1U]) : 
                             ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid)
                               ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2)
                                   ? __Vtemp679[1U]
                                   : __Vtemp680[1U])
                               : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid)
                                   ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag)
                                       ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[1U]
                                       : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res[1U])
                                   : __Vtemp683[1U]))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid)
                                          ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2)
                                              ? __Vtemp676[0U]
                                              : __Vtemp677[0U])
                                          : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid)
                                              ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2)
                                                  ? 
                                                 __Vtemp679[0U]
                                                  : 
                                                 __Vtemp680[0U])
                                              : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag)
                                                   ? 
                                                  vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[0U]
                                                   : 
                                                  vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res[0U])
                                                  : 
                                                 __Vtemp683[0U]))))));
    if ((((0ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc) 
          & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem)))) {
        if ((1U & (~ ((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)) 
                        | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                       | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                      | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)))))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__test 
                = ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                     | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) 
                    & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))
                    ? 1U : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                               | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                              & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag))) 
                             & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))
                             ? 3U : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__cond2)
                                      ? 2U : ((((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr)) 
                                                  + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm) 
                                                 == 
                                                 ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                                                  + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_imm)))) 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag)) 
                                               & (0U 
                                                  != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag)))
                                               ? 1U
                                               : 0U))));
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_wb_hazard 
        = ((((0ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc) 
             & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)) 
                 | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
               | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)))
               ? (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                     | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) 
                    & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                   & (0U == vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)) 
                  | ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag)))) 
                     & ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                           | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                              == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                         & (0U == vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_s_flag)))))
               : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                    | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) 
                   & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                  | ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                           | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                              == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                          & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag))) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) 
                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__cond2)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_from_id 
        = ((((0ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc) 
             & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)) 
                 | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
               | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)))
               ? (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                     | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) 
                    & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                   & (0U == vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)) 
                  | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                       | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                      & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag))) 
                     | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                           | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                              == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                         & (0U == vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_s_flag)))))
               : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                    | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) 
                   & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                  | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                        | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                       & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag))) 
                      & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__cond2) 
                        | (((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr)) 
                              + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm) 
                             == ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                                 + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_imm)))) 
                            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag)) 
                           & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard 
        = ((((0ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc) 
             & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & ((~ ((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)) 
                    | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                   | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag))) 
                  | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag)))) 
              & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr))) 
                      | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                         & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) 
                     & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) 
                 & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) 
                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag))) 
                        & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) 
                    & ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__cond2)) 
                       & (((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr)) 
                             + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm) 
                            == ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_imm)))) 
                           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag)) 
                          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))
                        : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
}

extern const VlWide<10>/*319:0*/ Vysyx_22040175_top__ConstPool__CONST_726d283c_0;
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040175_top___024root___initial__TOP__7(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___initial__TOP__7\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x80U, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][0U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[0U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][1U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[1U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][2U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[2U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][3U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[3U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][4U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[4U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][5U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[5U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][6U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[6U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][7U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[7U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][8U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[8U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[(0x7fU 
                                                                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i)][9U] 
            = Vysyx_22040175_top__ConstPool__CONST_726d283c_0[9U];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i 
            = ((IData)(1U) + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__mtime = 0ULL;
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__wb_delay_reg_f);
}

extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040175_top__ConstPool__TABLE_815565d4_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0;

void Vysyx_22040175_top___024root___settle__TOP__10(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___settle__TOP__10\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx5;
    SData/*10:0*/ __Vtableidx6;
    VlWide<10>/*319:0*/ __Vtemp698;
    VlWide<10>/*319:0*/ __Vtemp699;
    VlWide<10>/*319:0*/ __Vtemp700;
    VlWide<10>/*319:0*/ __Vtemp701;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
            ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                    >> 4U)) << 1U))][9U] 
                >> 0x16U) & ((0x3fffffffffffffULL & 
                              (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                [(0x7eU 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 4U)) 
                                                     << 1U))][9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                            [
                                                            (0x7eU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))][8U])))) 
                             == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                 >> 0xaU))) : ((3U 
                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                               & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                   [
                                                   (0x7eU 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                >> 4U)) 
                                                       << 1U))][9U] 
                                                   >> 0x16U) 
                                                  & ((0x3fffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                          [
                                                                          (0x7eU 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                              << 1U))][9U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                           [
                                                                           (0x7eU 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                               << 1U))][8U])))) 
                                                     == 
                                                     (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                      >> 0xaU)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint)
            ? ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                ? ((0x2004000ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                     + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))
                    ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mtimecmp
                    : ((0x200bff8ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                         + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))
                        ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__mtime
                        : 0ULL)) : 0ULL) : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done)
                                             ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rdata
                                             : 0ULL));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1) 
              | ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
                  ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                       >> 0xaU))) : 
                 ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                  & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                       >> 0xaU)))))));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw));
                            } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw;
                            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw))));
                            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw))));
                            }
                        }
                    }
                }
            }
        }
    }
    if (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__way 
            = (1U & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                          >> 4U)) << 1U))][9U] 
                      >> 0x16U) & (~ (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                      [(0x7fU & ((IData)(1U) 
                                                 + 
                                                 (0xfeU 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 4U)) 
                                                     << 1U))))][9U] 
                                      >> 0x16U))));
    }
    __Vtableidx5 = (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__count)) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__if_valid) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0
        [__Vtableidx5];
    __Vtemp698[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][0U];
    __Vtemp698[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][1U];
    __Vtemp698[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][2U];
    __Vtemp698[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][3U];
    __Vtemp698[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][4U];
    __Vtemp698[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][5U];
    __Vtemp698[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][6U];
    __Vtemp698[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][7U];
    __Vtemp698[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][8U];
    __Vtemp698[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][9U];
    __Vtemp699[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp699[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp699[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp699[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp699[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp699[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp699[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp699[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp699[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp699[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    __Vtemp700[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][0U];
    __Vtemp700[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][1U];
    __Vtemp700[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][2U];
    __Vtemp700[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][3U];
    __Vtemp700[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][4U];
    __Vtemp700[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][5U];
    __Vtemp700[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][6U];
    __Vtemp700[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][7U];
    __Vtemp700[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][8U];
    __Vtemp700[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][9U];
    __Vtemp701[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp701[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp701[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp701[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp701[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp701[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp701[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp701[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp701[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp701[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
            ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                ? ((0x136U >= (0xc0U & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                 >> 2U)) 
                                        << 6U))) ? 
                   (((QData)((IData)(__Vtemp698[(((IData)(0x3fU) 
                                                  + 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                               >> 2U)) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                     << 0x20U) | (QData)((IData)(__Vtemp698[
                                                 (6U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 2U)) 
                                                     << 1U))])))
                    : 0ULL) : ((0x136U >= (0xc0U & 
                                           ((IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                     >> 2U)) 
                                            << 6U)))
                                ? (((QData)((IData)(
                                                    __Vtemp699[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                   >> 2U)) 
                                                          << 6U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp699[
                                                                (6U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                             >> 2U)) 
                                                                    << 1U))])))
                                : 0ULL)) : (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
                                             ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                                                 ? 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp700[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp700[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL)
                                                 : 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp701[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp701[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL))
                                             : 0ULL));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))
                        : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res))));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_div) 
                     << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_mul) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__div_finish) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0
        [__Vtableidx3];
    __Vtableidx6 = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                     << 0xaU) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_valid) 
                                  << 9U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyx_22040175_top__DOT__send_axi_ar_id) 
                                                << 4U) 
                                               | (((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_815565d4_0
        [__Vtableidx6];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__delay_control_rest)))
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction)
            : 0x13U);
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                     << 7U) | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                                << 6U) | ((0x20U & 
                                           ((~ ((1U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)) 
                                                | (2U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)))) 
                                            << 5U)) 
                                          | (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                                              << 4U) 
                                             | ((((((1U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                  | (6U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                 << 3U) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0
        [__Vtableidx1];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
            | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res);
    vlSelf->inst = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_from_id) 
            << 2U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem) 
                       << 1U) | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_wb_hazard)));
    if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
                if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                               == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res)))));
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res));
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res)));
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            }
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
    } else if ((0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((1U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
            if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 = 4ULL;
            } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                }
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                }
            } else if ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 = 0ULL;
    } else if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata;
    } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
    } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc;
        } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause;
        } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec;
        } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus;
        } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie;
        }
    } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc;
        } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause;
        } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec;
        } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus;
        } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie;
        }
    } else if ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero 
        = ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
            ? (IData)(((0U == (0xcU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                       & ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                           ? ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op)) 
                              & (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                 < vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))
                           : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op) 
                              & VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2)))))
            : ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                ? ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                    ? (IData)(((0U == (3U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                               & (0ULL != (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                           - vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))))
                    : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op) 
                        >> 1U) & ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                                   ? (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                      >= vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2)
                                   : VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2))))
                : (IData)(((4U == (7U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                           & (0ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                       - vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sig_jalr 
        = ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
               & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) 
           & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
                  & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) 
              & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                     & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)))) 
                 & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)) 
                    & (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)) 
                          | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                         | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (4ULL + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr))) {
        if ((1U & (~ (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)) 
                         | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                      | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)))))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
                = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f
                   [(0x1fU & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)] 
                   + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_sig_jalr)
                ? (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__delay_reg1_rdata 
                   + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm)
                : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_ebreak_flag)
                    ? 0x80000000ULL : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ecall_flag)
                                        ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec
                                        : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mret_flag)
                                            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc
                                            : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)
                                                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec
                                                : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)))));
    }
    vlSelf->out_mem_rd_buf_flag = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sig_jalr;
}

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    Vysyx_22040175_top___024root___initial__TOP__7(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22040175_top___024root___settle__TOP__5(Vysyx_22040175_top___024root* vlSelf) VL_ATTR_COLD;

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vysyx_22040175_top___024root___settle__TOP__6(vlSelf);
    Vysyx_22040175_top___024root___settle__TOP__10(vlSelf);
}

void Vysyx_22040175_top___024root___final(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___final\n"); );
}

void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->time_set = VL_RAND_RESET_I(1);
    vlSelf->diff_pc = VL_RAND_RESET_I(32);
    vlSelf->diff_delay_pc = VL_RAND_RESET_I(32);
    vlSelf->out_mem_rd_buf_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__axi_r_resp_i2 = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__axi_r_data_i2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__axi_r_last_i2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__r_done2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__send_axi_ar_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__axi_r_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__axi_ar_len_o = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__axi_ar_size_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__axi_ar_burst_o = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT____Vcellout__u_axi2__data_read_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_axi_slave2__r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_write_wmask = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__axi_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__waxi_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_write_data = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_write_addr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__div_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__axi_ar_id_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_sig_jalr = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__to_id_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_from_id = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mret_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ecall_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_alu_src_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rest_no_use = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_id_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_id_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_id_ex_regs__ex_inst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__write_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__fr_ex_no_use = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_send_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_no_use = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_end_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_cunqu_hazard = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_delay_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__reg_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__reg_write_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__reg_write_wmask = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__if_send_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__delay_control_rest = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_r_done2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_r_ready_o2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__d_r_ready_o2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_ar_id_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__present_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_add_pc = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_present_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_control_rest = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(311, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data[__Vi0]);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__way = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__dd_r_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__unnormal_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__delay_reg1_rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_ctrl__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_ctrl__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_ctrl__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__test = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_id_rest__DOT__cond2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_div_res64 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__delay_div_res32 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x);
    VL_RAND_RESET_W(66, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x);
    VL_RAND_RESET_W(66, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_y);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay1_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y);
    VL_RAND_RESET_W(130, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__div_sign = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__divisor_t[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__rdy_t = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__merchant_t[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__sign_dividend = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__sign_divisor = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__res_sign = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__delay1_div_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__delay2_div_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__delay_div_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__en2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__u_divider_step0__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__div_sign = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t[__Vi0] = VL_RAND_RESET_Q(63);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__divisor_t[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__rdy_t = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__merchant_t[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__sign_dividend = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__sign_divisor = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__res_sign = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__delay1_div_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__delay2_div_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__delay_div_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__en2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__u_divider_step0__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__u_divider_step0__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__u_divider_step0__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__u_divider_step0__divisor_kp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__u_divider_step0__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__remainder = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__merchant = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__rdy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__dividend_kp = VL_RAND_RESET_Q(63);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellout__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__divisor_kp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__dividend);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__delay_o_core_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__test = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__test2 = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_wb_regs__DOT__delay_mem_no_use = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_wb_regs__DOT__wm_valid = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__wb_delay_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__delay_wbmmio_waddr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__delay_wb_mmio_wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__wr_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_axi2__DOT__axi_ar_cache_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_axi2__DOT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_axi2__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_axi2__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__axi_ar_id_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__if_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__id_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm = VL_RAND_RESET_I(32);
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
