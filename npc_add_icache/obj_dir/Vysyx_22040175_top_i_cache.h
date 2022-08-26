// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_I_CACHE_H_
#define VERILATED_VYSYX_22040175_TOP_I_CACHE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_i_cache) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__cpu_req_valid,0,0);
    VL_OUT8(__PVT__cpu_ready,0,0);
    VL_OUT8(__PVT__mem_req_valid,0,0);
    VL_IN8(__PVT__mem_ready,0,0);
    VL_IN8(__PVT__mem_done,0,0);
    VL_IN64(__PVT__cpu_req_addr,63,0);
    VL_OUT64(__PVT__cpu_data_read,63,0);
    VL_OUT64(__PVT__mem_req_addr,63,0);
    VL_IN64(__PVT__mem_data_read,63,0);
    VL_OUTW(__PVT__cache_data[128],308,0,10);

    // LOCAL SIGNALS
    CData/*1:0*/ __PVT__state;
    CData/*1:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__hit;
    CData/*0:0*/ __PVT__hit1;
    CData/*0:0*/ __PVT__hit2;
    CData/*0:0*/ __PVT__way;
    CData/*6:0*/ __PVT__cpu_req_index;
    CData/*4:0*/ __PVT__cpu_req_offset;
    CData/*0:0*/ __PVT__shift_ready;
    CData/*4:0*/ __PVT__delay_cpu_req_offset;
    CData/*6:0*/ __PVT__delay_cpu_req_index;
    CData/*0:0*/ __PVT__dd_r_done;
    CData/*1:0*/ __PVT__test;
    CData/*3:0*/ __PVT__count;
    IData/*31:0*/ __PVT__i;
    QData/*51:0*/ __PVT__cpu_req_tag;
    QData/*63:0*/ __PVT__delay_cpu_req_addr;
    QData/*51:0*/ __PVT__delay_cpu_req_tag;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ __Vdly__state;
        CData/*0:0*/ __Vdly__dd_r_done;
        CData/*1:0*/ __Vdly__test;
        CData/*0:0*/ __Vdly__cpu_ready;
        CData/*0:0*/ __Vdly__mem_req_valid;
        CData/*6:0*/ __Vdlyvdim0__cache_data__v0;
        CData/*0:0*/ __Vdlyvset__cache_data__v0;
        CData/*3:0*/ __Vdly__count;
        CData/*0:0*/ __Vdly__shift_ready;
        CData/*6:0*/ __Vdlyvdim0__cache_data__v1;
        CData/*0:0*/ __Vdlyvset__cache_data__v1;
        CData/*0:0*/ __Vdlyvset__cache_data__v2;
        SData/*8:0*/ __Vdlyvlsb__cache_data__v0;
        SData/*8:0*/ __Vdlyvlsb__cache_data__v1;
        VlWide<4>/*116:0*/ __Vdlyvval__cache_data__v0;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v2;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v3;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v4;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v5;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v6;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v7;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v8;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v9;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v10;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v11;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v12;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v13;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v14;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v15;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v16;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v17;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v18;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v19;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v20;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v21;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v22;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v23;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v24;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v25;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v26;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v27;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v28;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v29;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v30;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v31;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v32;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v33;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v34;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v35;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v36;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v37;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v38;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v39;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v40;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v41;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v42;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v43;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v44;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v45;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v46;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v47;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v48;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v49;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v50;
    };
    struct {
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v51;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v52;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v53;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v54;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v55;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v56;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v57;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v58;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v59;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v60;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v61;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v62;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v63;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v64;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v65;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v66;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v67;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v68;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v69;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v70;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v71;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v72;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v73;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v74;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v75;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v76;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v77;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v78;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v79;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v80;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v81;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v82;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v83;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v84;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v85;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v86;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v87;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v88;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v89;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v90;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v91;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v92;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v93;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v94;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v95;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v96;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v97;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v98;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v99;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v100;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v101;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v102;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v103;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v104;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v105;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v106;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v107;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v108;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v109;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v110;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v111;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v112;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v113;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v114;
    };
    struct {
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v115;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v116;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v117;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v118;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v119;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v120;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v121;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v122;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v123;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v124;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v125;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v126;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v127;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v128;
        VlWide<10>/*308:0*/ __Vdlyvval__cache_data__v129;
        QData/*63:0*/ __Vlvbound1;
        QData/*63:0*/ __Vdly__delay_cpu_req_addr;
        QData/*63:0*/ __Vdly__cpu_data_read;
        QData/*63:0*/ __Vdlyvval__cache_data__v1;
        QData/*63:0*/ __Vdly__mem_req_addr;
    };

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_i_cache);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_i_cache(const char* name);
    ~Vysyx_22040175_top_i_cache();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
