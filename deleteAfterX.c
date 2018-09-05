# include<stdlib.h>
# include<stdio.h>

struct node{
    int data;
    struct node* next;
};
void deleteAfterX(int x,struct node* s){
     struct node* p=s;
     while(p->data!=x)
      p=p->next;
    p->next=p->next->next;
    free(p->next);
  }
