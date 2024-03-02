//converting infix to postfix without parenteheses
//and assuming correct infix is entered
#include<iostream>
#include<stack>
using namespace std;
bool hashigherprec(char c,char d){
    if(((d=='*')&&(c=='-'))or((d=='*')&&(c=='+'))
    or((d=='/')&&(c=='-'))or((d=='/')&&(c=='+'))
    or(d=='^')){
        return 0;
    }
    else {
        return 1;
    }
}
void inf2pos(string exp,int n){
    stack<char> S;
    string res;
    for(int i=0;i<=n;i++){
        if(exp[i]>='0' && exp[i]<='9'){
            res+=exp[i];
        }
        else if((exp[i]=='+')or(exp[i]=='-')or(exp[i]=='*')or(exp[i]=='/')or(exp[i]=='^')){
            while(!S.empty() && hashigherprec(S.top(),exp[i])){
                res+=S.top();
                S.pop();
            }
            S.push(exp[i]);
        }
    }
    while(!S.empty()){
        res+=S.top();
        S.pop();
    }
    cout<< res;
}
int main(){
    string exp;
    int c;
    cout << "Infix to Postfix conversion \n";
    cout <<"Enter a valid infix expression:" ;
    cin >> exp;
    inf2pos(exp,exp.length());

}