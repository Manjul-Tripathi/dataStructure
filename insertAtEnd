# include<stdlib.h>
# include<stdio.h>

struct node{
    int data;
    struct node* next;
};

void insertAtEnd(int data,struct node* s){
    struct node* n=(struct node*)(malloc(sizeof(struct node)));

    if(n==NULL){
     printf("unable to allocate memory\n");
     return;
    }
    else{
        n->data=data;
        n->next=NULL;
        struct node* p=s;
        while(p->next!= NULL)
            p=p->next;
        p->next=n;
    }
}

void printLL(struct node* s){
    struct node* p=s;
    while((p!=NULL)){
        printf(" \n %d ",p->data);
        p=p->next;
    }

}

void main(){
    struct node s[]={{5,s+1},{4,s+2},{8,s+3},{3,NULL}};
    int data=5;
     insertAtEnd(data,s);
     printLL(s);
     getch();
}
