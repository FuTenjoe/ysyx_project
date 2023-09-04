# "ysyx" project
This is "ysyx" project
you can run 
```bash
bash init.sh subproject-name
```
to init the code and the tutorial is
[lecture note]: https://docs.ysyx.org/schedule.html

This repository contains translations for "pa0" to "pa3" of the mentioned tutorial. 
 
## RISCV cpu code
The specific hardware code for the YSYX CPU design is located in the "npc" folder.
In the "vsrc" folder, you can find Verilog code that implements a single-core, five-stage pipelined RISC-V processor. This processor includes a multiplier and an instruction cache (ICache). 
## difftest
The "csrc" folder contains diff-test code, named "main.cpp." This difftest works by comparing the program counter (PC) and the values of 32 general-purpose registers after each clock cycle between NEMU(you can see its codes in nemu folder) and the CPU. It allows for precise debugging by identifying the cycles where errors occur in the hardware code.
## tests 
The test files are located in the "am-kernels/tests/cpu-tests" directory.
