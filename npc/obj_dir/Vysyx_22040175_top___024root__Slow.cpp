// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf);

Vysyx_22040175_top___024root::Vysyx_22040175_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top___024root___ctor_var_reset(this);
}

void Vysyx_22040175_top___024root::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top___024root::~Vysyx_22040175_top___024root() {
}

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP();

void Vysyx_22040175_top___024root___settle__TOP__2(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___settle__TOP__2\n"); );
    // Body
    if ((0x100073U == vlSelf->inst)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP();
    }
    vlSelf->unknown_code = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        if ((0U != (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->unknown_code = vlSelf->inst;
        }
    } else if ((0x13U == (0x7fU & vlSelf->inst))) {
        if ((0U != (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->unknown_code = vlSelf->inst;
        }
    } else if ((0x63U == (0x7fU & vlSelf->inst))) {
        if ((1U != (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->unknown_code = vlSelf->inst;
        }
    } else if ((0x6fU != (0x7fU & vlSelf->inst))) {
        if ((0x37U != (0x7fU & vlSelf->inst))) {
            if ((0x17U != (0x7fU & vlSelf->inst))) {
                vlSelf->unknown_code = vlSelf->inst;
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
    if ((0x33U != (0x7fU & vlSelf->inst))) {
        if ((0x13U != (0x7fU & vlSelf->inst))) {
            if ((0x63U != (0x7fU & vlSelf->inst))) {
                if ((0x6fU == (0x7fU & vlSelf->inst))) {
                    vlSelf->ysyx_22040175_top__DOT__jump = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__branch = 0U;
    if ((0x33U != (0x7fU & vlSelf->inst))) {
        if ((0x13U != (0x7fU & vlSelf->inst))) {
            if ((0x63U == (0x7fU & vlSelf->inst))) {
                if ((1U == (7U & (vlSelf->inst >> 0xcU)))) {
                    vlSelf->ysyx_22040175_top__DOT__branch = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
    if ((0x33U != (0x7fU & vlSelf->inst))) {
        if ((0x13U != (0x7fU & vlSelf->inst))) {
            if ((0x63U != (0x7fU & vlSelf->inst))) {
                if ((0x6fU == (0x7fU & vlSelf->inst))) {
                    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_op = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        if ((0U == (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->ysyx_22040175_top__DOT__alu_op 
                = ((0U == (vlSelf->inst >> 0x19U)) ? 3U
                    : 4U);
        }
    } else if ((0x13U == (0x7fU & vlSelf->inst))) {
        if ((0U == (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
        }
    } else if ((0x63U == (0x7fU & vlSelf->inst))) {
        if ((1U == (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->ysyx_22040175_top__DOT__alu_op = 4U;
        }
    } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
    } else if ((0x37U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
    } else if ((0x17U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
    }
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
            = (0x1fU & (vlSelf->inst >> 0xfU));
    } else if ((0x13U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
            = (0x1fU & (vlSelf->inst >> 0xfU));
    } else if ((0x63U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
            = (0x1fU & (vlSelf->inst >> 0xfU));
    } else if ((0x6fU != (0x7fU & vlSelf->inst))) {
        if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
    } else if ((0x63U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 2U;
    } else if ((0x37U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
    } else if ((0x17U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 3U;
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
            = (0x1fU & (vlSelf->inst >> 0x14U));
    } else if ((0x13U != (0x7fU & vlSelf->inst))) {
        if ((0x63U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                = (0x1fU & (vlSelf->inst >> 0x14U));
        }
    }
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
    if ((0x33U != (0x7fU & vlSelf->inst))) {
        if ((0x13U != (0x7fU & vlSelf->inst))) {
            if ((0x63U == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 2U;
            } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 3U;
            } else if ((0x37U == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
            } else if ((0x17U == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg_waddr = 
            (0x1fU & (vlSelf->inst >> 7U));
    } else if ((0x13U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg_waddr = 
            (0x1fU & (vlSelf->inst >> 7U));
    } else if ((0x63U != (0x7fU & vlSelf->inst))) {
        if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                = (0x1fU & (vlSelf->inst >> 7U));
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                = (0x1fU & (vlSelf->inst >> 7U));
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                = (0x1fU & (vlSelf->inst >> 7U));
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg_wen = 0U;
    if ((0x33U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
    } else if ((0x13U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
    } else if ((0x63U != (0x7fU & vlSelf->inst))) {
        if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = ((0U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__reg2_raddr))
                                                   ? 0U
                                                   : (IData)(
                                                             vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                             [vlSelf->ysyx_22040175_top__DOT__reg2_raddr]));
    vlSelf->ysyx_22040175_top__DOT__imm = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 7U) 
                                                   | (0x7fU 
                                                      & vlSelf->inst))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 7U) 
                                                    | (0x7fU 
                                                       & vlSelf->inst))
                                                    : 
                                                   (0xfffff000U 
                                                    & vlSelf->inst)))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->inst) 
                                                       | ((0x800U 
                                                           & (vlSelf->inst 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->inst 
                                                                >> 0x14U)))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->inst 
                                                                >> 7U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->inst 
                                                       >> 0x14U)))));
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = ((0U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                                 ? 0U
                                                 : (IData)(
                                                           vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                           [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]));
    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src1 = 
            ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
              ? vlSelf->ysyx_22040175_top__DOT__imm
              : 4U);
    }
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                 ? vlSelf->pc
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                  ? vlSelf->ysyx_22040175_top__DOT__imm
                                                  : vlSelf->ysyx_22040175_top__DOT__reg2_rdata));
    vlSelf->ysyx_22040175_top__DOT__zero = 0U;
    vlSelf->ysyx_22040175_top__DOT__alu_res = 0U;
    if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   + vlSelf->ysyx_22040175_top__DOT__alu_src2);
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
        vlSelf->ysyx_22040175_top__DOT__zero = (0U 
                                                == vlSelf->ysyx_22040175_top__DOT__alu_res);
    } else {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
        vlSelf->ysyx_22040175_top__DOT__zero = (0U 
                                                == vlSelf->ysyx_22040175_top__DOT__alu_res);
    }
    vlSelf->ysyx_22040175_top__DOT__next_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                                                ? (
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                                                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                                                    ? 
                                                   (vlSelf->pc 
                                                    + vlSelf->ysyx_22040175_top__DOT__imm)
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                                     & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__jalr)))
                                                     ? 
                                                    (vlSelf->pc 
                                                     + vlSelf->ysyx_22040175_top__DOT__imm)
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                                      & (IData)(vlSelf->ysyx_22040175_top__DOT__jalr))
                                                      ? vlSelf->pc
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->pc))))
                                                : vlSelf->pc);
}

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040175_top___024root___initial__TOP__4(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___initial__TOP__4\n"); );
    // Body
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f);
}

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    Vysyx_22040175_top___024root___initial__TOP__4(vlSelf);
}

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->unknown_code = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__alu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__jalr = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
