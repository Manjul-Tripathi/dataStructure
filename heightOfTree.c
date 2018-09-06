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
int heightOfTree(struct BtNode* root){
    if(root==NULL)
    {printf("no tree exist");
    return(0);
}else if(root->lp==NULL&&root->rp==NULL){
    return (0);
}else{
    int lHeight=heightOfTree(root->lp);
    int rHeight=heightOfTree(root->rp);
    if(lHeight>rHeight)
        return(lHeight+1);
    else return(rHeight+1);
}
    }

void main(){
   struct BtNode* root=newNode(9);
   root->lp=newNode(5);
   root->rp=newNode(6);
   root->lp->lp=newNode(8);
   root->lp->rp=newNodet(7);
   root->rp->lp=newNode(2);
   root->rp->rp=newNode(1);
   root->lp->lp->lp=newNode(4);
   int height= heightOfTree(root);
   printf("height is:%d",height);
    getch();
}
