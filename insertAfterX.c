# iclude<stdio.h>
# include<stdlib.h>
void insertAfterX(int data,int x,struct node* s)
{ 
   struct node* n=(struct node*)(malloc(sizeof(struct node)));
   struct node*p=s;
   while(p->data!=x)
    p=p->next;
    n->next=p->next;
    p->next=n;
}   
