//evaluating prefix assuming input prefix will be correct
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
        return(pow(b,a));
    }
    else{
        return -1;
    }
}
int evalpre(string expr,int n){
     stack<int> S;
     for(int i=n-1;i>=0;i--){
        if(expr[i]>='0' && expr[i]<='9'){
            S.push(expr[i]-'0');
        }
        else if((expr[i]=='+')or(expr[i]=='-')or(expr[i]=='*')or(expr[i]=='/')or(expr[i]=='^')){
            int a,b,res;
            a=S.top();S.pop();
            b=S.top();S.pop();
            res=per(expr[i],b,a);
            S.push(res);
        }
     }
     return(S.top());
}

int main(){
    string expr;
    int c;
    cout<<"prefix expression evaluation\n";
    cout<<"Enter a valid prefix expression : ";
    cin>>expr;
    printf("output is : ");
    c=evalpre(expr,expr.length());
    printf("%d",c);
}