//Implementing tree
//assumption : only positive values are inserted in the tree
#include<bits/stdc++.h>
using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right; 
};
BstNode *root;
BstNode *GetNewNode(int data){
    BstNode * newnode=new BstNode();
    newnode->data=data;//(*newnode).data=data
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
BstNode *insert(BstNode *root,int data){
    
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
bool Search(BstNode * root,int data){
    if(root==NULL) return false;
    else if(root->data==data) return true;
    else if(data<=root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

int FindMin(BstNode * root){
    if(root==NULL){
        cout<<"tree is empty "<<endl;
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
/* using recursion 
int FindMin(Bstnode * root){
    if(root==NULL){
        cout<<"tree is empty "<<endl;
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    return FindMin(root->left);
}
*/

int FindMax(BstNode* root){
    if(root==NULL){
        cout<<"tree is empty "<<endl;
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

int FindHeight(BstNode* root){
    int leftheight,rightheight;
    if(root==NULL) return -1;
    leftheight=FindHeight(root->left);
    rightheight=FindHeight(root->right);
    return max(leftheight,rightheight)+1;
}
int main(){
    root = NULL;
    int exit=0,choice;
    while (exit!=1){
        cout<<"Enter choice :"<<endl<<"1.insert"<<endl<<"2.search"<<endl
        <<"3.find minimum"<<endl<<"4.find maximum"<<endl<<
        "5.find height"<<endl<<"6.exit"<<endl;
        cin>>choice;
        switch (choice){
            case 1:
             int data;
             cout<<"enter data to be entered  : ";
             cin>>data;
             root=insert(root,data);
             break;
            case 2:
             int number;
             cout<<"enter number be searched : ";
             cin>>number;
             if(Search(root,number)==true)cout<<"Found\n";
             else cout<<"Not Found\n";
             break;
            case 3:
              cout<<"Minimum number in tree : ";
              cout<<FindMin(root)<<endl;
              break;
            case 4:
              cout<<"Maximum number in tree : ";
              cout<<FindMax(root)<<endl;
              break;  
            case 5:
             cout<<"height is : ";
             cout<<FindHeight(root)<<endl;
             break;  
            case 6:
             cout<<"bye..."<<endl;
             exit=1;
             break;
            default:
            cout<<"wrong choice"; 
        }
     }
}             