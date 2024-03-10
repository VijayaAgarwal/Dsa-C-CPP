#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* root;
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node*  find(node * root,int data){ //O(h)
    if(root==NULL) return NULL;
    else if(root->data==data) return root;
    else if(data<=root->data) return find(root->left,data);
    else return find(root->right,data);
}
node* findmin(node* root){
    if(root==NULL) return NULL;
        while(root->left!=NULL) root=root->left;
        return root;
}
node * GetSuccessor(node* root,int data){
      node* current=find(root,data);
      if(current ==NULL) return NULL;
      //case 1: node has right subtree O(h)
      if(current->right!=NULL){
        return findmin(current->right);
      }
      //case2: no right subtree O(h)
      else{
        node * successor=NULL;
        node * ancestor=root;
        while(ancestor!=current){
            if(current->data<ancestor->data){
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else
              ancestor=ancestor->right;
        }                      
        return successor;
      }
}
node * newnode(int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int main(){
    root=NULL;
    root=newnode(5);
    root->left=newnode(2);
    root->right=newnode(8);
    root->left->left=newnode(1);
    root->left->right=newnode(3);
    root->right->right=newnode(10);
    root->right->left=newnode(7);
    inorder(root);
    cout<<endl;
    node* x=GetSuccessor(root,5);
    cout<<x->data;
}