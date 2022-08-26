// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_muxpc.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_muxpc___sequent__TOP__ysyx_22040175_top__u_id_stage__u_mux_pc__2(Vysyx_22040175_top_muxpc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_muxpc___sequent__TOP__ysyx_22040175_top__u_id_stage__u_mux_pc__2\n"); );
    // Body
    vlSelf->__Vdly__delay_sig_jalr = vlSelf->__PVT__delay_sig_jalr;
    vlSelf->__Vdly__delay_sig_jalr = ((IData)(vlSelf->__PVT__rst_n) 
                                      & (IData)(vlSelf->__PVT__sig_jalr));
    vlSelf->__PVT__delay_sig_jalr = vlSelf->__Vdly__delay_sig_jalr;
}

VL_INLINE_OPT void Vysyx_22040175_top_muxpc___combo__TOP__ysyx_22040175_top__u_id_stage__u_mux_pc__3(Vysyx_22040175_top_muxpc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_muxpc___combo__TOP__ysyx_22040175_top__u_id_stage__u_mux_pc__3\n"); );
    // Body
    vlSelf->__PVT__signed_alu_src1 = vlSelf->__PVT__alu_src1;
    vlSelf->__PVT__signed_alu_src2 = vlSelf->__PVT__alu_src2;
    vlSelf->__PVT__zero = ((0xcU == (IData)(vlSelf->__PVT__alu_op))
                            ? (0ULL != (vlSelf->__PVT__alu_src1 
                                        - vlSelf->__PVT__alu_src2))
                            : ((4U == (IData)(vlSelf->__PVT__alu_op))
                                ? (0ULL == (vlSelf->__PVT__alu_src1 
                                            - vlSelf->__PVT__alu_src2))
                                : ((0x11U == (IData)(vlSelf->__PVT__alu_op))
                                    ? VL_LTS_IQQ(1,64,64, vlSelf->__PVT__signed_alu_src1, vlSelf->__PVT__signed_alu_src2)
                                    : ((0xaU == (IData)(vlSelf->__PVT__alu_op))
                                        ? VL_GTES_IQQ(1,64,64, vlSelf->__PVT__signed_alu_src1, vlSelf->__PVT__signed_alu_src2)
                                        : ((0xbU == (IData)(vlSelf->__PVT__alu_op))
                                            ? (vlSelf->__PVT__alu_src1 
                                               >= vlSelf->__PVT__alu_src2)
                                            : ((0x12U 
                                                == (IData)(vlSelf->__PVT__alu_op)) 
                                               & (vlSelf->__PVT__alu_src1 
                                                  < vlSelf->__PVT__alu_src2)))))));
    vlSelf->__PVT__sig_jalr = 0U;
    vlSelf->__PVT__next_pc = vlSelf->__PVT__curr_pc;
    if (((IData)(vlSelf->__PVT__branch) & (~ (IData)(vlSelf->__PVT__zero)))) {
        vlSelf->__PVT__next_pc = (vlSelf->__PVT__curr_pc 
                                  + vlSelf->__PVT__imm);
        vlSelf->__PVT__sig_jalr = 0U;
    } else if (((IData)(vlSelf->__PVT__branch) & (IData)(vlSelf->__PVT__zero))) {
        vlSelf->__PVT__next_pc = (4ULL + vlSelf->__PVT__curr_pc);
        vlSelf->__PVT__sig_jalr = 0U;
    } else if (((IData)(vlSelf->__PVT__jump) & (~ (IData)(vlSelf->__PVT__jalr)))) {
        vlSelf->__PVT__next_pc = (vlSelf->__PVT__curr_pc 
                                  + vlSelf->__PVT__imm);
        vlSelf->__PVT__sig_jalr = 0U;
    } else if (((IData)(vlSelf->__PVT__jump) & (IData)(vlSelf->__PVT__jalr))) {
        if ((((((4U == (IData)(vlSelf->__PVT__data_rest_cond)) 
                | (5U == (IData)(vlSelf->__PVT__data_rest_cond))) 
               | (2U == (IData)(vlSelf->__PVT__data_rest_cond))) 
              | (6U == (IData)(vlSelf->__PVT__data_rest_cond))) 
             | (7U == (IData)(vlSelf->__PVT__data_rest_cond)))) {
            vlSelf->__PVT__sig_jalr = 1U;
        } else {
            vlSelf->__PVT__sig_jalr = 0U;
            vlSelf->__PVT__next_pc = (vlSelf->__PVT__reg_f
                                      [(0x1fU & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__s_imm, 0U, 5U))] 
                                      + vlSelf->__PVT__imm);
        }
    } else if (vlSelf->__PVT__delay_sig_jalr) {
        vlSelf->__PVT__next_pc = (vlSelf->__PVT__reg1_rdata 
                                  + vlSelf->__PVT__imm);
        vlSelf->__PVT__sig_jalr = 0U;
    } else if (vlSelf->__PVT__ebreak_flag) {
        vlSelf->__PVT__next_pc = 0x80000000ULL;
        vlSelf->__PVT__sig_jalr = 0U;
    } else if (vlSelf->__PVT__ecall_flag) {
        vlSelf->__PVT__next_pc = vlSelf->__PVT__mtvec;
        vlSelf->__PVT__sig_jalr = 0U;
    } else if (vlSelf->__PVT__mret_flag) {
        vlSelf->__PVT__next_pc = vlSelf->__PVT__mepc;
        vlSelf->__PVT__sig_jalr = 0U;
    } else {
        vlSelf->__PVT__next_pc = vlSelf->__PVT__curr_pc;
        vlSelf->__PVT__sig_jalr = 0U;
    }
}
