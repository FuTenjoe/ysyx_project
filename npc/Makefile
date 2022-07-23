#加入spike

all:
	@echo "Write this Makefile by your self."
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(clean)
	verilator -Wno-UNOPT --trace -cc $(wildcard ./vsrc/*.v) --exe ./csrc/main.cpp -LDFLAGS -ldl --top ysyx_22040175_top
	make -C obj_dir -j -f Vysyx_22040175_top.mk Vysyx_22040175_top
	./obj_dir/Vysyx_22040175_top $(IMG)
	gtkwave ./obj_dir/Vysyx_22040175.vcd
.PHONY:clean sim
#verilator -Wno-lint --trace -cc $(wildcard ./vsrc/*.v) --exe ./csrc/main.cpp -LDFLAGS -ldl --top ysyx_22040175_top
clean:
	rm -rf .obj_dir
include ../Makefile
#include ./vsrc/Makefile
