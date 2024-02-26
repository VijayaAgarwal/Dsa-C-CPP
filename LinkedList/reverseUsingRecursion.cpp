#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
struct node* insert(struct node* head,int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)head=temp;
	else{
		struct node* temp1=head;
		while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=temp;
	}
	return head;
}
void reverse(struct node* p){
	if(p->next==NULL){ //exit condition 
		head=p;
		return;
	}
	reverse(p->next);
	struct node* q=p->next;//p->next->next=p
	q->next=p;
	p->next=NULL;
}
void print(struct node* p){
	if(p==NULL)return;
	printf("%d",p->data);
	print(p->next);
}

int main(){
	head=NULL;
	head=insert(head,2);
	head=insert(head,4);
	head=insert(head,6);
	head=insert(head,5);
	print(head);
	printf("\n");
	reverse(head);
	print(head);
}