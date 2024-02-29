//reverse a string using linked list
#include<iostream>
#include<stack>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node* head;
void reverse(){
    if(head==NULL)return;
    stack<struct node*> S;
    node* temp=head;
    while(temp!=NULL){
        S.push(temp);
        temp=temp->next;
    }
    node *temp4=S.top();
    head=temp4;
    S.pop();
    while(!S.empty()){
        temp4->next=S.top();
        S.pop();
        temp4=temp4->next;
    }
    temp4->next=NULL;
}
void insert(int x){
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    if (head==NULL)head=temp;
    else{
        node* temp1=head;
        while(temp1->next!=NULL)
           temp1=temp1->next;
        temp1->next=temp;   
    }
}
void print(){
    node* temp2=head;
    while(temp2!=NULL){
        printf("%d",temp2->data);
        temp2=temp2->next;
    }
    printf("\n");
}
int main(){
    head=NULL;
    insert(2);
    insert(4);
    insert(6);
    printf("Before Reverse : ");
    print();
    reverse();
    printf("After Reverse : ");
    print();

}