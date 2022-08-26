// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_muxpc.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_muxpc___ctor_var_reset(Vysyx_22040175_top_muxpc* vlSelf);

Vysyx_22040175_top_muxpc::Vysyx_22040175_top_muxpc(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_muxpc___ctor_var_reset(this);
}

void Vysyx_22040175_top_muxpc::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_muxpc::~Vysyx_22040175_top_muxpc() {
}

void Vysyx_22040175_top_muxpc___settle__TOP__ysyx_22040175_top__u_id_stage__u_mux_pc__1(Vysyx_22040175_top_muxpc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_muxpc___settle__TOP__ysyx_22040175_top__u_id_stage__u_mux_pc__1\n"); );
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

void Vysyx_22040175_top_muxpc___ctor_var_reset(Vysyx_22040175_top_muxpc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_muxpc___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__curr_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ebreak_flag = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->__PVT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mret_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ecall_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnormal_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__delay_sig_jalr = VL_RAND_RESET_I(1);
}
