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
    string Infixexp="(A+B)*C-D+F";
    string prefixExp="";
    int n=Infixexp.size();
    reverse(Infixexp.begin(),Infixexp.end());

    for(int i=0;i<n;i++){
        if((Infixexp[i]>='A' && Infixexp[i]<='Z') || (Infixexp[i]>='a' && Infixexp[i]<='z'
        || (Infixexp[i]>='0' && Infixexp[i]<='9'))){
            prefixExp+=Infixexp[i];
        }
        else if(Infixexp[i]==')') stk.push(')');
        else if(Infixexp[i]=='('){
            while(!stk.empty() && stk.top()!=')'){
                prefixExp+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            while(!stk.empty() && priority(stk.top())>priority(Infixexp[i])){
                prefixExp+=stk.top();
                stk.pop();
            }
            stk.push(Infixexp[i]);
        }
    }

    while(!stk.empty()){
        prefixExp+=stk.top();
        stk.pop();
    }

    reverse(prefixExp.begin(),prefixExp.end());
    cout<<prefixExp<<endl;
    return 0;
}