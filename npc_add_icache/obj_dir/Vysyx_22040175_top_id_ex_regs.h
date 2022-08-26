// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_ID_EX_REGS_H_
#define VERILATED_VYSYX_22040175_TOP_ID_EX_REGS_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_id_ex_regs) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__reg_wen_id_ex_i,0,0);
    VL_IN8(__PVT__reg_waddr_id_ex_i,4,0);
    VL_IN8(__PVT__alu_op_id_ex_i,4,0);
    VL_IN8(__PVT__ebreak_flag_id_ex_i,0,0);
    VL_IN8(__PVT__wmask_id_ex_i,7,0);
    VL_IN8(__PVT__s_flag_id_ex_i,0,0);
    VL_IN8(__PVT__expand_signed_id_ex_i,3,0);
    VL_IN8(__PVT__rd_flag_id_ex_i,2,0);
    VL_IN8(__PVT__rd_buf_flag_id_ex_i,2,0);
    VL_OUT8(__PVT__reg_wen_id_ex_o,0,0);
    VL_OUT8(__PVT__reg_waddr_id_ex_o,4,0);
    VL_OUT8(__PVT__alu_op_id_ex_o,4,0);
    VL_OUT8(__PVT__ebreak_flag_id_ex_o,0,0);
    VL_OUT8(__PVT__wmask_id_ex_o,7,0);
    VL_OUT8(__PVT__s_flag_id_ex_o,0,0);
    VL_OUT8(__PVT__expand_signed_id_ex_o,3,0);
    VL_OUT8(__PVT__rd_flag_id_ex_o,2,0);
    VL_OUT8(__PVT__rd_buf_flag_id_ex_o,2,0);
    VL_IN8(__PVT__time_set_id_ex_i,0,0);
    VL_OUT8(__PVT__time_set_id_ex_o,0,0);
    VL_IN8(__PVT__ena_id_ex_i,0,0);
    VL_OUT8(__PVT__ena_id_ex_o,0,0);
    VL_IN8(__PVT__rest_id_mem_id_ex_i,0,0);
    VL_OUT8(__PVT__rest_id_mem_id_ex_o,0,0);
    VL_IN8(__PVT__cunqu_hazard_id_ex_i,0,0);
    VL_OUT8(__PVT__cunqu_hazard_id_ex_o,0,0);
    VL_IN8(__PVT__id_mul_id_ex_i,0,0);
    VL_OUT8(__PVT__id_mul_id_ex_o,0,0);
    VL_IN8(__PVT__id_div_id_ex_i,0,0);
    VL_OUT8(__PVT__id_div_id_ex_o,0,0);
    VL_IN16(__PVT__csr_addr_id_ex_i,11,0);
    VL_OUT16(__PVT__csr_addr_id_ex_o,11,0);
    VL_IN(__PVT__s_imm_id_ex_i,31,0);
    VL_OUT(__PVT__s_imm_id_ex_o,31,0);
    VL_IN64(__PVT__pc_id_ex_i,63,0);
    VL_OUT64(__PVT__pc_id_ex_o,63,0);
    VL_IN64(__PVT__unknown_code_id_ex_i,63,0);
    VL_OUT64(__PVT__unknown_code_id_ex_o,63,0);
    VL_IN64(__PVT__alu_src1_id_ex_i,63,0);
    VL_IN64(__PVT__alu_src2_id_ex_i,63,0);
    VL_OUT64(__PVT__alu_src1_id_ex_o,63,0);
    VL_OUT64(__PVT__alu_src2_id_ex_o,63,0);
    VL_IN64(__PVT__id_inst,63,0);
    VL_OUT64(__PVT__ex_inst,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__reg_wen_id_ex_o;
    CData/*4:0*/ __Vdly__reg_waddr_id_ex_o;
    CData/*4:0*/ __Vdly__alu_op_id_ex_o;
    CData/*0:0*/ __Vdly__ebreak_flag_id_ex_o;
    CData/*7:0*/ __Vdly__wmask_id_ex_o;
    CData/*0:0*/ __Vdly__s_flag_id_ex_o;
    CData/*3:0*/ __Vdly__expand_signed_id_ex_o;
    CData/*2:0*/ __Vdly__rd_flag_id_ex_o;
    CData/*2:0*/ __Vdly__rd_buf_flag_id_ex_o;
    CData/*0:0*/ __Vdly__ena_id_ex_o;
    CData/*0:0*/ __Vdly__rest_id_mem_id_ex_o;
    CData/*0:0*/ __Vdly__cunqu_hazard_id_ex_o;
    CData/*0:0*/ __Vdly__id_mul_id_ex_o;
    CData/*0:0*/ __Vdly__id_div_id_ex_o;
    SData/*11:0*/ __Vdly__csr_addr_id_ex_o;
    IData/*31:0*/ __Vdly__s_imm_id_ex_o;
    QData/*63:0*/ __Vdly__pc_id_ex_o;
    QData/*63:0*/ __Vdly__unknown_code_id_ex_o;
    QData/*63:0*/ __Vdly__alu_src1_id_ex_o;
    QData/*63:0*/ __Vdly__alu_src2_id_ex_o;
    QData/*63:0*/ __Vdly__ex_inst;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_id_ex_regs);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_id_ex_regs(const char* name);
    ~Vysyx_22040175_top_id_ex_regs();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
