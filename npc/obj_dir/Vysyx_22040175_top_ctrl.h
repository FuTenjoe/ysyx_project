// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_CTRL_H_
#define VERILATED_VYSYX_22040175_TOP_CTRL_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_ctrl) {
  public:

    // PORTS
    VL_OUT8(__PVT__branch,0,0);
    VL_OUT8(__PVT__jump,0,0);
    VL_OUT8(__PVT__reg_wen,0,0);
    VL_OUT8(__PVT__reg_waddr,4,0);
    VL_OUT8(__PVT__reg1_raddr,4,0);
    VL_OUT8(__PVT__reg2_raddr,4,0);
    VL_OUT8(__PVT__imm_gen_op,2,0);
    VL_OUT8(__PVT__alu_op,4,0);
    VL_OUT8(__PVT__alu_src_sel,2,0);
    VL_OUT8(__PVT__jalr,0,0);
    VL_OUT8(__PVT__ebreak_flag,0,0);
    VL_OUT8(__PVT__wmask,7,0);
    VL_OUT8(__PVT__s_flag,0,0);
    VL_OUT8(__PVT__expand_signed,3,0);
    VL_OUT8(__PVT__rd_flag,2,0);
    VL_OUT8(__PVT__rd_buf_flag,2,0);
    VL_OUT8(__PVT__id_mul,0,0);
    VL_OUT8(__PVT__id_div,0,0);
    VL_OUT8(__PVT__ecall_flag,0,0);
    VL_OUT8(__PVT__mret_flag,0,0);
    VL_OUT16(__PVT__csr_addr,11,0);
    VL_OUT(__PVT__s_imm,31,0);
    VL_OUT(__PVT__unnormal_pc,31,0);
    VL_IN64(__PVT__id_pc,63,0);
    VL_IN64(__PVT__inst,63,0);
    VL_OUT64(__PVT__unknown_code,63,0);
    VL_IN64(__PVT__mepc,63,0);
    VL_IN64(__PVT__mcause,63,0);
    VL_IN64(__PVT__mtvec,63,0);

    // LOCAL SIGNALS
    CData/*6:0*/ __PVT__opcode;
    CData/*2:0*/ __PVT__funct3;
    CData/*6:0*/ __PVT__funct7;
    CData/*4:0*/ __PVT__rd;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    SData/*11:0*/ __PVT__csr;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_ctrl);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_ctrl(const char* name);
    ~Vysyx_22040175_top_ctrl();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
