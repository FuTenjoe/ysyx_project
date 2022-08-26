// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_PC_PREDICT_H_
#define VERILATED_VYSYX_22040175_TOP_PC_PREDICT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_pc_predict) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__control_rest,0,0);
    VL_OUT8(__PVT__ena,0,0);
    VL_IN8(__PVT__rest_id_mem,0,0);
    VL_IN8(__PVT__sig_jalr,0,0);
    VL_IN8(__PVT__id_mul,0,0);
    VL_IN8(__PVT__sh_fnsh_flag,0,0);
    VL_IN8(__PVT__id_div,0,0);
    VL_IN8(__PVT__div_finish,0,0);
    VL_IN8(__PVT__r_done,0,0);
    VL_OUT8(__PVT__if_valid,0,0);
    VL_IN8(__PVT__ar_hs,0,0);
    VL_IN8(__PVT__return_id,3,0);
    VL_OUT8(__PVT__if_send_id,3,0);
    VL_IN8(__PVT__mem_no_use,0,0);
    VL_IN8(__PVT__ex_rd_buf_flag,2,0);
    VL_IN8(__PVT__mem_res_valid,0,0);
    VL_IN8(__PVT__wb_res_valid,0,0);
    VL_IN8(__PVT__mret_flag,0,0);
    VL_IN8(__PVT__ecall_flag,0,0);
    VL_IN8(__PVT__w_start,0,0);
    VL_IN8(__PVT__cpu_ready,0,0);
    VL_IN64(__PVT__id_next_pc,63,0);
    VL_OUT64(__PVT__curr_pc,63,0);
    VL_IN64(__PVT__id_curr_pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__delay_sig_jalr;
    CData/*2:0*/ __PVT__present_state;
    CData/*2:0*/ __PVT__next_state;
    CData/*1:0*/ __PVT__md_add_pc;
    CData/*1:0*/ __PVT__md_present_state;
    CData/*1:0*/ __PVT__md_next_state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__ena;
    CData/*0:0*/ __Vdly__delay_sig_jalr;
    CData/*2:0*/ __Vdly__present_state;
    CData/*0:0*/ __Vdly__if_valid;
    CData/*3:0*/ __Vdly__if_send_id;
    CData/*1:0*/ __Vdly__md_present_state;
    CData/*1:0*/ __Vdly__md_add_pc;
    QData/*63:0*/ __Vdly__curr_pc;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_pc_predict);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_pc_predict(const char* name);
    ~Vysyx_22040175_top_pc_predict();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
