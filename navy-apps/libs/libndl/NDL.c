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
  get_screen();
  if(*w == 0&&*h == 0) {
    canvas_w = screen_w;
    canvas_h = screen_h;
    *w = screen_w;
    *h = screen_h;
  }
  else {
    if(*h <= screen_h)
      canvas_h = *h;
    else canvas_h = screen_h;
    if(*w <= screen_w)
      canvas_w = *w;
    else canvas_w = screen_w;
  }
  /* if(canvas) {
    assert(0);
    free(canvas);
  }   */
  assert(canvas == NULL);
  canvas = (uint32_t*)malloc(sizeof(uint32_t)*(*w)*(*h));
  memset(canvas,0,sizeof(canvas));
  place_x = (screen_w - canvas_w)/2;
  place_y = (screen_h - canvas_h)/2;
  //printf("Open canvas h = %d w = %d   ",*w,*h);
  //printf("screen h = %d w = %d\n",screen_w,screen_h);


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
//参考代码加的函数get_screen()
void get_screen() {
  int w = 0,h = 0;
  assert(fb_dispinfo != NULL);
  char width[20]={0},height[20]={0},after[20]={0};
  //printf("1 %p\n",fp);
  fscanf(fb_dispinfo,"%s",width);
  if(width[strlen(width)-1] == ':')
  {
    //printf("1\n");
    fscanf(fb_dispinfo,"%d",&w);//WIDTH:  W
  }
  else if(width[strlen(width)-1] == 'H')
  {
    //printf("2\n");
    fscanf(fb_dispinfo,"%s",after);
    //printf("%s%s\n",width,after);
    strcat(width,after);
    fscanf(fb_dispinfo,"%d",&w);
  }//WIDTH   :   W
  else {
    w = 0;
    //printf("%d\n",strlen(width));
    for(int i = 0;i < strlen(width);i++)
    {
      if(width[i] > '9'||width[i] < '0') continue;
      w = w * 10+ width[i] - '0';
    }
  }//WIDTH:W

  fscanf(fb_dispinfo,"%s",height);
  if(height[strlen(height)-1] == ':')
    fscanf(fb_dispinfo,"%d",&h);//HEIGHT:   H
  else if(height[strlen(height)-1] == 'T')
  {
    fscanf(fb_dispinfo,"%s",after);
    strcat(height,after);
    fscanf(fb_dispinfo,"%d",&h);
  }//HEIGHT   :   H
  else {
    h = 0;
    for(int i = 0;i < strlen(height);i++)
    {
      if(height[i] > '9'||height[i] < '0') continue;
      h = h * 10+ height[i] - '0';
    }
  }//WIDTH:W
  screen_h = h;
  screen_w = w;
  return;
}




void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
 //参考代码
  assert(fb != NULL);
  if(h == 0||h > canvas_h)
    h = canvas_h;
  if(w == 0||w > canvas_w)
    w = canvas_w;
  for(int i = 0;i < h;i ++)
    for(int j = 0;j < w;j ++)
    {
      canvas[(y+i)*canvas_w+x+j] = pixels[i*w+j];
    }
  for(int i = 0;i < canvas_h;i ++)
  {
    //printf("seek %d color = %x\n",4*((i+place_y)*screen_w+place_x),*(canvas+i*canvas_w+canvas_w/2));
    fseek(fb,4*((i+place_y)*screen_w+place_x),SEEK_SET);
    fwrite((void*)(canvas+i*canvas_w),1,4*canvas_w,fb);
  }
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
