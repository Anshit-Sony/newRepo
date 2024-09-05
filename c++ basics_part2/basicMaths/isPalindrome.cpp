#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int rev=0;
    int n1=n;
    while(n1>0){
        int rem=n1%10;
        rev=rev*10+rem;
        n1/=10;
    }
    if(rev==n) return true;
    return false;
}

int main(){
    int num=121;
    cout<<isPalindrome(num)<<endl;
    return 0;
}