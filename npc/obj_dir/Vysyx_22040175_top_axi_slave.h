// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_AXI_SLAVE_H_
#define VERILATED_VYSYX_22040175_TOP_AXI_SLAVE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_axi_slave) {
  public:

    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_OUT8(__PVT__axi_ar_ready_o,0,0);
    VL_IN8(__PVT__axi_ar_valid_i,0,0);
    VL_IN8(__PVT__axi_ar_id_i,3,0);
    VL_IN8(__PVT__axi_ar_len_i,2,0);
    VL_IN8(__PVT__axi_ar_size_i,7,0);
    VL_IN8(__PVT__axi_ar_burst_i,1,0);
    VL_IN8(__PVT__axi_r_ready_i,0,0);
    VL_OUT8(__PVT__axi_r_valid_o,0,0);
    VL_OUT8(__PVT__axi_r_resp_o,1,0);
    VL_OUT8(__PVT__axi_r_last_o,0,0);
    VL_OUT8(__PVT__axi_r_id_o,3,0);
    VL_IN8(__PVT__r_valid,0,0);
    VL_IN8(__PVT__axi_req,0,0);
    VL_OUT8(__PVT__axi_aw_ready_o,0,0);
    VL_IN8(__PVT__axi_aw_valid_i,0,0);
    VL_OUT8(__PVT__axi_w_ready_o,0,0);
    VL_IN8(__PVT__axi_w_valid_i,0,0);
    VL_IN8(__PVT__axi_w_strb_i,7,0);
    VL_IN8(__PVT__axi_w_last_i,0,0);
    VL_IN8(__PVT__axi_b_ready_i,0,0);
    VL_OUT8(__PVT__axi_b_valid_o,0,0);
    VL_IN(__PVT__axi_ar_addr_i,31,0);
    VL_OUT64(__PVT__axi_r_data_o,63,0);
    VL_IN64(__PVT__axi_aw_addr_i,63,0);
    VL_IN64(__PVT__axi_w_data_i,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__ar_hs;
    CData/*0:0*/ __PVT__r_hs;
    CData/*0:0*/ __PVT__aw_hs;
    CData/*0:0*/ __PVT__w_hs;
    CData/*0:0*/ __PVT__b_hs;
    CData/*1:0*/ __PVT__w_state;
    CData/*1:0*/ __PVT__r_state;
    CData/*0:0*/ __PVT__r_state_idle;
    CData/*0:0*/ __PVT__r_state_addr;
    CData/*0:0*/ __PVT__r_state_read;
    CData/*0:0*/ __PVT__w_state_idle;
    CData/*0:0*/ __PVT__w_state_addr;
    CData/*0:0*/ __PVT__w_state_write;
    CData/*0:0*/ __PVT__w_state_resp;
    CData/*0:0*/ __PVT__r_done;
    CData/*0:0*/ __PVT__w_done;
    CData/*2:0*/ __PVT__count;
    QData/*63:0*/ __PVT__rdata;

    // LOCAL VARIABLES
    CData/*1:0*/ __Vdly__w_state;
    CData/*1:0*/ __Vdly__r_state;
    CData/*0:0*/ __Vdly__axi_r_last_o;
    CData/*1:0*/ __Vdly__axi_r_resp_o;
    CData/*2:0*/ __Vdly__count;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__1__rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;
    QData/*63:0*/ __Vdly__axi_r_data_o;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_axi_slave);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_axi_slave(const char* name);
    ~Vysyx_22040175_top_axi_slave();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
