#include<bits/stdc++.h>
using namespace std;

void pName(int n){
    if(n==0) return;
    cout<<"Abinash"<<endl;
    n--;
    pName(n);
}
void pNum(int n,int a){
    if(n==0) return;
    cout<<a<<endl;
    a++;
    n--;
    pNum(n,a);
}
void pNumBT(int i,int n){
    if(i==0) return;
    pNumBT(i-1,n);
    cout<<i<<endl;
}
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    // pName(5);
    // pNum(5,1);
    // pNumBT(5,5);
    // cout<<sum(200)<<endl;
    // cout<<factorial(10)<<endl;
    return 0;
}