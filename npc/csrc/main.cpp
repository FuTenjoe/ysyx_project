#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"
#include <dlfcn.h>  //动态链接库相关函数
//加run和target
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0X2800000

typedef uint64_t word_t;
typedef  uint32_t paddr_t;
typedef  word_t vaddr_t;

static uint8_t *pimem =NULL;
void init_imem(){
  pimem = (uint8_t *) malloc(CONFIG_MSIZE);
  //printf("pimem _ success");
  assert(pimem);
}

uint8_t *guest_to_host(paddr_t paddr){
  uint8_t *tmpl = pimem + paddr -CONFIG_MBASE;
  //printf("guest to host success addr = %hhn\n",tmpl);
  return tmpl;
}
static inline word_t host_read(void *addr, int len) {
   //printf("host_read success addr");
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default:  return 0;
  }
}
static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
   //printf("pmem_read success addr");
  return ret;
}

static long load_img(char*img_file){
  if(img_file == NULL){
    printf("Error: No image is given !\n");
    assert(0);
    return 4096;
  }
  FILE *fp = fopen(img_file,"rb");
  assert(fp);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf("The image is %s, size = %ld\n", img_file,size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1,fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}
//加ebreak
typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

CPU_state cpu = {};

uint32_t ebreak_flag = 0;
extern "C" void ebreak(){
  ebreak_flag = 1;
}
















int port = 1234;
//Vysyx_22040175_top *top; 
int main(int argc, char **argv, char **env) {
  int i;
  int clk;
  //Verilated::commandArgs(argc, argv);
  VerilatedContext *contextp = new VerilatedContext;
  // init top verilog instance
  Vysyx_22040175_top* top = new Vysyx_22040175_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;

  top->trace (tfp, 99);
  tfp->open ("Vysyx_22040175.vcd");
  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  // run simulation for 100 clock periods
  char* img_file = *(argv + 1);
  
  printf("开始imem初始化\n");
  init_imem();
  long img_size = load_img(img_file);
  //init_difftest(img_size,port);
  for (i=0; i<500; i++) {
    top->rst = (i < 2);
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
  }
  int a = 0;
     if(top->clk==1){
      top->inst = pmem_read(top->curr_pc,8);
      a= a+1;
     }
     if (a>2){
       //difftest_step(top->curr_pc,top->next_pc);
     }

  }
  if (Verilated::gotFinish())  exit(0);
  tfp->close();
  exit(0);
}