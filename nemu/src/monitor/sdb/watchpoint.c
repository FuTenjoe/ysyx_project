#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

/*void init_wp_pool(){}; */
void init_wp_pool(){
   head = NULL;
   free_= &wp_pool[0];
   for(int i=0;i<32;i++){
     wp_pool[i].NO=i;
     if(i<31){
     wp_pool[i].next=&wp_pool[i+1];
       }
    else
     wp_pool[i].next=NULL;
    
    }	
} 

WP* new_wp(char * exp){
	assert(free_ != NULL);
	WP *temp = free_;
	free_ = free_->next;
	temp->next = NULL;

	bool *wsuccess = false;
	strcpy(temp->exp, exp);
	temp->value = expr(temp->exp, wsuccess);
	
	/*assert(*wsuccess);*/

	if(head==NULL)
		head = temp;
	else{
		WP *p = head;
		while(p->next)
			p = p->next;
		p->next = temp;
	}
	return temp;
}

void free_wp(int no){
   WP *p = head;
   if(head == NULL){                                                                                                                                          
       printf("监视点列表为空。 \n");
       assert(0);
   }
   else if(p->NO == no){
       head = head->next;
       p->value = 0;
       p->next = free_;
       free_ = p;
       printf("已经删除第%d个监视点。\n", no);
      // free(p);
       return;
   }
   else{
       WP *q = head;
       p = p ->next;
       while(p!=NULL){
           if (p->NO == no){
               q->next = p->next;
               p->value = 0;
               p->next = free_;
               free_ = p;
               printf("已经删除第%d个监视点。\n", no);
        //       free(p);free(q);
               return;
           }
           else{
               p = p -> next;
               q = q -> next;
       }
   }
   printf("不存在第%d个监视点。\n",no);
   return;
}
}

void print_wp(){
    WP *p = head;
    if(p ==NULL){
        printf("监视点为空！\n");
        return;
    }
    else{
        while(p!=NULL){
            printf("监视点序号%d   表达式%s 值0x%08x\n",p->NO , p->exp, p->value);
            p=p->next;
        }
        return;
    }
    return;
} 
bool *expr_q;
bool wp_check(){	
   for(int i=0;i<free_->NO-1;i++){
      
     char new_ = expr(wp_pool[i].exp,expr_q);
     char* new = &new_;
     int new_value = atoi(new);
      if(wp_pool[i].value==new_value){
          wp_pool[i].value = new_value;
          return 1;
        }
      else
          return 0;
   }
   return 0;
}




