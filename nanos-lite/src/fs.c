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

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

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
#include "files.h"
};
//自己加
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
int open_i = 0;
int fs_open(char* pathname, int flags, size_t mode){
  for(int i=0; ;i++){
      assert(file_table[i].name!=NULL);
    if(strcmp(pathname,file_table[i].name)==0){
      file_table[i].open_offset = 0;
      open_i = i;
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
   Log("fs_read:fd=%d,open_offset=%d ,count=%d\n",fd,file_table[fd].open_offset,count);
   //if(lseek_offset <= file_table[fd].size)
    //参考代码
    Finfo *f = file_table + fd;
    int remain_bytes = f->size - f->open_offset;
    int bytes_to_read = (remain_bytes > count ? count : remain_bytes );

    
   size_t ret;
      ret = ramdisk_read(buf, f->disk_offset + f->open_offset, bytes_to_read);
      f->open_offset = f->open_offset + bytes_to_read;
      return ret ;
}
size_t fs_write( int  fd, const void * buf,size_t count){
  Log("fs_write:open_i=%d,fd=%d,open_offset=%d,count=%d\n",open_i,fd,file_table[open_i].open_offset,count);
  //assert(open_offset <= file_table[open_i].size);
/*  if(file_table[open_i].open_offset + count <= file_table[open_i].size){
    if((fd == 1) | (fd == 2)){
          int i;
          for(i=0; i < count; i++){
            putch(((char*)(buf))[i]);
          }
          //ramdisk_write(buf,file_table[open_i].open_offset,count);
          //file_table[open_i].open_offset = file_table[open_i].open_offset + count;
           return count;
        }
    else return -1;
  }
  else{
    if((fd == 1) | (fd == 2)){
          int i;
          for(i=0; i < file_table[open_i].size-file_table[open_i].open_offset; i++){
            putch(((char*)(buf))[i]);
            //ramdisk_write(buf,open_offset,file_table[open_i].size-open_offset);
          }
          //ramdisk_write(buf,file_table[open_i].open_offset,count);
          //file_table[open_i].open_offset = file_table[open_i].open_offset + count;
          return 0;
        }
    else return -1;
  }*/
  //参考代码
  Finfo *f = file_table + fd;
  int remain_bytes = f->size - f->open_offset;
  int bytes_to_write = (remain_bytes > count ? count : remain_bytes);
  switch(fd){
    case 1:
    case 2:
      for (int i = 0; i < count; i++){
        putch(((char*)(buf))[i]);
      }
    default:
      ramdisk_write(buf, f->disk_offset + f ->open_offset ,bytes_to_write);
      break;
  }
  
  f ->open_offset = f ->open_offset + bytes_to_write;
  return bytes_to_write;

};
void init_fs() {
  // TODO: initialize the size of /dev/fb
}
