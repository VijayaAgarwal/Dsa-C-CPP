//level order traversal

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
};
node * root;
void levelorder(node *root){
     if(root==NULL) return;
     queue<node*> Q;
     Q.push(root);
     while(!Q.empty()){
        node * current=Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) Q.push(current->left);
        if(current->right!=NULL) Q.push(current->right);
        Q.pop();
     }
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
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,23);
    root=insert(root,54);
    root=insert(root,48);
    levelorder(root);
}
