#include<bits/stdc++.h>
using namespace std;

int priority(char x){
    if(x=='^') return 3;
    else if(x=='*' || x== '/') return 2;
    else if(x== '+' || x=='-') return 1;
    else return 0;
}

int main(){
    stack<char> stk;
    string Infixexp="(a+b)*(c+d)";
    string postfixExp="";

    int n=Infixexp.size();
    for(int i=0;i<n;i++){
        if((Infixexp[i]>='A' && Infixexp[i]<='Z') || (Infixexp[i]>='a' && Infixexp[i]<='z'
        || (Infixexp[i]>='0' && Infixexp[i]<='9'))){
            postfixExp+=Infixexp[i];
        }
        else if(Infixexp[i]=='(') stk.push('(');
        else if(Infixexp[i]==')'){
            while(!stk.empty() && stk.top()!='('){
                postfixExp+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            while(!stk.empty() && priority(stk.top())>=priority(Infixexp[i])){
                postfixExp+=stk.top();
                stk.pop();
            }
            stk.push(Infixexp[i]);
        }
    }

    while(!stk.empty()){
        postfixExp+=stk.top();
        stk.pop();
    }

    cout<<postfixExp<<endl;
    return 0;
}