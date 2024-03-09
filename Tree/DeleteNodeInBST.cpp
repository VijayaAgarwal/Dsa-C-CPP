#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data;
    node * left;
    node *right;
};
node * root;
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
node * findmin(node* root){
    while(root->left!=NULL){
        root=root->left;    
    }
    return root;
}

node * Delete(struct node *root,int data){
   if(root==NULL) return root;
   else if(data<root->data) 
    root->left=Delete(root->left,data);
   else if(data>root->data)
    root->right=Delete(root->right,data);
   else{
    //equal so root that is to be deleted is found
    //case1: no child
    if(root->left==NULL && root->right==NULL){
        delete root;
        root=NULL;
    }
    //case 2: one child
    else if(root->left==NULL){
        node * temp=root;
        root=root->right;
        delete temp; 
    }
    else if(root->right==NULL){
        node * temp=root;
        root=root->left;
        delete temp;
    }
    //case 3: 2 children
    else{
        node * temp=findmin(root->right);
        root->data=temp->data;
        root->right=Delete(root->right,temp->data);
    }
   } 
   return root; 
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int n;
    root=NULL;
    root=insert(root,12);
    root=insert(root,5);
    root=insert(root,15);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,13);
    root=insert(root,17);
    root=insert(root,1);
    root=insert(root,9);
    inorder(root);
    cout<<endl<<"enter no to be deleted : ";
    cin>>n;
    root=Delete(root,n);
    inorder(root);
}