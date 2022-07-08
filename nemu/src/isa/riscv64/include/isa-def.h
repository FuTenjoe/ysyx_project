#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
//自己加pa3.1实现自陷操作
  //uintptr_t sr[3]; //mepc,mcause,mstatus
  uintptr_t sr[4096]; //mstatus,mepc,mcause,空，空，mtvec
  //word_t mtvec;

} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
