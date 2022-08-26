// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_ex_mem_regs.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_ex_mem_regs___ctor_var_reset(Vysyx_22040175_top_ex_mem_regs* vlSelf);

Vysyx_22040175_top_ex_mem_regs::Vysyx_22040175_top_ex_mem_regs(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_ex_mem_regs___ctor_var_reset(this);
}

void Vysyx_22040175_top_ex_mem_regs::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_ex_mem_regs::~Vysyx_22040175_top_ex_mem_regs() {
}

void Vysyx_22040175_top_ex_mem_regs___ctor_var_reset(Vysyx_22040175_top_ex_mem_regs* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_mem_regs___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_wen_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_waddr_ex_mem_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__from_ex_alu_res_ex_mem_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__wmask_ex_mem_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_flag_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__time_set_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_imm_ex_mem_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__expand_signed_ex_mem_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ebreak_flag_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_buf_flag_ex_mem_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_op_ex_mem_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_src1_ex_mem_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2_ex_mem_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg_wen_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_waddr_ex_mem_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ebreak_flag_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wmask_ex_mem_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_flag_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__time_set_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_imm_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__expand_signed_ex_mem_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rd_buf_flag_ex_mem_o = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_op_ex_mem_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_src1_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__from_ex_alu_res_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_ex_mem_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rest_id_mem_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rest_id_mem_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cunqu_hazard_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cunqu_hazard_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_mul_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sh_fnsh_flag_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_div_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish_ex_mem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_addr_ex_mem_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_addr_ex_mem_o = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__reg_wen_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reg_waddr_ex_mem_o = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__wmask_ex_mem_o = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__s_flag_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__time_set_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__s_imm_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__expand_signed_ex_mem_o = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__ebreak_flag_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rd_buf_flag_ex_mem_o = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__alu_op_ex_mem_o = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__alu_src1_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__alu_src2_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__from_ex_alu_res_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__pc_ex_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__cunqu_hazard_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rest_id_mem_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_addr_ex_mem_o = VL_RAND_RESET_I(12);
}
