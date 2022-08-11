#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB,FD_EVENTS,FD_DISPINFO};
//自己加
size_t events_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
  [FD_FB] = {"/dev/fb", 0, 0, invalid_read,fb_write},
  [FD_EVENTS] = {"/dev/events", 0, 0,events_read,invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo",128,0,dispinfo_read,invalid_write},      //参考加的
#include "files.h"
};
//自己加
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);

int open_i = 0;
int fs_open(char* pathname, int flags, size_t mode){
  for(int i=0;i<1000;i++){
      assert(file_table[i].name!=NULL);
    if(strcmp(pathname,file_table[i].name)==0){
      file_table[i].open_offset = 0;
      open_i = i;
      assert(file_table[i].name!=NULL);
      return i;
    }
  }
  panic("No such file: %s",pathname);
}

int fs_close(int fd){
    return 0;
}
size_t fs_offset(int fd){
  return file_table[fd].disk_offset;  //为了调整loader中的偏移量
}
int fs_lseek(int fd, int offset, int whence){
  Finfo *f = file_table + fd;
  int new_offset = f->open_offset;
  int file_size = file_table[fd].size;
  switch (whence)
  {
  case SEEK_SET: new_offset = offset;break;
  case SEEK_CUR: new_offset = new_offset + offset;break;
  case SEEK_END: new_offset = file_table[fd].size + offset;break;
  default: assert(0);
  }
  if(new_offset <0){
    new_offset = 0;
  }
  else if(new_offset > file_size){
    new_offset = file_size;
  }
  f->open_offset = new_offset;
  //printf("fs_lssek ret = %d\n",file_table[fd].open_offset);
  
  return new_offset;
}
size_t fs_read(int fd, void *buf, size_t count){
   //Log("fs_read:fd=%d,open_offset=%d ,count=%d\n",fd,file_table[fd].open_offset,count);
   //if(lseek_offset <= file_table[fd].size)
    //参考代码
    Finfo *f = file_table + fd;
    int remain_bytes = f->size - f->open_offset;
    int bytes_to_read = (remain_bytes > count ? count : remain_bytes );

    
   size_t ret;
      if(fd == FD_EVENTS){
      ret = f->read(buf, f->disk_offset + f->open_offset, bytes_to_read);
      //events_read(buf, f->disk_offset + f->open_offset, bytes_to_read);
      f->open_offset = f->open_offset + bytes_to_read;
      }
      else if(fd== FD_DISPINFO){
        //ret = f->read(buf, f->disk_offset + f->open_offset, bytes_to_read);
        ret = 0;
      }
      else{
      ret = ramdisk_read(buf, f->disk_offset + f->open_offset, bytes_to_read);
      f->open_offset = f->open_offset + bytes_to_read;
      }
      
      return ret ;
}
size_t fs_write( int  fd, const void * buf,size_t count){
  Log("fs_write:open_i=%d,fd=%d,open_offset=%d,count=%d\n",open_i,fd,file_table[open_i].open_offset,count);
  //参考代码
  Finfo *f = file_table + fd;
  int remain_bytes = f->size - f->open_offset;
  int bytes_to_write = (remain_bytes > count ? count : remain_bytes);
  switch(fd){
    case FD_STDOUT:
    case FD_STDERR:
      for (int i = 0; i < count; i++){
        putch(((char*)(buf))[i]);
        break;
      }
    case FD_FB:{
      f ->size = fb_write((uint32_t*)buf,f->open_offset,bytes_to_write);
      printf("f->open_offset = %d\n",f->open_offset);
      printf("f->size2 = %d\n",f->size);
    }
    default:
      ramdisk_write(buf, f->disk_offset + f ->open_offset ,bytes_to_write);
      break;
  }
  f ->open_offset = f ->open_offset + bytes_to_write;
  return bytes_to_write;
}



void init_fs() {
  // TODO: initialize the size of /dev/fb
  int w = io_read(AM_GPU_CONFIG).width;
  int h = io_read(AM_GPU_CONFIG).height;
  //int w = 120;
  //int h = 120;
  file_table[FD_FB].size = w*h*4;    //参考，为什么是4？
  printf("sizew = %d",w);
  //assert(file_table[FD_SYNC].write != NULL);
}
