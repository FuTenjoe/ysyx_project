#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
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
int open_offset = 0;
int fs_open(char* pathname, int flags, size_t mode){
  for(int i=0; ;i++){
      assert(file_table[i].name!=NULL);
    if(strcmp(pathname,file_table[i].name)==0){
      //printf("fs_open success!");
      return i;
    }
  }
}

int fs_close(int fd){
    return 0;
}
size_t fs_offset(int fd){
  return file_table[fd].disk_offset;  //为了调整loader中的偏移量
}
int fs_lseek(int fd, int offset, int whence){
  int ret = 0;
  switch (whence)
  {
  case SEEK_SET: ret = offset;break;
  case SEEK_CUR: {
    assert(offset <= file_table[fd].size);
    ret = ret + offset;break;
  }
  case SEEK_END: ret = file_table[fd].size + offset;break;
  default: ret = -1;
  }
  printf("fs_lssek ret = %d\n",ret);
  open_offset = ret;
  return ret;
}
size_t fs_read(int fd, void *buf, size_t count){
   Log("fs_read:fd=%d,open_offset=%d ,count=%d\n",fd,open_offset,count);
   if(open_offset <= file_table[fd].size)
      return ramdisk_read(buf, file_table[fd].disk_offset+open_offset,count);
   else
      return -1;
}
size_t fs_write( int  fd, const void * buf,size_t count){
  Log("fs_write:fd=%d,open_offset=%d,count=%d\n",fd,open_offset,count);
        if((fd == 1) | (fd == 2)){
          int i;
          for(i=0; i < count; i++){
            putch(((char*)buf)[i]);
          }
          return i;
        }
        //else return ramdisk_write(buf,file_table[fd].disk_offset,count);
        else return ramdisk_write(buf,file_table[fd].disk_offset+open_offset,count);
        //putch('o');
};
void init_fs() {
  // TODO: initialize the size of /dev/fb
}
