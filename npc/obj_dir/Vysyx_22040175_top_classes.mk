# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vysyx_22040175_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_22040175_top \
	Vysyx_22040175_top___024root \
	Vysyx_22040175_top_ysyx_22040175_top \
	Vysyx_22040175_top_ex_stage \
	Vysyx_22040175_top_id_stage \
	Vysyx_22040175_top_id_ex_regs \
	Vysyx_22040175_top_wb_stage \
	Vysyx_22040175_top_if_id_regs \
	Vysyx_22040175_top_mem_wb_regs \
	Vysyx_22040175_top_if_stage \
	Vysyx_22040175_top_ex_mem_regs \
	Vysyx_22040175_top_mem_stage \
	Vysyx_22040175_top_axi \
	Vysyx_22040175_top_alu \
	Vysyx_22040175_top_axi_judge \
	Vysyx_22040175_top_imm_gen \
	Vysyx_22040175_top_mux_alu \
	Vysyx_22040175_top_muxpc \
	Vysyx_22040175_top_axi_slave \
	Vysyx_22040175_top_id_control_rest \
	Vysyx_22040175_top_pc_predict \
	Vysyx_22040175_top_i_cache \
	Vysyx_22040175_top_id_rest \
	Vysyx_22040175_top_mux_dt_pipe \
	Vysyx_22040175_top_ctrl \
	Vysyx_22040175_top_div__N40_M40_NB7f \
	Vysyx_22040175_top_div__NB3f \
	Vysyx_22040175_top_mul \
	Vysyx_22040175_top_divider_cell__N7f_M40 \
	Vysyx_22040175_top_divider_cell__N3f_M20 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_22040175_top__ConstPool_0 \
	Vysyx_22040175_top___024root__Slow \
	Vysyx_22040175_top_ysyx_22040175_top__Slow \
	Vysyx_22040175_top_ex_stage__Slow \
	Vysyx_22040175_top_id_stage__Slow \
	Vysyx_22040175_top_id_ex_regs__Slow \
	Vysyx_22040175_top_wb_stage__Slow \
	Vysyx_22040175_top_if_id_regs__Slow \
	Vysyx_22040175_top_mem_wb_regs__Slow \
	Vysyx_22040175_top_if_stage__Slow \
	Vysyx_22040175_top_ex_mem_regs__Slow \
	Vysyx_22040175_top_mem_stage__Slow \
	Vysyx_22040175_top_axi__Slow \
	Vysyx_22040175_top_alu__Slow \
	Vysyx_22040175_top_axi_judge__Slow \
	Vysyx_22040175_top_imm_gen__Slow \
	Vysyx_22040175_top_mux_alu__Slow \
	Vysyx_22040175_top_muxpc__Slow \
	Vysyx_22040175_top_axi_slave__Slow \
	Vysyx_22040175_top_id_control_rest__Slow \
	Vysyx_22040175_top_pc_predict__Slow \
	Vysyx_22040175_top_i_cache__Slow \
	Vysyx_22040175_top_id_rest__Slow \
	Vysyx_22040175_top_mux_dt_pipe__Slow \
	Vysyx_22040175_top_ctrl__Slow \
	Vysyx_22040175_top_div__N40_M40_NB7f__Slow \
	Vysyx_22040175_top_div__NB3f__Slow \
	Vysyx_22040175_top_mul__Slow \
	Vysyx_22040175_top_divider_cell__N7f_M40__Slow \
	Vysyx_22040175_top_divider_cell__N3f_M20__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_22040175_top__Dpi \
	Vysyx_22040175_top__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_22040175_top__Syms \
	Vysyx_22040175_top__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
