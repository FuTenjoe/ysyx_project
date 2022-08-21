#include <am.h>
#include <klib-macros.h>
//自己加
//#include <klib.h>
#include <riscv/riscv.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;
#ifndef SERIAL_PORT
#define SERIAL_PORT 0xa0003f8
#endif
void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
