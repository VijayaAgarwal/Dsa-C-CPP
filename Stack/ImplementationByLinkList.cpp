//linked list implementation of stack
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void push(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node *temp;
    if(top==NULL) return;
    temp=top;
    top=top->next;
    free(temp);
}
void print(){
    struct node* temp=top;
    printf("stack is : ");
    if(temp==NULL)return;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void isempty(){
    if (top==NULL){
        printf("stack is empty\n");
    }
    else{
    printf("stack is not empty\n");
    }
}
int main(){
    isempty();
    pop();
    push(2);print();
    push(6);print();
    isempty();
    push(7);print();
    push(3);print();
    pop();print();
}