#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//自己加
#include <fcntl.h>
#include <assert.h>
#include <sys/time.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
//自己加
static int evt_fd = -1;
//static FILE* fb = NULL, *fb_event = NULL,*fb_sync = NULL,*fb_dispinfo = NULL;
int canvas_w = -1, canvas_h = -1;//记录打开的画布的大小
static uint32_t* canvas =NULL;
static int place_x = 0,place_y = 0;
//static struct timeval boottime;

uint32_t NDL_GetTicks() {

  //return 0;
  struct timeval now = {2,6};
  printf("now.tv_sec = %d\n",now.tv_sec);
  gettimeofday(&now,NULL);
  uint32_t ticks = now.tv_sec*1000 + now.tv_usec/1000;
  printf("now.tv_sec = %d\n",now.tv_sec);
  return ticks;
}
//自己加
int NDL_PollEvent(char *buf, int len) {
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
 //后加
  int fd = open("/proc/dispinfo",O_RDONLY);
  char buf[128] = {0};
  read(fd,&buf,sizeof(buf));
  printf("buf[100] = %s\n",buf);
 //printf("NDL\n");
  //screen_w = *w; screen_h = *h;
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
  if(*w == 0 || *h ==0){
      sscanf(buf,"%*[^:]:%*[ ]%d\n%*[^:]:%*[ ]%d\n",&canvas_w,&canvas_h);
      printf("NDL_OpenCanvas w is %d h is %d\n",canvas_w,canvas_h);
      *w = canvas_w;
      *h = canvas_h;
    }
    else{
      canvas_w = *w;
      canvas_h = *h;
      printf("NDL_OpenCanvas w is %d h is %d\n",canvas_w,canvas_h);

    }
    sscanf(buf,"%*[^:]:%*[ ]%d\n%*[^:]:%*[ ]%d\n",&screen_w,&screen_h);
    printf("Finish OPENCANVAS!\n");
  //close(fd);
}
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  printf("NDL_Drawrect\n");
  int fd =open("/dev/fb",O_RDWR);
  printf("NDL_DrawRect w is %d h is %d\n",canvas_w,canvas_h);
  int offset = (y >=0 ? y:0)*screen_w + (x>=0 ? x: 0);
  int len;
  if(x>=0){
    len = (x + w < canvas_w ) ? w: canvas_w -x;
  }
  else {
    len = (x + w < canvas_w) ? x+w : canvas_w;
  }
  printf("len= %d\n",len);
  int  cnt_r = 0;
  for(int i=0; i<h; i++){
    //printf("drawing2\n");
    if(y+i>=0 && y+i < canvas_h){
      lseek(fd,offset*4 + cnt_r*screen_w*4,SEEK_SET);
      //printf("offset = %d",offset + cnt_r*canvas_w*4);
      write(fd,pixels+i*canvas_w,len*4);
      //printf("writing\n");
      cnt_r++;
    }
    else printf("error");
  }
  printf("Finish DRAWRECT!\n");
  //close(fd);
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
