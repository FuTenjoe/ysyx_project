#include <common.h>
#include "syscall.h"
//自己加
#include <sys/time.h>
#include <proc.h>
//#include <stdio.h>
//extern void yield();
//extern void halt(); 
extern size_t fs_read(int fd, void *buf, size_t count);
extern int fs_open(char* pathname, int flags, size_t mode);
extern int fs_close(int fd);
extern int fs_lseek(int fd, int offset, int whence);
extern size_t fs_write( int  fd, const void * buf,size_t count);
int sys_gettimeofday(struct timeval *tz,struct timezone *tv);
int sys_execve(char* filename,char * const argv[],char* const envp[]);
extern PCB *current;
extern void naive_uload(PCB *pcb, const char *filename);
void switch_boot_pcb();
//extern int gettimeofday(struct timeval *tv, struct timezone *tz)
//extern void* f_open(const char *pathname, const char *mode);
/*size_t sys_write( int  fd, const void * buf,size_t count){
  Log("sys_write:fd=%d,count=%d\n",fd,count);
  size_t ret;
        if((fd == 1) | (fd == 2)){
          int i;
          for(i=0; i < count; i++){
            putch(((char*)buf)[i]);
          }
          ret = 0;
        }
        else ret = -1
        //putch('o');
};*/

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;  //a7
  a[1] = c->GPR2;  //a0
  a[2] = c->GPR3;  //a1
  a[3] = c->GPR4;  //a2
  //a[4] = c->GPRx;
  //printf("gpr return a1 = %lx\n",a[0]);
  switch (a[0]) {
    case 0:{
      halt(c->GPR1); 
      //printf("gpr a0 = %lx\n",a[0]);
      break; //是否指向这个宏存疑，以及每个宏代表的寄存器
    }
    case 1:{
      yield();
      c->GPRx = 0;
      //printf("gpr a0 = %lx\n",a[0]);
      break;
      }
    case SYS_open:{
      //printf("在进程中打开\n");
      c->GPRx= fs_open((char *)a[1], (int)a[2], (size_t)a[3]);
      //printf("pathname is %d",(char *)a[1]);
      break;
    }
    case SYS_read:{
      //printf("读\n");
      c->GPRx=fs_read((int)a[1],(void *)a[2],(size_t)a[3]);
      //printf("gpr x = %lx\n",c->GPRx);
      //c->GPRx= 0;
      break;
    }
    case SYS_write:{
       //printf("写\n");
      //printf("gpr a0 = %lx\n",a[0]);
      c->GPRx = fs_write((int)a[1],(void*)a[2],(size_t)a[3]);
      //printf("gpr x = %ld\n",c->GPRx);
      break;
    }
    case SYS_lseek:{ 
      c->GPRx = fs_lseek((int)a[1],(int)a[2],(int)a[3]);
      //printf("返回偏移量 = %ld\n",c->GPRx);
      break;
    }
    case SYS_close:{
      //printf("关闭");
      c->GPRx = fs_close((int)a[1]);break;
    }
    case 9:c->GPRx = 0;break;     //堆区管理
    case SYS_gettimeofday:{
      printf("时间\n");
       c->GPRx = sys_gettimeofday((struct timeval *)a[1],(struct timezone *)a[2]);break;
    }
    
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


