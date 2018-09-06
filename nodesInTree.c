# include<stdio.h>
# include<stdlib.h>

struct BtNode{
   struct BtNode* lp;
   int data;
   struct BtNode* rp;
};
int nodesInTree(struct BtNode* root)
{
   if(root==NULL)
     return(0);
   else if(root->lp==NULL && root->rp==NULL)
     return(0);
     else{ xl=nodesInTree(root->lp);
           xr=nodesinTree(root->rp);
           return(1+xl+xr);}
