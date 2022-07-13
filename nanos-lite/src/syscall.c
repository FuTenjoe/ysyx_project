#include <common.h>
#include "syscall.h"
//自己加
//extern void yield();
//extern void halt(); 
extern size_t fs_read(int fd, void *buf, size_t count);
extern int fs_open(char* pathname, int flags, int mode);
size_t sys_write( int  fd, const void * buf,size_t count){
  Log("sys_write:fd=%d,count=%d\n",fd,count);
        if((fd == 1) | (fd == 2)){
          int i;
          for(i=0; i < count; i++){
            putch(((char*)buf)[i]);
          }
          return 0;
        }
        else return -1;
        //putch('o');
};
int sys_open(char* pathname, int flags, int mode){
  return fs_open(pathname,flags,mode);
};

size_t sys_read(int fd, void *buf, size_t count){
  return fs_read(fd, buf, count);
};

/*int fs_close(int fd){
  struct file * filp;
	if (fd >= NR_OPEN)
		return -EINVAL;
	// 清除close_on_exec标记，该标记表示fork+exec时关闭该文件
	current->close_on_exec &= ~(1<<fd);
	if (!(filp = current->filp[fd]))
		return -EINVAL;
	// 当前进程的文件描述符指针置空
	current->filp[fd] = NULL;
	if (filp->f_count == 0)
		panic("Close: file count is 0");
	// file结构引用数减一，非0说明还有其他进程或描述符在使用该结构，所以还不能释放file和inode
	if (--filp->f_count)
		return (0);
	// 没有进程使用了则释放该inode或需要回写到硬盘
	iput(filp->f_inode);
	return (0);
};*/
  
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;  //a7
  a[1] = c->GPR2;  //a0
  a[2] = c->GPR3;  //a1
  a[3] = c->GPR4;  //a2
  //a[4] = c->GPRx;
  printf("gpr return a0 = %lx\n",c->GPRx);
  switch (a[0]) {
    case 0:{
      halt(c->GPR1); 
      printf("gpr a0 = %lx\n",a[0]);
      break; //是否指向这个宏存疑，以及每个宏代表的寄存器
    }
    case 1:{
      yield();
      c->GPRx = 0;
      printf("gpr a0 = %lx\n",a[0]);
      break;
      }
    case 2:{
      c->GPRx=sys_open((char*)a[1],a[2],a[3]);
      break;
    }
    case 3:{
      c->GPRx=sys_read((int)a[1],(void*)a[2],(size_t)a[3]);
    }
    case 4:{
      printf("gpr a0 = %lx\n",a[0]);
      c->GPRx = sys_write((int)a[1],(void*)a[2],(size_t)a[3]);
      printf("gpr x = %lx\n",c->GPRx);
      break;
    }
    case 9:c->GPRx = 0;break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
