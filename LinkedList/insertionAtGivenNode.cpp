//inserting a node at given nth position 
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;

void insert(int data,int n){
	node* temp1=new node();
	temp1->data=data;
	temp1->next=NULL;
	if(n==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	node* temp2=head;
	for(int i=0;i<n-2;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}

void print(){
	node *temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	head=NULL;//empty list
	insert(2,1);//list: 2
	insert(3,2);//list: 2,3
	insert(4,1);//list: 4,2,3
	insert(5,2);//list:4,5,2,3
	print();
	int x,n;
	/*printf("number to be entered :");
	scanf("%d",&x);
	printf("position ");
	scanf("%d",&n);
	insert(int x,int n);
	*/
}