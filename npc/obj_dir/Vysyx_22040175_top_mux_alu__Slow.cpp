// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mux_alu.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_mux_alu___ctor_var_reset(Vysyx_22040175_top_mux_alu* vlSelf);

Vysyx_22040175_top_mux_alu::Vysyx_22040175_top_mux_alu(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_mux_alu___ctor_var_reset(this);
}

void Vysyx_22040175_top_mux_alu::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_mux_alu::~Vysyx_22040175_top_mux_alu() {
}

void Vysyx_22040175_top_mux_alu___settle__TOP__ysyx_22040175_top__u_id_stage__u_mux_alu__1(Vysyx_22040175_top_mux_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_alu___settle__TOP__ysyx_22040175_top__u_id_stage__u_mux_alu__1\n"); );
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

void Vysyx_22040175_top_mux_alu___ctor_var_reset(Vysyx_22040175_top_mux_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_mux_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__alu_src_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imm = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__curr_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mstatus = VL_RAND_RESET_Q(64);
}
