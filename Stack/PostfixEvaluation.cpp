//evaluating postfix assuming input postfix will be correct
#include<iostream>
#include<stack>
#include<cstring>
#include<math.h>
using namespace std;
int per(char op,int a,int b){
    if(op=='+'){
        return(b+a);
    }
    else if(op=='-'){
        return(b-a);
    }
    else if(op=='*'){
        return(b*a);
    }
    else if(op=='/'){
        return(b/a);
    }
    else if(op=='^'){
        return(pow(a,b));
    }
    else{
        return -1;
    }
}
int evalpost(string expr,int n){
     stack<int> S;
     for(int i=0;i<n;i++){
        if(expr[i]>='0' && expr[i]<='9'){
            S.push(expr[i]-'0');
        }
        else if((expr[i]=='+')or(expr[i]=='-')or(expr[i]=='*')or(expr[i]=='/')or(expr[i]=='^')){
            int a,b,res;
            a=S.top();S.pop();
            b=S.top();S.pop();
            res=per(expr[i],a,b);
            S.push(res);
        }
     }
     return(S.top());
}

int main(){
    string expr;
    int c;
    cout<<"postfix expression evaluation\n";
    cout<<"Enter a valid postfix expression : ";
    cin>>expr;
    printf("output is : ");
    c=evalpost(expr,expr.length());
    printf("%d",c);
}