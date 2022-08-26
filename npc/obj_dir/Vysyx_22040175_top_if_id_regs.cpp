// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_if_id_regs.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_if_id_regs___sequent__TOP__ysyx_22040175_top__u_if_id_regs__1(Vysyx_22040175_top_if_id_regs* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_if_id_regs___sequent__TOP__ysyx_22040175_top__u_if_id_regs__1\n"); );
    // Body
    vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_o;
    vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_o;
    vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__pc_if_id_o;
    vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_o;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__id_mul) {
            if (vlSelf->__PVT__sh_fnsh_flag) {
                vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__pc_if_id_i;
                vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_i;
                vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_i;
                vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_i;
            } else {
                vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__id_pc;
                vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_o;
                vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_o;
                vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_o;
            }
        } else if (vlSelf->__PVT__id_div) {
            if (vlSelf->__PVT__div_finish) {
                vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__pc_if_id_i;
                vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_i;
                vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_i;
                vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_i;
            } else {
                vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__id_pc;
                vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_o;
                vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_o;
                vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_o;
            }
        } else if (vlSelf->__PVT__rest_id_mem) {
            vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__id_pc;
            vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_o;
            vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_o;
            vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_o;
        } else if (((IData)(vlSelf->__PVT__control_rest) 
                    | (IData)(vlSelf->__PVT__delay_sig_jalr))) {
            vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__id_pc;
            vlSelf->__Vdly__instr_if_id_o = 0x13U;
            vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_o;
            vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_o;
        } else {
            vlSelf->__Vdly__pc_if_id_o = vlSelf->__PVT__pc_if_id_i;
            vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_i;
            vlSelf->__Vdly__ena_if_id_o = vlSelf->__PVT__ena_if_id_i;
            vlSelf->__Vdly__time_set_if_id_o = vlSelf->__PVT__time_set_if_id_i;
        }
    } else {
        vlSelf->__Vdly__pc_if_id_o = 0x80000000ULL;
        vlSelf->__Vdly__instr_if_id_o = vlSelf->__PVT__instr_if_id_i;
        vlSelf->__Vdly__ena_if_id_o = 0U;
        vlSelf->__Vdly__time_set_if_id_o = 0U;
    }
    vlSelf->__PVT__ena_if_id_o = vlSelf->__Vdly__ena_if_id_o;
    vlSelf->__PVT__time_set_if_id_o = vlSelf->__Vdly__time_set_if_id_o;
    vlSelf->__PVT__pc_if_id_o = vlSelf->__Vdly__pc_if_id_o;
    vlSelf->__PVT__instr_if_id_o = vlSelf->__Vdly__instr_if_id_o;
}
