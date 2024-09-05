#include<bits/stdc++.h>
using namespace std;

string postfixToPrefix(string s){
    stack<string> st;
    int n=s.size();
    int i=0;
    while(i<n){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'
        || (s[i]>='0' && s[i]<='9'))){
            st.push(string(1,s[i]));
        }else{
            string t1=""+st.top();
            st.pop();
            string t2=""+st.top();
            st.pop();
            st.push(string(s[i]+t2+t1));
        }
        i++;
    }
    return st.top();
}

int main(){
    cout<<postfixToPrefix("AB-DE+F*/");
}