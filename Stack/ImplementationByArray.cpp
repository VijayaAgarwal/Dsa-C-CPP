//implementation of stack by array
#include<stdio.h>
//#define MAX_SIZE 101
//int A[MAX_SIZE];
int x,top=-1;
void push(int x,int n,int *A){
    if(top==n-1){
        printf("Error : stack overflow\n\n");
        return;
    }
    A[++top]=x;
}
void pop(int *A){
    if(top==-1){
        printf("Error :No element to pop\n");
        return;
    }
    top--;
}
void print(int *A){
    int i;
    printf("Stack is : ");
    for(i=0;i<=top;i++){
        printf("%d",A[i]);
    }
    /*i=top;
    for(;i!=-1;i--)
        printf("%d",A[i]);
    */
    printf("\n");
    }
int Top(int *A){
    printf("Top is :\n ");
    printf("%d\n", A[top]);
}
int main(){
  int n,choice;
  printf("No. of elements in stack : \n");
  scanf("%d",&n);
  int A[n];
  /*push(2,n,&A[n]);print(&A[n]);Top(&A[n]);
  push(5,n,&A[n]);print(&A[n]);Top(&A[n]);
  pop(&A[n]);print(&A[n]);Top(&A[n]);*/
  int exit=1;
  while(exit!=0){
  printf("enter your choice: \n1.push\t2.pop\t3.showTop\t4.printStack\t5.exit\n");
  scanf("%d",&choice);
  switch(choice){
    case 1:
    int a;
    printf("enter no. to be pushed : ");
    scanf("%d",&a);
    push(a,n,&A[n]);
    print(&A[n]);
    printf("\nTop index is : %d",top);
    break;
    case 2:
    pop(&A[n]);
    printf("now stack is : \n");
    print(&A[n]);
    break;
    case 3:
    Top(&A[n]);
    print(&A[n]);
    break;
    case 4:
    print(&A[n]);
    break;
    case 5:
    exit=0;
    printf("BYE ...");
    break;
    default: 
    printf("wrong choice");
  }
  }
}