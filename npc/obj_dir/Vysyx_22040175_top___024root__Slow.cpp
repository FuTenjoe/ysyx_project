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

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP();
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP();
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_22040175_top___024root___settle__TOP__2(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__ebreak_flag = 0U;
    vlSelf->ysyx_22040175_top__DOT__reg_f[0U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[1U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[2U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[3U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[4U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[5U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[6U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[7U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[8U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[9U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xaU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xbU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xcU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xdU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xeU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xfU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x10U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x11U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x12U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x13U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x14U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x15U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x16U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x17U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x18U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x19U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1aU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1bU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1cU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1dU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1eU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1fU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1fU];
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_pc_reg_0__curr_pc);
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[1U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[2U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[3U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[4U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[5U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[6U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[7U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[8U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[9U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xaU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xbU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xcU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xdU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xeU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xfU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x10U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x11U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x12U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x13U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x14U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x15U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x16U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x17U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x18U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x19U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1aU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1bU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1cU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1dU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1eU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1fU];
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP((QData)((IData)(vlSelf->pc)), vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_22040175_top__DOT__rdata = vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata;
    vlSelf->inst = (IData)(vlSelf->ysyx_22040175_top__DOT__rdata);
    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__branch = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xeU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__branch = 1U;
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xdU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__branch = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                            }
                        } else {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))
                                ? 0U : 1U);
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                    }
                }
            }
        }
    }
    vlSelf->unknown_code = 0ULL;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 4U)))) {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (~ (IData)((QData)((IData)(vlSelf->inst)))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xeU))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 2U)))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xdU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->unknown_code 
                                        = (QData)((IData)(vlSelf->inst));
                                } else if ((1U != (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->unknown_code 
                                        = (QData)((IData)(vlSelf->inst));
                                }
                            } else if ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))) {
                                vlSelf->unknown_code 
                                    = (QData)((IData)(vlSelf->inst));
                            } else if ((1U != (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0x19U))))) {
                                vlSelf->unknown_code 
                                    = (QData)((IData)(vlSelf->inst));
                            }
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xdU)))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                            if ((0U != (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                if ((1U != (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->unknown_code 
                                        = (QData)((IData)(vlSelf->inst));
                                }
                            }
                        }
                    } else {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (~ (IData)((QData)((IData)(vlSelf->inst)))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            if ((0U != (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->unknown_code 
                                    = (QData)((IData)(vlSelf->inst));
                            }
                        } else if ((0U != (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 3U)))) {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 2U)))) {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (~ (IData)((QData)((IData)(vlSelf->inst)))))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if ((1U & (~ ((0U == (0x7fU & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U)))) 
                                  | (1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0x19U)))))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 3U)))) {
        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U)))) {
        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 1U)))) {
        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 0xeU)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xdU)))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                         >> 0xdU))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 0xcU))))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else {
        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
    }
    if ((0x100073U == vlSelf->inst)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP();
        vlSelf->ysyx_22040175_top__DOT__ebreak_flag = 1U;
    }
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                if ((0U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_imm 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U)))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U))))))
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U)))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U)))))));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                            }
                        } else {
                            vlSelf->ysyx_22040175_top__DOT__s_imm 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU)))
                                    ? 0U : 0U);
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_imm 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))
                                ? 0U : (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->inst)) 
                                                                >> 0x1fU))))) 
                                         << 0xcU) | 
                                        (0xfffU & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x14U)))));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xeU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg_wen = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 7U)));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 7U)));
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 7U)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 7U)));
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 7U)));
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 7U)));
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 7U)));
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 7U)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 7U)));
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? 0xffU : 0xfU)
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? 3U : 1U));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xeU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? 0x12U : 0xbU)
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? 0x11U : 0xaU));
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU)))
                                    ? 4U : 0xcU);
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__alu_op = 0x15U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__alu_op = 0x14U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__alu_op = 5U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__alu_op = 0x13U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU)))
                                    ? ((0U == (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0x19U))))
                                        ? 0U : 0xfU)
                                    : ((0U == (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0x19U))))
                                        ? 1U : 0xfU));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))
                                ? 9U : 8U);
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op 
                            = ((0U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U))))
                                ? 3U : 4U);
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__alu_op 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))
                                ? 6U : 2U);
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 9U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 0x10U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 5U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU)))
                                        ? 3U : 5U) : 5U);
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 4U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 6U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0xfU)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0xfU)));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xfU)));
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0xfU)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0xfU)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 0xfU)));
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 0xfU)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0xfU)));
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x14U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x14U)));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0x14U)));
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x14U)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x14U)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0x14U)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0x14U)));
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x14U)));
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0x14U)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 2U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0xcU))))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 3U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 5U;
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 5U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    }
                }
            }
        }
    }
    if ((0ULL != vlSelf->unknown_code)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP();
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = ((0U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__reg2_raddr))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                  [vlSelf->ysyx_22040175_top__DOT__reg2_raddr]);
    vlSelf->ysyx_22040175_top__DOT__imm = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                    << 7U) 
                                                                   | (0x7fU 
                                                                      & (IData)((QData)((IData)(vlSelf->inst)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x14U)))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(
                                                                               ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0xcU)) 
                                                                       << 0xcU))))))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x14U)) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0x800U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 7U)) 
                                                                           << 0xbU)) 
                                                                       | ((0x7e0U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x19U)) 
                                                                              << 5U)) 
                                                                          | (0x1eU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 8U)) 
                                                                                << 1U))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1fU 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 7U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x14U)))))))));
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                  ? (QData)((IData)(vlSelf->pc))
                                                  : (QData)((IData)(vlSelf->pc)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                  ? vlSelf->ysyx_22040175_top__DOT__imm
                                                  : vlSelf->ysyx_22040175_top__DOT__reg2_rdata));
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = ((0U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]);
    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src1 = 
            ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
              ? vlSelf->ysyx_22040175_top__DOT__imm
              : 4ULL);
    }
    if (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag)) 
           | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) 
          | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) 
         | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag)))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(
                                                                                (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                                                + vlSelf->ysyx_22040175_top__DOT__alu_src2), vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__5__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw 
            = vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__5__rdata;
    }
    vlSelf->ysyx_22040175_top__DOT__zero = 0U;
    vlSelf->ysyx_22040175_top__DOT__alu_res = 0ULL;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__zero = 
                (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
        } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1 
                    = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src1));
                vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2 
                    = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src2));
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = VL_MODDIV_QQQ(64, (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1)), (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2)));
            } else {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = VL_DIV_QQQ(64, (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_src1)), (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_src2)));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       * vlSelf->ysyx_22040175_top__DOT__alu_src2);
            } else {
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       < vlSelf->ysyx_22040175_top__DOT__alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__alu_src1;
            vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__alu_src2;
            vlSelf->ysyx_22040175_top__DOT__zero = 
                VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2);
        } else {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_res 
                        = VL_MODDIV_QQQ(64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
                } else {
                    vlSelf->ysyx_22040175_top__DOT__alu_res 
                        = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                           - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                    vlSelf->ysyx_22040175_top__DOT__zero 
                        = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
            } else {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL != vlSelf->ysyx_22040175_top__DOT__alu_res);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       >= vlSelf->ysyx_22040175_top__DOT__alu_src2);
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__alu_src1;
                vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__alu_src2;
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = ((vlSelf->ysyx_22040175_top__DOT__alu_src1 
                    < vlSelf->ysyx_22040175_top__DOT__alu_src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__alu_src1;
            vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__alu_src2;
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2)
                    ? 1ULL : 0ULL);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
            } else {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_res));
        } else {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__zero = 
                (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_res));
            } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw));
            } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw;
            } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__alu_src2);
            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw))));
            } else if ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = vlSelf->ysyx_22040175_top__DOT__alu_src2;
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw))));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   ^ vlSelf->ysyx_22040175_top__DOT__alu_src2);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))
                                                    ? 
                                                   (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                    | vlSelf->ysyx_22040175_top__DOT__alu_src2)
                                                    : 
                                                   (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                    & vlSelf->ysyx_22040175_top__DOT__alu_src2));
    }
    if ((((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__reg_wen)) 
           & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__reg_waddr))) 
          & (IData)(vlSelf->ysyx_22040175_top__DOT__s_flag)) 
         & (IData)(vlSelf->time_set))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__pmem_write_TOP(
                                                                                (vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                                                [vlSelf->ysyx_22040175_top__DOT__reg_waddr] 
                                                                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__s_imm))), vlSelf->ysyx_22040175_top__DOT__alu_res, (IData)(vlSelf->ysyx_22040175_top__DOT__wmask));
    }
}

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040175_top___024root___initial__TOP__3(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___initial__TOP__3\n"); );
    // Body
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f);
}

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    Vysyx_22040175_top___024root___initial__TOP__3(vlSelf);
}

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__2(vlSelf);
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
    vlSelf->unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->time_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040175_top__DOT__s_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__expand_signed = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__rd_flag = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT____Vcellout__u_pc_reg_0__curr_pc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040175_top__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata = 0;
    vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__5__rdata = 0;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
