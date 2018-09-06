# include<stdio.h>
# include<stdlib.h>

struct BtNode{
   struct BtNode* lp;
   int data;
   struct BtNode* rp;
};
struct BtNode* newNode(int data){
    struct BtNode* root=(struct BtNode*)(malloc(sizeof(struct BtNode)));
    root->lp=NULL;
    root->data=data;
    root->rp=NULL;
    return(root);
};
int leavesInTree(struct BtNode* root){
    if(root==NULL)
    {
    return(0);
}else if(root->lp==NULL&&root->rp==NULL){
    return (1);
}else{
    int lLeaves=leavesInTree(root->lp);
    int rLeaves=leavesInTree(root->rp);
    return(lLeaves+rLeaves);
}
    }

void main(){
   struct BtNode* root=newNode(9);
   root->lp=newNode(5);
   root->rp=newNode(6);
   root->lp->lp=newNode(8);
   root->lp->rp=newNode(7);
   root->rp->lp=newNode(2);
   root->rp->rp=newNode(1);
   root->lp->lp->lp=newNode(4);
   printf("number of leaves are:%d",leavesInTree(root));
    getch();
}
