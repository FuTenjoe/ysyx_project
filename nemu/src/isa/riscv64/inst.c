#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_R,TYPE_B,
  TYPE_N,TYPE_J // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }

static word_t immJ(uint32_t i) { return SEXT(((BITS(i, 31, 31)<<20) + (BITS(i, 30, 21)<<1) + (BITS(i,20,20)<<11) + (BITS(i,19,12)<<12)) , 21); }
static word_t immB(uint32_t i) { return SEXT(((BITS(i, 31, 31)<<12) + (BITS(i,30,25)<<5) +(BITS(i,11,8)<<1) + (BITS(i,7,7)<<11)), 13); }

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);//截取位
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;// 用于将译码结果记录到相应的操作数变量中  immmI 用于从指令中抽取出立即数
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_R: src1R(rs1); src2R(rs2); break;
    case TYPE_B: src1R(rs1); src2R(rs2); destI(immB(i)); break;
    case TYPE_J: src1I(immJ(i)); break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}


INSTPAT_START();//INSTPAT(模式字符串, 指令名称, 指令类型, 指令执行操作);

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2 ?1:0),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT((src1 - src2),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT((src1 + src2),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );   // 需要进一步研究
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT((src1 << src2),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) ); //需要进一步研究
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT((src1 * src2),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = (src1 * src2),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT(((BITS(src1,31,0)) / (BITS(src2,31,0))),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT(((BITS(src1,31,0)) % (BITS(src2,31,0))),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = (SEXT(src1,32) >> src2);printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ((long int)src1 < (long int)src2 ?1:0),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = (BITS(src1,31,0))>>src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  //后加
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu ,   R, R(dest) = src1 % (unsigned int)src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10))  );
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu ,   R, R(dest) = src1 / (unsigned int)src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10))  );
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor ,    R,  R(dest) = src1 ^ src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw ,  R, R(dest) = SEXT(BITS(BITS(src1,31,0) /BITS(src2,31,0),31,0),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw ,  R, R(dest) = SEXT(BITS(src1 % (unsigned int)src2,31,0),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );

  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT((src1 << src2),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2 ,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1+src2,4),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = BITS(Mr((src1+src2),1),7,0),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2)?1:0,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT((src1 + src2),32),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10))); 
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)),printf("R(1) is:%lx\n",R(1)));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2, 2),16),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = ((long int)src1 >> BITS(src2,5,0));printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = (src1 << src2),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = (src1 >> src2);printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10))); 
  INSTPAT("000000? ????? ????? 101 ????? 00110 11", srlw   , I, R(dest) = ((BITS(src1,31,0)) >> src2);printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = SEXT(Mr((src1+src2),2),64);printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = (SEXT(src1,32)) >> BITS(src2,5,0) ;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  //后加
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori ,    I, R(dest) = src1|SEXT(BITS(src2,11,0),12),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb ,    I, R(dest) = SEXT(BITS(Mr(src1 + src2, 1),7,0),8 ),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );



  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));  
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));


  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if((long int)src1 ==(long int)src2) s->dnpc = s->dnpc + dest -4;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if((long int)src1 !=(long int)src2) s->dnpc = s->dnpc + dest -4;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if((long int)src1 >=(long int)src2) s->dnpc = s->dnpc + dest -4;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if((long int)src1 <(long int)src2)  s->dnpc = s->dnpc + dest -4;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if(src1 < src2)  s->dnpc = s->dnpc + dest -4;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu  ,  B, s->dnpc = (src1 >= src2) ? s->pc + dest :  s->pc+4,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));


  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->dnpc; s->dnpc = s->dnpc + src1 -4;printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, word_t t = s->dnpc; s->dnpc = ((src1)+src2);R(dest)=t,printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)) );

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10)),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc),printf("current pc is %lx ",s->pc),printf("R(10) is:%lx\n",R(10)));


  INSTPAT_END();  

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);//译码
}

