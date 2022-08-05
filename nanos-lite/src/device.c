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
  printf("fffhhh");
/*  int key = io_read(AM_INPUT_KEYBRD).keycode;
  bool key_down = io_read(AM_INPUT_KEYBRD).keydown;
  int flag = 0;
  if(key_down == true){
    flag = 1;
  }
  if(key != AM_KEY_NONE){
    if(flag)
      len = sprintf(buf,"kd %s\n",keyname[key]);  //按下按键
    else
      len = sprintf(buf,"ku %s\n",keyname[key]);  //松开按键
  }
  else{
    //len = sprintf(buf,"t %u\n",io_read(AM_TIMER_UPTIME).us);
    len = 0;
  }
  return len;*/
  //参考代码
 /* AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if(ev.keycode == AM_KEY_NONE){
    return 0;
  }
  else {
    //memset(buf,0,len);  //向buf中填充len个0
    if(ev.keydown){
      len = sprintf((char*)buf,"kd%s\n",keyname[ev.keycode]);
    }
    else len = sprintf((char*)buf,"ku%s\n",keyname[ev.keycode]);
    if(ev.keycode <= AM_KEY_PAGEDOWN && ev.keycode >= AM_KEY_ESCAPE && ev.keydown){
        len = sprintf(buf,"t %u\n",io_read(AM_TIMER_UPTIME).us);
    }
    return len;
  }*/
  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
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
