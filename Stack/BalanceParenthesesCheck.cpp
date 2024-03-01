#include<iostream>
#include<stack>
using namespace std;

bool balparcheck(string exp,int n){
    stack<char> S;
      for (int i=0;i<n;i++){
        if ((exp[i]=='(')or(exp[i]=='{')or(exp[i]=='[')){
                 S.push(exp[i]);
        }
        else if((exp[i]==')')or(exp[i]=='}')or(exp[i]==']')){
            if (S.empty()){
                return false;
            }
            else if((S.top()=='(' && exp[i]==')')
                          ||(S.top()=='{' && exp[i]=='}')
                          ||(S.top()=='[' && exp[i]==']')){
                S.pop();
            }
        }
      } 
      return S.empty()?true:false; 
    
}

int main(){
    string exp;
    cout<<"Enter string : ";
    cin>>exp;
    if(balparcheck(exp,exp.length())){
        cout<<" Balanced ";
    }
    else{
        cout<<"Not Balanced";
    }
}