#include <common.h>
#include "syscall.h"
//自己加
//extern void yield();
//extern void halt(); 
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  a[4] = c->GPRx;
  switch (a[0]) {
  /*  case 1:{
      yield();a[0] = 0;
      printf("a[0] = 1 ok");break;
      }
    case 0:{
      halt(c->GPR1);break;   //是否指向这个宏存疑，以及每个宏代表的寄存器
    }*/
    
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
