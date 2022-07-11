#include <common.h>
#include "syscall.h"
//自己加
extern void yield();
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  switch (a[0]) {
    case -1:{
      yield();a[0] = 0;
      printf("a[0] = -1 ok");break;
      }
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
