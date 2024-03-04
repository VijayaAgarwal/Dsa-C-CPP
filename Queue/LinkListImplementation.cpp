#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
node *front=NULL,*rear=NULL;
void enqueue(int x){
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    if ((front==NULL)&&(rear==NULL)){
        front=rear=temp;
    }
    else{
        rear->next=temp; 
        rear=temp;
    }
}
void dequeue(){
    if(front==NULL)cout<<"empty queue"<<endl;
    node *temp1=front;
    if(front==rear){
        cout<<"element deleted is : ";
        cout<<front->data<<endl;
        free(front);
        front=rear=NULL;
    }    
    else{    
    cout<<"element deleted is : ";
    cout<<front->data<<endl;
    front=front->next;
    }
    free(temp1);
}
void peek(){
    cout<<"element at front : ";
    cout<<front->data;
}
void isempty(){
    if(front==NULL){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}
void print(){
    if(front==NULL) cout<<"empty queue";
    node * temp4=front;
    while(temp4!=NULL){
        cout<<temp4->data<<endl;
        temp4=temp4->next;
    }
    cout<<endl;
}
int main(){
    int choice,exit=0;
while(!exit){
    cout<<endl<< "Enter your choice :\n";
    cout<< "1.enqueue\n2.dequeue\n3.peek\n4.isempty\n5.print\n6.exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        int x;
        cout<<"Enter element :";
        cin>>x;
        enqueue(x);   
        break;
    case 2:
        dequeue();
        break;    
    case 3:
        peek();
        break;
    case 4:
        isempty();
        break;
    case 5:
        print();
        break;        
    case 6:
        printf("Bye...");
        exit=1; 
        break;   
    default:
        printf("\nwrong choice");
        break;
    }
}
}