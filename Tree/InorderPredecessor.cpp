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
node * newnode(int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node*  find(node * root,int data){ //O(h)
    if(root==NULL) return NULL;
    else if(root->data==data) return root;
    else if(data<=root->data) return find(root->left,data);
    else return find(root->right,data);
}
node * findmax(node* root){
    if(root==NULL){
        return NULL;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
node* GetPredecessor(node * root,int data){
    node* current=find(root,data);
      node * pre=NULL;
      if(current==NULL) return NULL;
      //case 1: left subtree present
      else if(current->left!=NULL){
        return findmax(current->left);
      }
      else{
        node * parent=NULL;
        node *child=root;
        while(child!=current){
        if(current->data>child->data){
            parent=child;
            child=child->right;
        }
        else child=child->left;
        }
        return parent;
      }
    
}
int main(){
    root=NULL;
    root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(12);
    root->left->left=newnode(5);
    root->left->right=newnode(9);   
    root->left->right->left=newnode(8);
    root->right->right=newnode(13);
    root->right->left=newnode(11);
    inorder(root);
    cout<<endl;
    node* x=GetPredecessor(root,11);
    cout<<x->data;
}