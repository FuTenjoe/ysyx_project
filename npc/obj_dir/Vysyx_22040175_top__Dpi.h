// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ctrl.v:760:30
    extern void ebreak();
    // DPI import at vsrc/if_stage.v:25:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/wb_stage.v:73:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/wb_stage.v:68:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ctrl.v:770:30
    extern void unknown_inst();

#ifdef __cplusplus
}
#endif
