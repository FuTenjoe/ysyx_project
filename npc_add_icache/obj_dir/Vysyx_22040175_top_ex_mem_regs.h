// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_EX_MEM_REGS_H_
#define VERILATED_VYSYX_22040175_TOP_EX_MEM_REGS_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_ex_mem_regs) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__reg_wen_ex_mem_i,0,0);
    VL_IN8(__PVT__reg_waddr_ex_mem_i,4,0);
    VL_IN8(__PVT__wmask_ex_mem_i,7,0);
    VL_IN8(__PVT__s_flag_ex_mem_i,0,0);
    VL_IN8(__PVT__time_set_ex_mem_i,0,0);
    VL_IN8(__PVT__expand_signed_ex_mem_i,3,0);
    VL_IN8(__PVT__ebreak_flag_ex_mem_i,0,0);
    VL_IN8(__PVT__rd_buf_flag_ex_mem_i,2,0);
    VL_IN8(__PVT__alu_op_ex_mem_i,4,0);
    VL_OUT8(__PVT__reg_wen_ex_mem_o,0,0);
    VL_OUT8(__PVT__reg_waddr_ex_mem_o,4,0);
    VL_OUT8(__PVT__ebreak_flag_ex_mem_o,0,0);
    VL_OUT8(__PVT__wmask_ex_mem_o,7,0);
    VL_OUT8(__PVT__s_flag_ex_mem_o,0,0);
    VL_OUT8(__PVT__time_set_ex_mem_o,0,0);
    VL_OUT8(__PVT__expand_signed_ex_mem_o,3,0);
    VL_OUT8(__PVT__rd_buf_flag_ex_mem_o,2,0);
    VL_OUT8(__PVT__alu_op_ex_mem_o,4,0);
    VL_IN8(__PVT__rest_id_mem_ex_mem_i,0,0);
    VL_OUT8(__PVT__rest_id_mem_ex_mem_o,0,0);
    VL_IN8(__PVT__cunqu_hazard_ex_mem_i,0,0);
    VL_OUT8(__PVT__cunqu_hazard_ex_mem_o,0,0);
    VL_IN8(__PVT__id_mul_ex_mem_i,0,0);
    VL_IN8(__PVT__sh_fnsh_flag_ex_mem_i,0,0);
    VL_IN8(__PVT__id_div_ex_mem_i,0,0);
    VL_IN8(__PVT__div_finish_ex_mem_i,0,0);
    VL_IN16(__PVT__csr_addr_ex_mem_i,11,0);
    VL_OUT16(__PVT__csr_addr_ex_mem_o,11,0);
    VL_IN(__PVT__s_imm_ex_mem_i,31,0);
    VL_OUT(__PVT__s_imm_ex_mem_o,31,0);
    VL_IN64(__PVT__from_ex_alu_res_ex_mem_i,63,0);
    VL_IN64(__PVT__alu_src1_ex_mem_i,63,0);
    VL_IN64(__PVT__alu_src2_ex_mem_i,63,0);
    VL_OUT64(__PVT__alu_src1_ex_mem_o,63,0);
    VL_OUT64(__PVT__alu_src2_ex_mem_o,63,0);
    VL_OUT64(__PVT__from_ex_alu_res_ex_mem_o,63,0);
    VL_IN64(__PVT__pc_ex_mem_i,63,0);
    VL_OUT64(__PVT__pc_ex_mem_o,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__reg_wen_ex_mem_o;
    CData/*4:0*/ __Vdly__reg_waddr_ex_mem_o;
    CData/*7:0*/ __Vdly__wmask_ex_mem_o;
    CData/*0:0*/ __Vdly__s_flag_ex_mem_o;
    CData/*0:0*/ __Vdly__time_set_ex_mem_o;
    CData/*3:0*/ __Vdly__expand_signed_ex_mem_o;
    CData/*0:0*/ __Vdly__ebreak_flag_ex_mem_o;
    CData/*2:0*/ __Vdly__rd_buf_flag_ex_mem_o;
    CData/*4:0*/ __Vdly__alu_op_ex_mem_o;
    CData/*0:0*/ __Vdly__cunqu_hazard_ex_mem_o;
    CData/*0:0*/ __Vdly__rest_id_mem_ex_mem_o;
    SData/*11:0*/ __Vdly__csr_addr_ex_mem_o;
    IData/*31:0*/ __Vdly__s_imm_ex_mem_o;
    QData/*63:0*/ __Vdly__alu_src1_ex_mem_o;
    QData/*63:0*/ __Vdly__alu_src2_ex_mem_o;
    QData/*63:0*/ __Vdly__from_ex_alu_res_ex_mem_o;
    QData/*63:0*/ __Vdly__pc_ex_mem_o;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_ex_mem_regs);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_ex_mem_regs(const char* name);
    ~Vysyx_22040175_top_ex_mem_regs();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
