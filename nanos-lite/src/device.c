#include <common.h>
//自己加库
#include <sys/time.h>


#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

//自己加一些函数
void set_state(int state);
#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
 // return 0;
 //自己加
 for (int i = 0; i < len; i++){
        putch(((char*)(buf))[i]);
      }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  //return 0;
  //自己加
  AM_INPUT_KEYBRD_T key = io_read(AM_INPUT_KEYBRD);
  //bool key_down = io_read(AM_INPUT_KEYBRD).keydown;
  //int key - io_read(AM_INPUT_KEYBRD).keycode;
  if(key.keycode == AM_KEY_NONE){
    return 0;
  }
  else {
    if(key.keydown){
      len = sprintf((char*)buf,"kd %s\n",keyname[key.keycode]);  //按下按键
    }
      //len = sprintf(buf,"t %u\n",io_read(AM_TIMER_UPTIME).us);
    else
      {len = sprintf((char*)buf,"ku %s\n",keyname[key.keycode]); } //松开按键
      //len = sprintf(buf,"t %u\n",io_read(AM_TIMER_UPTIME).us);
  }
  return len;
 
}
//自己加的变量
static char dispinfo[128] __attribute__((used));
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  //return 0;
  //自己加
  //memcpy(buf, &ramdisk_start + offset, len);
  int w = io_read(AM_GPU_CONFIG).width;
  int h = io_read(AM_GPU_CONFIG).height;
  printf(" dispinforead w=%d, h=%d\n",w,h);
  int ret = snprintf(buf,len,"WIDTH : %d HEIGHT : %d\n",w,h);
  return ret;
 
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  //return 0;
  //自己加
  //参考代码
  int w = io_read(AM_GPU_CONFIG).width;
  //int h = io_read(AM_GPU_CONFIG).height;
  int x = (offset)%w;
  int y = (offset)/w;
  printf("fb_write x=%d,y=%d\n",x,y);
  io_write(AM_GPU_FBDRAW,x,y,(uint32_t*)buf,400,300,true);
  return len;

}
int sys_gettimeofday(struct timeval *tz,struct timezone *tv)
{
  printf("time \n");
  tz->tv_sec = io_read(AM_TIMER_UPTIME).us /1000000;
  tz->tv_usec = io_read(AM_TIMER_UPTIME).us%1000000;
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
