#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdlib.h>

#include <memory/paddr.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUM,TK_HEX,TK_REG,DEREF,
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-",'-'},            //decrease
  {"\\*",'*'},          //multiply 
  {"/",'/'},            //divide
  {"\\(",'('} ,         //left parenthesis    
  {"\\)",')'} ,         //right parenthesis 
  {"(0x[0-9a-fA-F]+)",TK_HEX},
  {"([1-9][0-9]{1,31})|[0-9]",TK_NUM},
  {"==", TK_EQ},        // equal
  
  {"(\\$[0a-zA-Z]+)|([a-zA-Z][0-9]+)|([a-zA-Z][a-zA-Z]+)",TK_REG},
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
int cal;
word_t isa_reg_str2val(const char *s, bool *success);
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
      
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
		
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);
        position += substr_len;
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
	
        switch (rules[i].token_type) {
        	case '+':
		case '-':
		case '*':
		case '/':
		case '(':
		case ')':
		case TK_NUM:
		case TK_REG:
		case TK_HEX:
	       {
		tokens[nr_token].type = rules[i].token_type;
		strncpy(tokens[nr_token].str,substr_start,substr_len);
		tokens[nr_token++].str[substr_len] = '\0';
		break;
		}
		case TK_NOTYPE:
			break;
          	default: TODO();
        }
	break;
    }
	
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
    }
  }
	cal=nr_token;
  return true;
}
	





bool check_parentheses(Token *p,Token *q){
	int count = 0;
	int sign = 0;

	for (Token *iter_p=p;iter_p<q;iter_p++) {
		if (iter_p->type=='(')
			count++;
		else if (iter_p->type==')')
			count--;
		if (count==0)
			sign=1;
	}
	if (q->type==')')
		count--;
	if (sign==0 && count==0 && (p->type=='(' && q->type==')'))
		return true;
	return false;
}
   
Token* pos_mop(Token *p,Token *q){
	int is_inP=0;
    int sign=0; 
	Token *pos_mod=NULL;
	

	for (Token *iter_p=p;iter_p<=q;iter_p++) {
	
		if (iter_p->type=='(') {
			is_inP++;
			continue;
		}
		if (iter_p->type==')') {
			is_inP--;
			continue;
		}
		if (is_inP!=0)continue;
		
		if (iter_p->type!='+' && iter_p->type!='-' 
		   && iter_p->type!='*' && iter_p->type!='/')
			continue;
        if (sign<=1 && (iter_p->type=='+' || iter_p->type=='-')){
			pos_mod=iter_p;
			sign=1;
		}
		else if (sign<=0 && (iter_p->type=='*' || iter_p->type=='/')){
			pos_mod=iter_p;
			printf("zhuyunsuanfu %d",pos_mod->type);
			}
	}

	return pos_mod;
}
bool *success;
int eval(Token *p,Token *q){
	if(p->type== TK_REG){
	 	char sh[128];
		sprintf(sh,"%d",p->type);
	/*	printf(" zhixiang%s",p->str);*/
		return isa_reg_str2val(p->str, success);
		
			}
	else if(p->type== DEREF){
		return printf("zhizhenzhi %ld",paddr_read((int)atoi(p->str), 4));
			
		}
	else{
      if (p == q) 
        return (int)atoi(p->str);	
  	else if (check_parentheses(p, q ) == true)
    	return eval(p + 1, q - 1);
  	else {
		int val1=1,val2;
		if(p->type != TK_REG){
		Token *op = pos_mop(p, q);
		val1 = eval(p, op - 1);
		val2 = eval(op + 1, q);
		switch (op->type) {
			case '+': return val1 + val2;
			case '-': return val1 - val2;
			case '*': return val1 * val2;
			case '/': return val1 / val2;
			
			}
			
    		}
	}
	return 0;
	}
	
}





word_t expr(char *e, bool *success) {

  if (!make_token(e)) {
    *success = false;
    return 0;
  }
   else{
   for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '*') ) {
    tokens[i].type = DEREF;
    *success = true;
  }
  }
  /* Token *p1 = NULL;
   p1 = tokens;
   Token *q1 = NULL;
   q1 = tokens+cal-1;
   *success = true;
   return  eval(p1,q1);
  for (unsigned int i = 0; i < cal; i++){
  	for(int j=0;j<32;j++)
              tokens[i] .str[j]= '\0' ;   }*/
  
   return eval(tokens,tokens+cal-1);
   for (unsigned int i = 0; i < cal; i++){
  	for(int j=0;j<32;j++)
              tokens[i] .str[j]= '\0' ; }
   
  }
  
  }

  /* TODO: Insert codes to evaluate the expression. */

