// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_if_id_regs.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_if_id_regs___ctor_var_reset(Vysyx_22040175_top_if_id_regs* vlSelf);

Vysyx_22040175_top_if_id_regs::Vysyx_22040175_top_if_id_regs(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_if_id_regs___ctor_var_reset(this);
}

void Vysyx_22040175_top_if_id_regs::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_if_id_regs::~Vysyx_22040175_top_if_id_regs() {
}

void Vysyx_22040175_top_if_id_regs___ctor_var_reset(Vysyx_22040175_top_if_id_regs* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_id_regs___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_if_id_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__instr_if_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ena_if_id_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__time_set_if_id_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_if_id_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__instr_if_id_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ena_if_id_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__time_set_if_id_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc_if_id_o = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__instr_if_id_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ena_if_id_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__time_set_if_id_o = VL_RAND_RESET_I(1);
}
