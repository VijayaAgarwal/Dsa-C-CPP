#include<iostream>
using namespace std;
#define max_size 101
int arr[max_size];
int front=-1;
int rear=-1;
void enqueue(int x){
     if((front==-1)and(rear==-1)){
        front=0;
        rear=0;
        arr[rear]=x;
     }
     else{
        rear+=1;
        if(rear<max_size)
        arr[rear]=x;
        else
        printf("queue overflow\n");
     }
}
void dequeue(){
    if((front==-1)and(rear==-1)) 
       cout<<"Queue is empty";
    else if((front==0) and(rear==0)){
        printf("element deleted is = %d\n",arr[front]);
        front=-1;
        rear=-1;
    } 
    else{  
    printf("element deleted is = %d\n",arr[front]);
    front+=1;
    }
}
void peek(){
   printf("Element on front is %d\n",arr[front]);
}
void isempty(){
    if((front==-1)and(rear=-1))
    cout<<"empty queue\n";
    else
    cout<<"not empty\n";
}
void display(){
    cout<<"Queue is : ";
    for(int i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int choice,exit=0;
while(!exit){
    cout<< "Enter your choice :\n";
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
        display();
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