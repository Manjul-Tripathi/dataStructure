# include<stdlib.h>
# include<stdio.h>

struct node{
    int data;
    struct node* next;
};
void deleteAtFirst(struct node* s){
    struct node* p=s;
    s=s->next;
    free(p);
  }
