#include <common.h>
#include "syscall.h"
//自己加
//extern void yield();
//extern void halt(); 
size_t write( int  fd, const void * buf,size_t count){
        if((fd == 1) | (fd == 2)){
          for(int i=0; i < count-1; i++){
            char* buf = (char *)malloc((count)*sizeof(buf));
            char out = *(buf+i);
              putch (out);
          }
          return 0;
        }
        else return -1;
      };
  
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //a[4] = c->GPRx;
  switch (a[0]) {
    case 1:{
      yield();a[0] = 0;break;
      }
    case 0:{
      halt(c->GPR2); break; //是否指向这个宏存疑，以及每个宏代表的寄存器
    }
    case 4:{
      write(a[1],&a[2],a[3]);
      a[0] = 0;
      break;
      //panic("Unhandled syscall ID = %d", a[0]);
    }
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
