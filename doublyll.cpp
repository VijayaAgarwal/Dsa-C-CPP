//inserting at head or tail of doubly linked list
//traversing it forward and backward
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head;
struct node* GetNewNode(int x){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=x;      //(*temp).data=x;
	newNode->prev=NULL;
	newNode->next=NULL;
	return newNode;
}
void insertAtHead(int x){
	struct node *newNode=GetNewNode(x);
	if(head==NULL){
		head=newNode;
		return;
	}
	head->prev=newNode;
	newNode->next=head;
	head=newNode; 
}
void insertAtTail(int x){
	struct node* newNode=GetNewNode(x);
	if(head==NULL){
		head=newNode;
		return;
	}
	struct node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
}
void print(){
	struct node* newNode=head;
	printf("Forward : ");
	while(newNode!=NULL){
		printf("%d",newNode->data);
		newNode=newNode->next;
	}
	printf("\n");
}
void reverseprint(){
	struct node* temp=head;
	if(temp==NULL)return;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	printf("Reverse: ");
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}

int main(){
	head=NULL;
	insertAtTail(2);print();reverseprint();
	insertAtHead(4);print();reverseprint();
	insertAtTail(6);print();reverseprint();
	insertAtHead(8);print();reverseprint();
	insertAtHead(1);
}
