// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__1\n"); );
    // Body
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
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__imm = 0U;
    if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))) {
        vlSelf->ysyx_22040175_top__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->inst 
                                                  >> 0x14U));
    } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))) {
        vlSelf->ysyx_22040175_top__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 7U))));
    } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))) {
        vlSelf->ysyx_22040175_top__DOT__imm = (((- (IData)(
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
                                                           >> 7U)))));
    } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))) {
        vlSelf->ysyx_22040175_top__DOT__imm = (((- (IData)(
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
                                                           >> 0x14U)))));
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))) {
        vlSelf->ysyx_22040175_top__DOT__imm = (0xfffff000U 
                                               & vlSelf->inst);
    }
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__3(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    IData/*31:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    // Body
    __Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 = 0U;
    vlSelf->ysyx_22040175_top__DOT__ena = vlSelf->ysyx_22040175_top__DOT__rst_n;
    vlSelf->curr_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)
                        ? vlSelf->next_pc : 0x80000000U);
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
          & (IData)(vlSelf->ysyx_22040175_top__DOT__reg_wen)) 
         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__reg_waddr)))) {
        __Vdlyvval__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 
            = vlSelf->ysyx_22040175_top__DOT__alu_res;
        __Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 = 1U;
        __Vdlyvdim0__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 
            = vlSelf->ysyx_22040175_top__DOT__reg_waddr;
    }
    if (__Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0) {
        vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[__Vdlyvdim0__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0] 
            = __Vdlyvval__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    }
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__4(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
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
        }
    }
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
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = ((0U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]);
    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src1 = 
            ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
              ? vlSelf->ysyx_22040175_top__DOT__imm
              : 4U);
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = ((0U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__reg2_raddr))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                  [vlSelf->ysyx_22040175_top__DOT__reg2_raddr]);
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                 ? vlSelf->curr_pc
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
    }
    vlSelf->next_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                        ? (((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                            ? (vlSelf->curr_pc + vlSelf->ysyx_22040175_top__DOT__imm)
                            : ((IData)(vlSelf->ysyx_22040175_top__DOT__jump)
                                ? (vlSelf->curr_pc 
                                   + vlSelf->ysyx_22040175_top__DOT__imm)
                                : ((IData)(4U) + vlSelf->curr_pc)))
                        : vlSelf->curr_pc);
}

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    Vysyx_22040175_top___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
}

QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040175_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/top.v:10: ysyx_22040175_top.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
