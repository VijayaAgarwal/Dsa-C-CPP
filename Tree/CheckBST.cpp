#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node * left;
    node * right;
};
node * root;
int int_min=0,int_max=100;
bool IsSubtreeLesser(node * root,int value){
    if(root==NULL) return true;
    if(root->data<=value
    && IsSubtreeLesser(root->left,value)
    && IsSubtreeLesser(root->right,value))
    return true;

    else
    return false;
}

bool IsSubtreeGreater(node * root,int value){
    if(root==NULL) return true;
    if(root->data>value
    && IsSubtreeLesser(root->left,value)
    && IsSubtreeLesser(root->right,value))
    return true;

    else
    return false;
}
bool IsBST(node * root){
    if(root==NULL) return true;
   if(IsSubtreeLesser(root->left,root->data)
   && IsSubtreeGreater(root->right,root->data)
   && IsBST(root->left)
   && IsBST(root->right))
   return true;

   else
  return false;
}

bool IsBstUtil(node * root,int minvalue,int maxvalue){
    if(root==NULL) return true;
    if(root->data>minvalue 
    && root->data<maxvalue
    && IsBstUtil(root->left,minvalue,root->data)
    && IsBstUtil(root->right,root->data,maxvalue))
    return true;
    else
    return false;
}
bool IsBst(node * root){
    return IsBstUtil(root,int_min,int_max);
}
node * newnode(int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int main(){
  root=newnode(4);
  root->left=newnode(2);
  root->right=newnode(5);
  root->left->left=newnode(1);
  root->left->right=newnode(3);

cout<<"By Method 1: ";
  if(IsBst(root))
   cout<<"Is Bst"<<endl;
  else 
   cout<<"Not a Bst"<<endl;

cout<<"By Method 2: ";
  if(IsBST(root))
    cout<<"Is BST"<<endl;
  else
    cout<<"Not a BST"<<endl;      
}
