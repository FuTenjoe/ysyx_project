// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__8(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx5;
    VlWide<10>/*319:0*/ __Vtemp696;
    VlWide<10>/*319:0*/ __Vtemp697;
    VlWide<10>/*319:0*/ __Vtemp698;
    VlWide<10>/*319:0*/ __Vtemp699;
    // Body
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause = 0x8000000000000007ULL;
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause = 0xbULL;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause 
                                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                        }
                    }
                } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                    if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause 
                            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                               | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec 
                                            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                                    }
                                }
                            }
                        } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec 
                                        = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                           | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_pc;
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
                            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_pc;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
                            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                    }
                } else if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc 
                        = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                           | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest 
        = (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump)) 
             | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mret_flag)) 
            | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ecall_flag)) 
           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq));
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                        if ((0x300U 
                                             != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                            if ((0x304U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie 
                                                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    if ((0x300U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                        if ((0x304U 
                                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie 
                                                = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                   | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
            = ((0xffffffffffffff7fULL & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus) 
               | ((QData)((IData)((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus 
                                                 >> 3U))))) 
                  << 7U));
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
            = (0xfffffffffffffff7ULL & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus);
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = ((0xfffffffffffffff7ULL 
                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus 
                                                              >> 7U))))) 
                                  << 3U));
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = (0x80ULL | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus);
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = ((0xffffffffffffff7fULL 
                                & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mstatus 
                                                              >> 3U))))) 
                                  << 7U));
                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                            = (0xfffffffffffffff7ULL 
                               & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1;
                                }
                            }
                        }
                    }
                } else if ((0x341U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                    if ((0x342U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                        if ((0x305U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                            if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_csr_addr))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus 
                                    = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                       | vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
        = ((((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag)) 
               | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag))) 
              | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag))) 
             | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_rd_buf_flag))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_cunqu_hazard)))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_from_ex_alu_res);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__if_pc;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_r_done2 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state;
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__dd_r_done2 = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state = 0U;
    }
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
            ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                    >> 4U)) << 1U))][9U] 
                >> 0x16U) & ((0x3fffffffffffffULL & 
                              (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                [(0x7eU 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 4U)) 
                                                     << 1U))][9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                            [
                                                            (0x7eU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))][8U])))) 
                             == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                 >> 0xaU))) : ((3U 
                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                               & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                   [
                                                   (0x7eU 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                >> 4U)) 
                                                       << 1U))][9U] 
                                                   >> 0x16U) 
                                                  & ((0x3fffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                          [
                                                                          (0x7eU 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                              << 1U))][9U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                           [
                                                                           (0x7eU 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                               << 1U))][8U])))) 
                                                     == 
                                                     (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                      >> 0xaU)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1) 
              | ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
                  ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                       >> 0xaU))) : 
                 ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                  & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                       >> 0xaU)))))));
    if ((((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__w_state)) 
          & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi2__DOT__w_state))) 
         & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_axi_slave2__DOT__pmem_write_TOP((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_write_addr)), vlSelf->ysyx_22040175_top__DOT__reg_write_data, (IData)(vlSelf->ysyx_22040175_top__DOT__reg_write_wmask));
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__r_done2));
    vlSelf->ysyx_22040175_top__DOT__axi_valid = (((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
                                                  | (4U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
                                                 | (5U 
                                                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)));
    vlSelf->ysyx_22040175_top__DOT__send_axi_ar_id 
        = (((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
            | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))
            ? 1U : (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
                     | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))
                     ? 2U : 0U));
    if (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__way 
            = (1U & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                          >> 4U)) << 1U))][9U] 
                      >> 0x16U) & (~ (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                      [(0x7fU & ((IData)(1U) 
                                                 + 
                                                 (0xfeU 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 4U)) 
                                                     << 1U))))][9U] 
                                      >> 0x16U))));
    }
    __Vtableidx5 = (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__count)) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__if_valid) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0
        [__Vtableidx5];
    __Vtemp696[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][0U];
    __Vtemp696[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][1U];
    __Vtemp696[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][2U];
    __Vtemp696[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][3U];
    __Vtemp696[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][4U];
    __Vtemp696[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][5U];
    __Vtemp696[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][6U];
    __Vtemp696[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][7U];
    __Vtemp696[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][8U];
    __Vtemp696[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][9U];
    __Vtemp697[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp697[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp697[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp697[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp697[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp697[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp697[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp697[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp697[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp697[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    __Vtemp698[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][0U];
    __Vtemp698[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][1U];
    __Vtemp698[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][2U];
    __Vtemp698[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][3U];
    __Vtemp698[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][4U];
    __Vtemp698[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][5U];
    __Vtemp698[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][6U];
    __Vtemp698[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][7U];
    __Vtemp698[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][8U];
    __Vtemp698[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][9U];
    __Vtemp699[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp699[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp699[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp699[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp699[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp699[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp699[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp699[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp699[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp699[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
            ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                ? ((0x136U >= (0xc0U & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                 >> 2U)) 
                                        << 6U))) ? 
                   (((QData)((IData)(__Vtemp696[(((IData)(0x3fU) 
                                                  + 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                               >> 2U)) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                     << 0x20U) | (QData)((IData)(__Vtemp696[
                                                 (6U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 2U)) 
                                                     << 1U))])))
                    : 0ULL) : ((0x136U >= (0xc0U & 
                                           ((IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                     >> 2U)) 
                                            << 6U)))
                                ? (((QData)((IData)(
                                                    __Vtemp697[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                   >> 2U)) 
                                                          << 6U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp697[
                                                                (6U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                             >> 2U)) 
                                                                    << 1U))])))
                                : 0ULL)) : (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
                                             ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                                                 ? 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp698[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp698[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL)
                                                 : 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp699[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp699[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL))
                                             : 0ULL));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit));
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_axi_slave2__r_valid 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__axi_valid) 
           | (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_div) 
                     << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_mul) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__div_finish) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0
        [__Vtableidx3];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__delay_control_rest)))
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction)
            : 0x13U);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__next_state 
        = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
            ? ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                ? 0U : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                         ? 0U : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint)
                                  ? 3U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__axi_ar_id_o)))
                                                     ? 3U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                                                    ? 2U
                                                    : 
                                                   ((((((1U 
                                                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)) 
                                                        | (2U 
                                                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                       | (4U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                      | (6U 
                                                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
                                                     & ((0x2004000ULL 
                                                         != 
                                                         (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                          + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)) 
                                                        & (0x200bff8ULL 
                                                           != 
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                            + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))))
                                                     ? 1U
                                                     : 
                                                    (((0x2004000ULL 
                                                       == 
                                                       (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                        + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)) 
                                                      | (0x200bff8ULL 
                                                         == 
                                                         (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                                          + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2)))
                                                      ? 4U
                                                      : 0U)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__clint)
            ? ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state))
                ? ((0x2004000ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                     + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))
                    ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mtimecmp
                    : ((0x200bff8ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src1 
                                         + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_src2))
                        ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__u_mem_clint__DOT__mtime
                        : 0ULL)) : 0ULL) : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_r_done)
                                             ? vlSelf->ysyx_22040175_top__DOT__rdata
                                             : 0ULL));
    vlSelf->inst = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst;
    if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_alu_op))) {
                            if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw));
                            } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw;
                            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw))));
                            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_rd_buf_flag))) {
                                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                    = (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__rd_buf_lw))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res)))
                        : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__alu_res))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag))) 
            | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_rd_buf_flag)))
            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res);
}

extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__9(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__9\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    // Body
    if (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__real_reg_wb_data 
            = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))
                : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                    ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))
                    : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                        ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))))
                            : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))
                        : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))
                            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))));
    }
    if (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f[vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
            = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))
                : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                    ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))
                    : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                        ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))))
                            : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))
                        : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_expand_signed))
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata)))
                            : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__reg_wdata))));
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = (1U & (~ (IData)(vlSelf->rst)));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                     << 7U) | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                                << 6U) | ((0x20U & 
                                           ((~ ((1U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)) 
                                                | (2U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)))) 
                                            << 5U)) 
                                          | (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                                              << 4U) 
                                             | ((((((1U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                  | (6U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                 << 3U) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0
        [__Vtableidx1];
    if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                & (0x2004000ULL != (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                                    + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm)))))
                ? 1U : (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                          & (0x2004000ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
                                              [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr] 
                                              + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_imm))))) 
                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag))
                         ? 4U : 0U));
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__wr_finish)
                ? 3U : 4U);
    } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__w_done)
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__b_hs)
                ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__next_state = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellout__u_wb_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_wb_reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_from_id) 
            << 2U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem) 
                       << 1U) | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rest_wb_hazard)));
    if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
                if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                               == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_hazard_result;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res)))));
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res));
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res)));
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            }
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_ex_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_cunqu_hazard) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mem_from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_raddr];
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
    } else if ((0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((1U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
            if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 = 4ULL;
            } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg1_rdata;
                }
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
                }
            } else if ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
                vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 = 0ULL;
    } else if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__reg2_rdata;
    } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm;
    } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc;
        } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause;
        } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec;
        } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus;
        } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie;
        }
    } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        if ((0x341U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc;
        } else if ((0x342U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mcause;
        } else if ((0x305U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec;
        } else if ((0x300U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mstatus;
        } else if ((0x304U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellout__u_ctrl__csr_addr))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mie;
        }
    } else if ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2 
            = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    }
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero 
        = ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
            ? (IData)(((0U == (0xcU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                       & ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                           ? ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op)) 
                              & (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                 < vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))
                           : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op) 
                              & VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2)))))
            : ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                ? ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                    ? (IData)(((0U == (3U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                               & (0ULL != (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                           - vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))))
                    : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op) 
                        >> 1U) & ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))
                                   ? (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                      >= vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2)
                                   : VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2))))
                : (IData)(((4U == (7U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_op))) 
                           & (0ULL == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src1 
                                       - vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_alu_src2))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sig_jalr 
        = ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
               & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) 
           & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
                  & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) 
              & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                     & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)))) 
                 & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)) 
                    & (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)) 
                          | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                         | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc;
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__branch) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (4ULL + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr)))) {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__jump) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_jalr))) {
        if ((1U & (~ (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)) 
                         | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond))) 
                      | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__data_rest_cond)))))) {
            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
                = (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f
                   [(0x1fU & vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_s_imm)] 
                   + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_next_pc 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__delay_sig_jalr)
                ? (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_id_stage__DOT__delay_reg1_rdata 
                   + vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_imm)
                : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_ebreak_flag)
                    ? 0x80000000ULL : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__ecall_flag)
                                        ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec
                                        : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__mret_flag)
                                            ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mepc
                                            : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__clint_timer_irq)
                                                ? vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__from_mem_mtvec
                                                : vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_pc)))));
    }
    vlSelf->out_mem_rd_buf_flag = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sig_jalr;
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__10(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__10\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__r_done2 = (((2U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi2__DOT__r_state)) 
                                                & (2U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_state))) 
                                               & (IData)(vlSelf->ysyx_22040175_top__DOT__r_last));
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040175_top__ConstPool__TABLE_815565d4_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__11(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__11\n"); );
    // Variables
    SData/*10:0*/ __Vtableidx6;
    // Body
    __Vtableidx6 = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                     << 0xaU) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_valid) 
                                  << 9U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyx_22040175_top__DOT__send_axi_ar_id) 
                                                << 4U) 
                                               | (((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_815565d4_0
        [__Vtableidx6];
}

void Vysyx_22040175_top___024root___sequent__TOP__1(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__2(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__3(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__4(Vysyx_22040175_top___024root* vlSelf);

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22040175_top___024root___sequent__TOP__2(vlSelf);
        Vysyx_22040175_top___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__9(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__10(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__11(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
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
    __req |= ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/cpu.v:37: ysyx_22040175_top.u_cpu.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
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
    if (VL_UNLIKELY((vlSelf->time_set & 0xfeU))) {
        Verilated::overWidthError("time_set");}
}
#endif  // VL_DEBUG
