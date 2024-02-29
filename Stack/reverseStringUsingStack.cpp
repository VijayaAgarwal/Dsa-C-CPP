//reverse a string using stack
#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
/*class Stack
{
    private:
      char A[101];
      int top;
    public:
      void push(int x);
      void pop();
      int Top();
      bool isempty();
}*/
void reverse(char C[],int n){ //char *C
    stack<char> S;             // Stack S;
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    for(int i=0;i<n;i++){
        C[i]=S.top();
        S.pop();
    }
}
int main(){
    char C[51];
    printf("Enter a string : ");
    gets(C);
    reverse(C,std::strlen(C));
    printf("Output : %s",C);
}