//deleting node at given nth position 
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
int n;
void insert(int data);//insert the element at end of the list
void print();//print alll elements of the list
void delete1(int n);//delete node at position n

void delete1(int n){
	node* temp3=head;
	if(n==1){
		head=temp3->next;
		free(temp3);
		return;
	}
	int i;
	for(i=0;i<n-2;i++){
		temp3=temp3->next;
	}
	node* temp4=temp3->next;
	temp3->next=temp4->next;
    free(temp4);
}

void insert(int x){
	node* temp=new node();
	temp->data=x;
	temp->next=NULL;
	if (head==NULL){
		head=temp;
		return;
	}
	node* temp2=head;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next=temp;
}

void print(){
	node* temp5=head;
	while(temp5!=NULL){
		printf("%d",temp5->data);
		temp5=temp5->next;
	}
	printf("\n");
}
int main(){
	head=NULL;//empty list
	insert(2);
	insert(4);
	insert(6);
	insert(5);//list:2,4,6,5
	print();
	printf("enter element to be added :\n");
	scanf("%d",&n);
	insert(n);
	print();
	printf("enter a position to be deleted :");
	scanf("%d",&n);
	delete1(n);
	print();
	
}