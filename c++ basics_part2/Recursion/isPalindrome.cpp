#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i,int n){
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return isPalindrome(s,i+1,n);
}


int main(){
    cout<<isPalindrome("MADA",0,4);
    return 0;
}