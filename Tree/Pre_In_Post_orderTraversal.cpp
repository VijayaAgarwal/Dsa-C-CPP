//preorder traversal

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
};
node * root;
void preorder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node *GetNewNode(int data){
    node * newnode=new node();
    newnode->data=data;//(*newnode).data=data
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node *insert(node *root,int data){
    
    if(root==NULL){
       root=GetNewNode(data);
        return root;
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}
int main(){
    root=insert(root,45);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,15);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,23);
    root=insert(root,54);
    root=insert(root,48);
    cout<<"Pre order : ";
    preorder(root);
    cout<<endl<<"In order : ";
    inorder(root);
    cout<<endl<<"Post order : ";
    postorder(root);
}
