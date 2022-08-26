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
    // DPI import at vsrc/wb_stage.v:177:30
    extern void ebreak();
    // DPI import at vsrc/axi_slave.v:185:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/axi_slave.v:194:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/wb_stage.v:164:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ctrl.v:953:30
    extern void unknown_inst();

#ifdef __cplusplus
}
#endif
