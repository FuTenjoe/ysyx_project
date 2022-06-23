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
VerilatedContext *contextp = new VerilatedContext;
  // init top verilog instance
Vysyx_22040175_top* top = new Vysyx_22040175_top;
  // init trace dump
VerilatedVcdC* tfp = new VerilatedVcdC;

vluint64_t main_time = 0;
const vluint64_t max_sim_time = 2000;
//Vysyx_22040175_top *top; 
int main(int argc, char **argv, char **env) {
  char* img_file = *(argv + 1);
  init_imem();
  long img_size = load_img(img_file);
  contextp -> commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  top->trace (tfp, 99);
  tfp->open ("Vysyx_22040175.vcd");
  top->inst = pmem_read(top->pc,8);
  npc_state = NPC_RUNNING;
  //while(!contextp -> gotFinish()){
  while(main_time < 10){
    if(ebreak_flag){
      printf("ebreak: program is finished !\n");
      npc_state = NPC_END;
      break;
    }
    if(main_time < 4){
      top->rst = 1;
      //init_difftest(img_size,port);
    }
    else{
      top->rst = 0;
    }
    if(main_time % 2 == 0){
      top->clk = 0;
      top->eval();
      printf("main_time = %ld\n",main_time);
      printf("PC:0x%0x;Inst:0x%x;\n",top->pc,top->inst);
    }
    if(main_time % 2 == 1){
      printf("main_time = %ld\n",main_time);
      top->clk = 1;
      top->eval();
    /*  if(main_time >= 3){
        difftest_step(top->pc);
      }*/
      printf("PC:0x%0x;Inst:0x%x;\n",top->pc,top->inst);

      if(unknown_code_flag || top->unknown_code){
        printf("Warning: An unknown Inst! pc: %x;Inst: %x\n",top->pc,top->inst);
        npc_state = NPC_ABORT;
        break;
      }
      //printf("a0: 0x%lx\n",cpu_gpr[10]); 
    }
      if(npc_state == NPC_ABORT){
        printf("false:ABORT!The false PC is 0x%0lx\n",cpu.pc);
        break;
      }
      cpu.pc = top ->pc;
      current_inst = top ->inst;
      top ->eval();
  tfp->dump(main_time);
  main_time++;

  }
    tfp->close();
    delete top;
    delete contextp;
    return is_exit_status_bad();
}