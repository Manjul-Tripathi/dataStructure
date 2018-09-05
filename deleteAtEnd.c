# include<stdlib.h>
# include<stdio.h>
struct node{
    int data;
    struct node* next;
};
void deleteAtEnd(struct node* s){
   struct node* p=s;
   while(p->next->next!=NULL)
      p=p->next;
      free(p->next);
      p->next=NULL:
}      
