#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}

int main(){
    int num=7789;
    int rev_num=reverse_num(num);
    cout<<rev_num<<endl;
    return 0;
}