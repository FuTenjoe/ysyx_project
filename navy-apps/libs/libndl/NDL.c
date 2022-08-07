#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//自己加
#include <fcntl.h>
#include <assert.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
void get_screen();
//自己加
static int evt_fd = -1;
static FILE* fb = NULL, *fb_event = NULL,*fb_sync = NULL,*fb_dispinfo = NULL;
static int canvas_w = 0, canvas_h = 0;//记录打开的画布的大小
static uint32_t* canvas =NULL;
static int place_x = 0,place_y = 0;
//自己加
//static struct timeval now;
//#include "nanos-lite/include/fs.h"
//extern size_t fs_read(int fd, void *buf, size_t count);
//extern int fs_open(char* pathname, int flags, size_t mode);

uint32_t NDL_GetTicks() {
 /* sys_gettimeofday(&now,NULL);
  //printf("sec %d ms%d\n",now.tv_sec,now.tv_usec/1000);
  return now.tv_sec*1000+now.tv_usec/1000;*/
  return 0;
}
//自己加
int NDL_PollEvent(char *buf, int len) {
  //printf("读取键盘");
  
  /* int ret = fread(buf ,1,3,fp);
  fscanf(fp,"%s",buf+3); */
  //printf("%d\n",len);
  //int ret = fread(buf,1,len,fb);
  evt_fd = open("/dev/events", O_RDONLY);
  //printf("evt_fd = %d\n",evt_fd);
  // /dev/events
  ssize_t ret = read(evt_fd,buf,len);
  if(ret == 0) {
    //printf("ret = 0\n");
    return 0;}
  //printf("读取buf");
  for(int i = 0; i < len&&ret != 0;i++)
  {
    if(buf[i] == '\n') 
    {
      buf[i] = '\0';
      return 1;
    }
  }
  //return ret;
  return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  //自己加
  canvas = (uint32_t*)malloc(sizeof(uint32_t)*(*w)*(*h));
  memset(canvas,0,sizeof(canvas));
  //原有代码
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
 //参考代码
 /*int cp_bytes = (w < (128 - x)) ? w : 128-x;
  for(int j=0; j<32&&j<h;j++){
    for(int i=0;i<cp_bytes;i++){
      canvas[(y+j)*32+x+i] = *(pixels + i);;
    }
    pixels = pixels + cp_bytes;
  }
  for (int j=0; j<32; j++){
    fwrite((void*)(canvas+ j *w ),1,4*w,fb);
  }*/


}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
