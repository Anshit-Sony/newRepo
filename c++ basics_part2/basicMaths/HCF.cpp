#include<bits/stdc++.h>
using namespace std;

//this is euclidean algorithm
int gcd(int a ,int b){
    while(a>0 && b>0){
        if(a>b) a%=b;
        else b%=a;
    }
    if(a==0) return b;
    return a;
}

int main(){
    int n1=20;
    int n2=40;
    //bruteforce
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            cout<<i<<endl;
            break;
        }     
    }

    cout<<gcd(n1,n2)<<endl;
    return 0;
}