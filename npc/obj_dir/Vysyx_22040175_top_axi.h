// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_AXI_H_
#define VERILATED_VYSYX_22040175_TOP_AXI_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_axi) {
  public:

    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__rw_valid_i,0,0);
    VL_OUT8(__PVT__rw_ready_o,0,0);
    VL_IN8(__PVT__rw_req_i,0,0);
    VL_IN8(__PVT__rw_size_i,7,0);
    VL_IN8(__PVT__rw_burst,0,0);
    VL_IN8(__PVT__axi_aw_ready_i,0,0);
    VL_OUT8(__PVT__axi_aw_valid_o,0,0);
    VL_IN8(__PVT__axi_w_ready_i,0,0);
    VL_OUT8(__PVT__axi_w_valid_o,0,0);
    VL_OUT8(__PVT__axi_w_strb_o,7,0);
    VL_OUT8(__PVT__axi_w_last_o,0,0);
    VL_OUT8(__PVT__axi_b_ready_o,0,0);
    VL_IN8(__PVT__axi_b_valid_i,0,0);
    VL_IN8(__PVT__axi_ar_ready_i,0,0);
    VL_OUT8(__PVT__axi_ar_valid_o,0,0);
    VL_OUT8(__PVT__axi_ar_id_o,3,0);
    VL_OUT8(__PVT__axi_ar_len_o,2,0);
    VL_OUT8(__PVT__axi_ar_size_o,7,0);
    VL_OUT8(__PVT__axi_ar_burst_o,1,0);
    VL_OUT8(__PVT__axi_ar_cache_o,3,0);
    VL_OUT8(__PVT__axi_r_ready_o,0,0);
    VL_IN8(__PVT__axi_r_valid_i,0,0);
    VL_IN8(__PVT__axi_r_resp_i,1,0);
    VL_IN8(__PVT__axi_r_last_i,0,0);
    VL_OUT8(__PVT__r_done,0,0);
    VL_OUT8(__PVT__ar_hs,0,0);
    VL_IN8(__PVT__axi_r_id_i,3,0);
    VL_OUT8(__PVT__w_done,0,0);
    VL_OUT8(__PVT__b_hs,0,0);
    VL_IN(__PVT__rw_addr_i,31,0);
    VL_OUT(__PVT__axi_aw_addr_o,31,0);
    VL_OUT(__PVT__axi_ar_addr_o,31,0);
    VL_OUT64(__PVT__data_read_o,63,0);
    VL_IN64(__PVT__rw_w_data_i,63,0);
    VL_OUT64(__PVT__axi_w_data_o,63,0);
    VL_IN64(__PVT__axi_r_data_i,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__w_trans;
    CData/*0:0*/ __PVT__r_trans;
    CData/*0:0*/ __PVT__w_valid;
    CData/*0:0*/ __PVT__r_valid;
    CData/*0:0*/ __PVT__aw_hs;
    CData/*0:0*/ __PVT__w_hs;
    CData/*0:0*/ __PVT__r_hs;
    CData/*1:0*/ __PVT__w_state;
    CData/*1:0*/ __PVT__r_state;
    CData/*0:0*/ __PVT__w_state_idle;
    CData/*0:0*/ __PVT__w_state_addr;
    CData/*0:0*/ __PVT__w_state_write;
    CData/*0:0*/ __PVT__w_state_resp;
    CData/*0:0*/ __PVT__r_state_idle;
    CData/*0:0*/ __PVT__r_state_addr;
    CData/*0:0*/ __PVT__r_state_read;
    QData/*63:0*/ __PVT__axi_r_data_l;

    // LOCAL VARIABLES
    CData/*1:0*/ __Vdly__w_state;
    CData/*1:0*/ __Vdly__r_state;
    QData/*63:0*/ __Vdly__data_read_o;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_axi);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_axi(const char* name);
    ~Vysyx_22040175_top_axi();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
