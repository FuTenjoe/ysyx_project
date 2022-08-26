// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mux_alu.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_mux_alu___combo__TOP__ysyx_22040175_top__u_id_stage__u_mux_alu__2(Vysyx_22040175_top_mux_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_alu___combo__TOP__ysyx_22040175_top__u_id_stage__u_mux_alu__2\n"); );
    // Body
    vlSelf->__PVT__alu_src1 = vlSelf->__PVT__reg1_rdata;
    vlSelf->__PVT__alu_src2 = vlSelf->__PVT__reg2_rdata;
    if (vlSelf->__PVT__cunqu_hazard) {
        vlSelf->__PVT__alu_src1 = vlSelf->__PVT__reg1_rdata;
        vlSelf->__PVT__alu_src2 = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__alu_src_sel))) {
        vlSelf->__PVT__alu_src2 = vlSelf->__PVT__reg2_rdata;
    } else if ((1U == (IData)(vlSelf->__PVT__alu_src_sel))) {
        vlSelf->__PVT__alu_src2 = vlSelf->__PVT__imm;
    } else if ((2U == (IData)(vlSelf->__PVT__alu_src_sel))) {
        vlSelf->__PVT__alu_src1 = 4ULL;
        vlSelf->__PVT__alu_src2 = vlSelf->__PVT__curr_pc;
    } else if ((3U == (IData)(vlSelf->__PVT__alu_src_sel))) {
        vlSelf->__PVT__alu_src1 = vlSelf->__PVT__imm;
        vlSelf->__PVT__alu_src2 = vlSelf->__PVT__curr_pc;
    } else if ((4U == (IData)(vlSelf->__PVT__alu_src_sel))) {
        if ((0x341U == (IData)(vlSelf->__PVT__csr_addr))) {
            vlSelf->__PVT__alu_src1 = vlSelf->__PVT__reg1_rdata;
            vlSelf->__PVT__alu_src2 = vlSelf->__PVT__mepc;
        } else if ((0x342U == (IData)(vlSelf->__PVT__csr_addr))) {
            vlSelf->__PVT__alu_src1 = vlSelf->__PVT__reg1_rdata;
            vlSelf->__PVT__alu_src2 = vlSelf->__PVT__mcause;
        } else if ((0x305U == (IData)(vlSelf->__PVT__csr_addr))) {
            vlSelf->__PVT__alu_src1 = vlSelf->__PVT__reg1_rdata;
            vlSelf->__PVT__alu_src2 = vlSelf->__PVT__mtvec;
        } else if ((0x300U == (IData)(vlSelf->__PVT__csr_addr))) {
            vlSelf->__PVT__alu_src1 = vlSelf->__PVT__reg1_rdata;
            vlSelf->__PVT__alu_src2 = vlSelf->__PVT__mstatus;
        }
    } else if ((4U == (IData)(vlSelf->__PVT__alu_src_sel))) {
        vlSelf->__PVT__alu_src1 = vlSelf->__PVT__curr_pc;
        vlSelf->__PVT__alu_src2 = vlSelf->__PVT__curr_pc;
    }
}
