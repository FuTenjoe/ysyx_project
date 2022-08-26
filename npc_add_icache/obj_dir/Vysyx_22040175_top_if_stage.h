// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_IF_STAGE_H_
#define VERILATED_VYSYX_22040175_TOP_IF_STAGE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;
class Vysyx_22040175_top_pc_predict;
class Vysyx_22040175_top_axi_judge;
class Vysyx_22040175_top_i_cache;
class Vysyx_22040175_top_axi;
class Vysyx_22040175_top_axi_slave;


//----------

VL_MODULE(Vysyx_22040175_top_if_stage) {
  public:
    // CELLS
    Vysyx_22040175_top_pc_predict* __PVT__u_pc_predict;
    Vysyx_22040175_top_axi_judge* __PVT__u_axi_judge;
    Vysyx_22040175_top_i_cache* __PVT__u_i_cache;
    Vysyx_22040175_top_axi* __PVT__u_axi;
    Vysyx_22040175_top_axi_slave* __PVT__u_axi_slave;

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_OUT8(__PVT__ena,0,0);
    VL_IN8(__PVT__control_rest,0,0);
    VL_IN8(__PVT__rest_id_mem,0,0);
    VL_IN8(__PVT__sig_jalr,0,0);
    VL_IN8(__PVT__id_mul,0,0);
    VL_IN8(__PVT__sh_fnsh_flag,0,0);
    VL_IN8(__PVT__id_div,0,0);
    VL_IN8(__PVT__div_finish,0,0);
    VL_IN8(__PVT__mem_valid,0,0);
    VL_IN8(__PVT__mem_send_id,3,0);
    VL_OUT8(__PVT__ar_hs,0,0);
    VL_OUT8(__PVT__delay_r_done,0,0);
    VL_OUT8(__PVT__axi_ar_id_o,3,0);
    VL_IN8(__PVT__mem_no_use,0,0);
    VL_IN8(__PVT__ex_rd_buf_flag,2,0);
    VL_IN8(__PVT__mem_res_valid,0,0);
    VL_IN8(__PVT__waxi_valid,0,0);
    VL_IN8(__PVT__reg_write_wmask,7,0);
    VL_IN8(__PVT__wb_res_valid,0,0);
    VL_IN8(__PVT__axi_req,0,0);
    VL_OUT8(__PVT__w_done,0,0);
    VL_OUT8(__PVT__b_hs,0,0);
    VL_IN8(__PVT__mret_flag,0,0);
    VL_IN8(__PVT__ecall_flag,0,0);
    VL_IN8(__PVT__w_start,0,0);
    VL_OUT(__PVT__inst,31,0);
    VL_IN64(__PVT__id_next_pc,63,0);
    VL_OUT64(__PVT__curr_pc,63,0);
    VL_IN64(__PVT__id_pc,63,0);
    VL_IN64(__PVT__mem_addr,63,0);
    VL_OUT64(__PVT__rdata,63,0);
    VL_IN64(__PVT__reg_write_addr,63,0);
    VL_IN64(__PVT__reg_write_data,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__rw_ready_o;
    CData/*0:0*/ __PVT__axi_ar_ready_i;
    CData/*0:0*/ __PVT__axi_ar_valid_o;
    CData/*0:0*/ __PVT__axi_r_ready_o;
    CData/*0:0*/ __PVT__axi_r_valid_i;
    CData/*1:0*/ __PVT__axi_r_resp_i;
    CData/*0:0*/ __PVT__axi_r_last_i;
    CData/*0:0*/ __PVT__if_valid;
    CData/*3:0*/ __PVT__if_send_id;
    CData/*0:0*/ __PVT__axi_valid;
    CData/*3:0*/ __PVT__axi_id;
    CData/*0:0*/ __PVT__r_done;
    CData/*0:0*/ __PVT__axi_aw_ready_i;
    CData/*0:0*/ __PVT__axi_aw_valid_o;
    CData/*0:0*/ __PVT__axi_w_ready_i;
    CData/*0:0*/ __PVT__axi_w_valid_o;
    CData/*7:0*/ __PVT__axi_w_strb_o;
    CData/*0:0*/ __PVT__axi_w_last_o;
    CData/*0:0*/ __PVT__axi_b_ready_o;
    CData/*0:0*/ __PVT__axi_b_valid_i;
    CData/*0:0*/ __PVT__rw_burst;
    CData/*7:0*/ __PVT__axi_ar_len_o;
    CData/*2:0*/ __PVT__axi_ar_size_o;
    CData/*1:0*/ __PVT__axi_ar_burst_o;
    CData/*0:0*/ __PVT__cpu_ready;
    CData/*0:0*/ __PVT__mem_req_valid;
    CData/*0:0*/ __PVT__dd_r_ready_o;
    CData/*0:0*/ __PVT__d_r_ready_o;
    CData/*0:0*/ __PVT__delay_rw_burst;
    QData/*63:0*/ __PVT__axi_ar_addr_o;
    QData/*63:0*/ __PVT__axi_r_data_i;
    QData/*63:0*/ __PVT__axi_addr;
    QData/*63:0*/ __PVT__axi_aw_addr_o;
    QData/*63:0*/ __PVT__axi_w_data_o;
    QData/*63:0*/ __PVT__rw_addr_i;
    QData/*63:0*/ __PVT__instruction;
    QData/*63:0*/ __PVT__mem_req_addr;

    // LOCAL VARIABLES
    CData/*7:0*/ __Vcellout__u_axi__axi_ar_size_o;
    CData/*2:0*/ __Vcellout__u_axi__axi_ar_len_o;
    CData/*0:0*/ __Vcellinp__u_axi__rw_valid_i;
    CData/*7:0*/ __Vcellinp__u_axi_slave__axi_ar_size_i;
    CData/*2:0*/ __Vcellinp__u_axi_slave__axi_ar_len_i;
    CData/*0:0*/ __Vdly__delay_r_done;
    CData/*0:0*/ __Vdly__delay_rw_burst;
    CData/*0:0*/ __Vdly__d_r_ready_o;
    CData/*0:0*/ __Vdly__dd_r_ready_o;
    IData/*31:0*/ __Vcellinp__u_axi_judge__pc;
    IData/*31:0*/ __Vcellout__u_axi__axi_ar_addr_o;
    IData/*31:0*/ __Vcellout__u_axi__axi_aw_addr_o;
    IData/*31:0*/ __Vcellinp__u_axi__rw_addr_i;
    IData/*31:0*/ __Vcellinp__u_axi_slave__axi_ar_addr_i;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_if_stage);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_if_stage(const char* name);
    ~Vysyx_22040175_top_if_stage();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
