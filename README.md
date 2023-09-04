# "一生一芯"工程项目
This is "ysyx" project
you can run 
```bash
bash init.sh subproject-name
```
to init the code and the tutorial is [实验讲义][lecture note].
[lecture note]: https://docs.ysyx.org/schedule.html

This repository contains code from "pa0" to "pa3" branches. 
The specific hardware code for the YSYX CPU design is located in the "npc" folder. 
##RISCV cpu code
In the "vsrc" folder, you can find Verilog code that implements a single-core, five-stage pipelined RISC-V processor. This processor includes a multiplier and an instruction cache (ICache). 
##difftest
The "csrc" folder contains diff-test code, named "main.cpp." This difftest works by comparing the program counter (PC) and the values of 32 general-purpose registers after each clock cycle between NEMU and the CPU. It allows for precise debugging by identifying the cycles where errors occur in the hardware code.
