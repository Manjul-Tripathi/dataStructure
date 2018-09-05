# include<stdlib.h>
# include<stdio.h>
struct node{
    int data;
    struct node* next;
};
void insertAtBeg(int data,struct node* s)
{
   struct node* n=(node*)(malloc(sizeof(struct node*)));
   n->data=data;
   n->next=s;
   s=n;
   }
   void main(){
   .
   .//like as first program
   .
   .
   }
