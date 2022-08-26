// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_ctrl.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040175_top_ctrl____Vdpiimwrap_ebreak_TOP__ysyx_22040175_top__u_id_stage__u_ctrl() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_ctrl____Vdpiimwrap_ebreak_TOP__ysyx_22040175_top__u_id_stage__u_ctrl\n"); );
    // Body
    ebreak();
}

extern "C" void unknown_inst();

VL_INLINE_OPT void Vysyx_22040175_top_ctrl____Vdpiimwrap_unknown_inst_TOP__ysyx_22040175_top__u_id_stage__u_ctrl() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_ctrl____Vdpiimwrap_unknown_inst_TOP__ysyx_22040175_top__u_id_stage__u_ctrl\n"); );
    // Body
    unknown_inst();
}

VL_INLINE_OPT void Vysyx_22040175_top_ctrl___combo__TOP__ysyx_22040175_top__u_id_stage__u_ctrl__2(Vysyx_22040175_top_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_ctrl___combo__TOP__ysyx_22040175_top__u_id_stage__u_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__opcode = (0x7fU & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0U, 7U));
    vlSelf->__PVT__funct3 = (7U & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__inst, 0xcU, 3U));
    vlSelf->__PVT__funct7 = (0x7fU & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0x19U, 7U));
    vlSelf->__PVT__rd = (0x1fU & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 7U, 5U));
    vlSelf->__PVT__rs1 = (0x1fU & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 0xfU, 5U));
    vlSelf->__PVT__rs2 = (0x1fU & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 0x14U, 5U));
    vlSelf->__PVT__csr = (0xfffU & VL_SEL_IQII(12,64,6,32, vlSelf->__PVT__inst, 0x14U, 0xcU));
    vlSelf->__PVT__branch = 0U;
    vlSelf->__PVT__jump = 0U;
    vlSelf->__PVT__reg_wen = 0U;
    vlSelf->__PVT__jalr = 0U;
    vlSelf->__PVT__reg1_raddr = 0U;
    vlSelf->__PVT__reg2_raddr = 0U;
    vlSelf->__PVT__reg_waddr = 0U;
    vlSelf->__PVT__imm_gen_op = 0U;
    vlSelf->__PVT__alu_op = 0U;
    vlSelf->__PVT__alu_src_sel = 0U;
    vlSelf->__PVT__unknown_code = 0ULL;
    vlSelf->__PVT__ebreak_flag = 0U;
    vlSelf->__PVT__wmask = 0U;
    vlSelf->__PVT__s_flag = 0U;
    vlSelf->__PVT__expand_signed = 0U;
    vlSelf->__PVT__rd_flag = 0U;
    vlSelf->__PVT__rd_buf_flag = 0U;
    vlSelf->__PVT__id_mul = 0U;
    vlSelf->__PVT__id_div = 0U;
    vlSelf->__PVT__ecall_flag = 0U;
    vlSelf->__PVT__csr_addr = 0U;
    vlSelf->__PVT__mret_flag = 0U;
    vlSelf->__PVT__unnormal_pc = 0U;
    if (((((((((0x33U == (IData)(vlSelf->__PVT__opcode)) 
               | (0x13U == (IData)(vlSelf->__PVT__opcode))) 
              | (0x3bU == (IData)(vlSelf->__PVT__opcode))) 
             | (0x1bU == (IData)(vlSelf->__PVT__opcode))) 
            | (3U == (IData)(vlSelf->__PVT__opcode))) 
           | (0x23U == (IData)(vlSelf->__PVT__opcode))) 
          | (0x6fU == (IData)(vlSelf->__PVT__opcode))) 
         | (0x37U == (IData)(vlSelf->__PVT__opcode)))) {
        if ((0x33U == (IData)(vlSelf->__PVT__opcode))) {
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
            vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
            vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
            vlSelf->__PVT__alu_src_sel = 0U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__rd_buf_flag = 0U;
            vlSelf->__PVT__jump = 0U;
            vlSelf->__PVT__jalr = 0U;
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__alu_op = 3U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 3U;
                } else if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__alu_op = 4U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 3U;
                } else if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__alu_op = 0x13U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                    vlSelf->__PVT__id_mul = 1U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__alu_op = ((0U == (IData)(vlSelf->__PVT__funct7))
                                          ? 0U : 0xfU);
                vlSelf->__PVT__id_div = (0U != (IData)(vlSelf->__PVT__funct7));
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__alu_op = 9U;
                if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__alu_op = 8U;
                if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 0x17U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                    vlSelf->__PVT__id_div = 1U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__alu_op = ((0U == (IData)(vlSelf->__PVT__funct7))
                                          ? 1U : 0xfU);
                vlSelf->__PVT__id_div = (0U != (IData)(vlSelf->__PVT__funct7));
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 0xeU;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                    vlSelf->__PVT__id_div = 1U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else {
                vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
            }
        } else if ((0x13U == (IData)(vlSelf->__PVT__opcode))) {
            vlSelf->__PVT__rd_buf_flag = 0U;
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = 0U;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__rd_flag = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 9U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 3U;
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                if (((0U == (IData)(vlSelf->__PVT__funct7)) 
                     | (1U == (IData)(vlSelf->__PVT__funct7)))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 6U;
                    vlSelf->__PVT__alu_src_sel = 1U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else if (((0x20U == (IData)(vlSelf->__PVT__funct7)) 
                            | (0x21U == (IData)(vlSelf->__PVT__funct7)))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 5U;
                    vlSelf->__PVT__alu_op = 7U;
                    vlSelf->__PVT__alu_src_sel = 1U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__alu_op = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__alu_op = 2U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__alu_op = 1U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                if (((0U == (IData)(vlSelf->__PVT__funct7)) 
                     | (1U == (IData)(vlSelf->__PVT__funct7)))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 5U;
                    vlSelf->__PVT__alu_op = 0x10U;
                    vlSelf->__PVT__alu_src_sel = 1U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else {
                vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
            }
        } else if ((0x3bU == (IData)(vlSelf->__PVT__opcode))) {
            vlSelf->__PVT__rd_buf_flag = 0U;
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 3U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 0x13U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 0U;
                    vlSelf->__PVT__id_mul = 1U;
                } else if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 4U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 0U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 5U;
                vlSelf->__PVT__alu_src_sel = 0U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 1U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 0x14U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 0U;
                    vlSelf->__PVT__id_div = 1U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 7U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 3U;
                } else if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 6U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 2U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 0U;
                    vlSelf->__PVT__alu_op = 0x15U;
                    vlSelf->__PVT__alu_src_sel = 0U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 0U;
                    vlSelf->__PVT__rd_flag = 0U;
                    vlSelf->__PVT__id_div = 1U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else {
                vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
            }
        } else if ((0x1bU == (IData)(vlSelf->__PVT__opcode))) {
            vlSelf->__PVT__rd_buf_flag = 0U;
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = 0U;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 1U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 5U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 1U;
                vlSelf->__PVT__rd_flag = 0U;
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                if (((0x20U == (IData)(vlSelf->__PVT__funct7)) 
                     | (0x21U == (IData)(vlSelf->__PVT__funct7)))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 5U;
                    vlSelf->__PVT__alu_op = 7U;
                    vlSelf->__PVT__alu_src_sel = 1U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 1U;
                } else if (((0U == (IData)(vlSelf->__PVT__funct7)) 
                            | (1U == (IData)(vlSelf->__PVT__funct7)))) {
                    vlSelf->__PVT__jump = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__jalr = 0U;
                    vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                    vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                    vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                    vlSelf->__PVT__s_imm = 0U;
                    vlSelf->__PVT__imm_gen_op = 5U;
                    vlSelf->__PVT__alu_op = 6U;
                    vlSelf->__PVT__alu_src_sel = 1U;
                    vlSelf->__PVT__wmask = 0U;
                    vlSelf->__PVT__s_flag = 0U;
                    vlSelf->__PVT__expand_signed = 1U;
                    vlSelf->__PVT__rd_flag = 1U;
                } else {
                    vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
                }
            } else {
                vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__opcode))) {
            if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = VL_CONCAT_III(32,20,12, 
                                                     (0xfffffU 
                                                      & VL_REPLICATE_IOI(20,1,32,
                                                                         (1U 
                                                                          & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                     (0xfffU 
                                                      & VL_SEL_IQII(12,64,6,32, vlSelf->__PVT__inst, 0x14U, 0xcU)));
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 1U;
                vlSelf->__PVT__rd_flag = 0U;
                vlSelf->__PVT__rd_buf_flag = 1U;
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 0U;
                vlSelf->__PVT__rd_buf_flag = 2U;
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = 0U;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 0U;
                vlSelf->__PVT__rd_buf_flag = 4U;
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = 0U;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 3U;
                vlSelf->__PVT__rd_flag = 0U;
                vlSelf->__PVT__rd_buf_flag = 6U;
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = VL_CONCAT_III(32,20,12, 
                                                     (0xfffffU 
                                                      & VL_REPLICATE_IOI(20,1,32,
                                                                         (1U 
                                                                          & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                     (0xfffU 
                                                      & VL_SEL_IQII(12,64,6,32, vlSelf->__PVT__inst, 0x14U, 0xcU)));
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 0U;
                vlSelf->__PVT__rd_buf_flag = 1U;
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__reg2_raddr = 0U;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
                vlSelf->__PVT__s_imm = 0U;
                vlSelf->__PVT__imm_gen_op = 0U;
                vlSelf->__PVT__alu_op = 3U;
                vlSelf->__PVT__alu_src_sel = 1U;
                vlSelf->__PVT__wmask = 0U;
                vlSelf->__PVT__s_flag = 0U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 0U;
                vlSelf->__PVT__rd_buf_flag = 6U;
            } else {
                vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
            }
        } else if ((0x23U == (IData)(vlSelf->__PVT__opcode))) {
            vlSelf->__PVT__rd_buf_flag = 0U;
            if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = 0U;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__s_imm = VL_CONCAT_III(32,20,12, 
                                                     (0xfffffU 
                                                      & VL_REPLICATE_IOI(20,1,32,
                                                                         (1U 
                                                                          & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                     VL_CONCAT_III(12,7,5, 
                                                                   (0x7fU 
                                                                    & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0x19U, 7U)), 
                                                                   (0x1fU 
                                                                    & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 7U, 5U))));
                vlSelf->__PVT__imm_gen_op = 3U;
                vlSelf->__PVT__alu_op = 0x16U;
                vlSelf->__PVT__alu_src_sel = 0U;
                vlSelf->__PVT__wmask = 0xffU;
                vlSelf->__PVT__s_flag = 1U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = 0U;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__s_imm = VL_CONCAT_III(32,20,12, 
                                                     (0xfffffU 
                                                      & VL_REPLICATE_IOI(20,1,32,
                                                                         (1U 
                                                                          & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                     VL_CONCAT_III(12,7,5, 
                                                                   (0x7fU 
                                                                    & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0x19U, 7U)), 
                                                                   (0x1fU 
                                                                    & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 7U, 5U))));
                vlSelf->__PVT__imm_gen_op = 3U;
                vlSelf->__PVT__alu_op = 0x16U;
                vlSelf->__PVT__alu_src_sel = 0U;
                vlSelf->__PVT__wmask = 3U;
                vlSelf->__PVT__s_flag = 1U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 2U;
            } else if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = 0U;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__s_imm = VL_CONCAT_III(32,20,12, 
                                                     (0xfffffU 
                                                      & VL_REPLICATE_IOI(20,1,32,
                                                                         (1U 
                                                                          & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                     VL_CONCAT_III(12,7,5, 
                                                                   (0x7fU 
                                                                    & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0x19U, 7U)), 
                                                                   (0x1fU 
                                                                    & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 7U, 5U))));
                vlSelf->__PVT__imm_gen_op = 3U;
                vlSelf->__PVT__alu_op = 0x16U;
                vlSelf->__PVT__alu_src_sel = 0U;
                vlSelf->__PVT__wmask = 1U;
                vlSelf->__PVT__s_flag = 1U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 3U;
            } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__jump = 0U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__jalr = 0U;
                vlSelf->__PVT__reg1_raddr = 0U;
                vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
                vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rs1;
                vlSelf->__PVT__s_imm = VL_CONCAT_III(32,20,12, 
                                                     (0xfffffU 
                                                      & VL_REPLICATE_IOI(20,1,32,
                                                                         (1U 
                                                                          & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                     VL_CONCAT_III(12,7,5, 
                                                                   (0x7fU 
                                                                    & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0x19U, 7U)), 
                                                                   (0x1fU 
                                                                    & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 7U, 5U))));
                vlSelf->__PVT__imm_gen_op = 3U;
                vlSelf->__PVT__alu_op = 0x16U;
                vlSelf->__PVT__alu_src_sel = 0U;
                vlSelf->__PVT__wmask = 0xfU;
                vlSelf->__PVT__s_flag = 1U;
                vlSelf->__PVT__expand_signed = 0U;
                vlSelf->__PVT__rd_flag = 4U;
            } else {
                vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
            }
        } else if ((0x6fU == (IData)(vlSelf->__PVT__opcode))) {
            vlSelf->__PVT__jump = 1U;
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__jalr = 0U;
            vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
            vlSelf->__PVT__imm_gen_op = 3U;
            vlSelf->__PVT__alu_op = 3U;
            vlSelf->__PVT__alu_src_sel = 2U;
            vlSelf->__PVT__s_flag = 0U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__expand_signed = 0U;
            vlSelf->__PVT__rd_flag = 0U;
            vlSelf->__PVT__rd_buf_flag = 0U;
        } else {
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__reg1_raddr = 0U;
            vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
            vlSelf->__PVT__imm_gen_op = 4U;
            vlSelf->__PVT__alu_op = 3U;
            vlSelf->__PVT__alu_src_sel = 1U;
            vlSelf->__PVT__s_flag = 0U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__expand_signed = 0U;
            vlSelf->__PVT__rd_flag = 5U;
            vlSelf->__PVT__rd_buf_flag = 0U;
        }
    } else if ((0x17U == (IData)(vlSelf->__PVT__opcode))) {
        vlSelf->__PVT__reg_wen = 1U;
        vlSelf->__PVT__reg1_raddr = 0U;
        vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
        vlSelf->__PVT__imm_gen_op = 4U;
        vlSelf->__PVT__alu_op = 3U;
        vlSelf->__PVT__alu_src_sel = 3U;
        vlSelf->__PVT__s_flag = 0U;
        vlSelf->__PVT__wmask = 0U;
        vlSelf->__PVT__expand_signed = 0U;
        vlSelf->__PVT__rd_flag = 0U;
        vlSelf->__PVT__rd_buf_flag = 0U;
    } else if ((0x67U == (IData)(vlSelf->__PVT__opcode))) {
        vlSelf->__PVT__rd_buf_flag = 0U;
        if ((0U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__jump = 1U;
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__jalr = 1U;
            vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
            vlSelf->__PVT__imm_gen_op = 0U;
            vlSelf->__PVT__alu_op = 3U;
            vlSelf->__PVT__alu_src_sel = 2U;
            vlSelf->__PVT__s_flag = 0U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__expand_signed = 0U;
            vlSelf->__PVT__s_imm = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__rs1));
            vlSelf->__PVT__rd_flag = 0U;
            vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
            vlSelf->__PVT__reg2_raddr = 0U;
        } else {
            vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
        }
    } else if ((0x63U == (IData)(vlSelf->__PVT__opcode))) {
        vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
        vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
        vlSelf->__PVT__imm_gen_op = 2U;
        vlSelf->__PVT__alu_src_sel = 0U;
        vlSelf->__PVT__wmask = 0U;
        vlSelf->__PVT__rd_flag = 0U;
        vlSelf->__PVT__reg_wen = 0U;
        vlSelf->__PVT__jump = 0U;
        vlSelf->__PVT__jalr = 0U;
        vlSelf->__PVT__rd_buf_flag = 0U;
        vlSelf->__PVT__reg_waddr = 0U;
        if ((1U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__branch = 1U;
            vlSelf->__PVT__alu_op = 4U;
            vlSelf->__PVT__s_flag = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__branch = 1U;
            vlSelf->__PVT__alu_op = 0xcU;
            vlSelf->__PVT__s_flag = 0U;
        } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__branch = 1U;
            vlSelf->__PVT__alu_op = 0x11U;
            vlSelf->__PVT__s_flag = 0U;
        } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__branch = 1U;
            vlSelf->__PVT__alu_op = 0xbU;
            vlSelf->__PVT__s_flag = 0U;
        } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__branch = 1U;
            vlSelf->__PVT__alu_op = 0x12U;
            vlSelf->__PVT__s_flag = 0U;
        } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__branch = 1U;
            vlSelf->__PVT__alu_op = 0xaU;
            vlSelf->__PVT__s_flag = 0U;
        } else {
            vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
        }
    } else if ((0x73U == (IData)(vlSelf->__PVT__opcode))) {
        if ((2U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__jump = 0U;
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__jalr = 0U;
            vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
            vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
            vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
            vlSelf->__PVT__s_imm = 0U;
            vlSelf->__PVT__imm_gen_op = 5U;
            vlSelf->__PVT__alu_op = 0x18U;
            vlSelf->__PVT__alu_src_sel = 4U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__s_flag = 0U;
            vlSelf->__PVT__expand_signed = 0U;
            vlSelf->__PVT__rd_flag = 0U;
            vlSelf->__PVT__id_div = 0U;
            vlSelf->__PVT__csr_addr = vlSelf->__PVT__csr;
        } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__jump = 0U;
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__jalr = 0U;
            vlSelf->__PVT__reg1_raddr = vlSelf->__PVT__rs1;
            vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
            vlSelf->__PVT__reg_waddr = vlSelf->__PVT__rd;
            vlSelf->__PVT__s_imm = 0U;
            vlSelf->__PVT__imm_gen_op = 5U;
            vlSelf->__PVT__alu_op = 0x19U;
            vlSelf->__PVT__alu_src_sel = 4U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__s_flag = 0U;
            vlSelf->__PVT__expand_signed = 0U;
            vlSelf->__PVT__rd_flag = 0U;
            vlSelf->__PVT__id_div = 0U;
            vlSelf->__PVT__csr_addr = vlSelf->__PVT__csr;
        } else if ((0x73ULL == vlSelf->__PVT__inst)) {
            vlSelf->__PVT__ecall_flag = 1U;
            vlSelf->__PVT__mret_flag = 0U;
            vlSelf->__PVT__unknown_code = 0ULL;
            vlSelf->__PVT__unnormal_pc = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__mtvec, 0U, 0x20U);
            vlSelf->__PVT__jump = 0U;
            vlSelf->__PVT__reg_wen = 0U;
            vlSelf->__PVT__jalr = 0U;
            vlSelf->__PVT__reg1_raddr = (0x1fU & VL_SEL_IQII(5,64,32,32, vlSelf->__PVT__id_pc, 0U, 5U));
            vlSelf->__PVT__reg2_raddr = vlSelf->__PVT__rs2;
            vlSelf->__PVT__reg_waddr = 0U;
            vlSelf->__PVT__s_imm = 0U;
            vlSelf->__PVT__imm_gen_op = 5U;
            vlSelf->__PVT__alu_op = 0x1aU;
            vlSelf->__PVT__alu_src_sel = 4U;
            vlSelf->__PVT__wmask = 0U;
            vlSelf->__PVT__s_flag = 0U;
            vlSelf->__PVT__expand_signed = 0U;
            vlSelf->__PVT__rd_flag = 0U;
            vlSelf->__PVT__id_div = 0U;
            vlSelf->__PVT__csr_addr = 0U;
        } else if ((0x30200073ULL == vlSelf->__PVT__inst)) {
            vlSelf->__PVT__ecall_flag = 0U;
            vlSelf->__PVT__mret_flag = 1U;
            vlSelf->__PVT__unknown_code = 0ULL;
            vlSelf->__PVT__reg1_raddr = 0U;
            vlSelf->__PVT__reg2_raddr = 0U;
            vlSelf->__PVT__alu_op = 0x1bU;
            vlSelf->__PVT__unnormal_pc = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__mepc, 0U, 0x20U);
        } else if ((0x100073ULL == vlSelf->__PVT__inst)) {
            vlSelf->__PVT__ebreak_flag = 1U;
            vlSelf->__PVT__ecall_flag = 0U;
            vlSelf->__PVT__unknown_code = 0ULL;
            vlSelf->__PVT__reg1_raddr = 0U;
            vlSelf->__PVT__reg2_raddr = 0U;
        } else {
            vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
        }
    } else {
        vlSelf->__PVT__ebreak_flag = 0U;
        vlSelf->__PVT__unknown_code = vlSelf->__PVT__inst;
    }
    if ((0ULL != vlSelf->__PVT__unknown_code)) {
        Vysyx_22040175_top_ctrl____Vdpiimwrap_unknown_inst_TOP__ysyx_22040175_top__u_id_stage__u_ctrl();
    }
}
