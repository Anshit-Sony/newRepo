#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int arm=0;
    int n1=n;
    while(n1>0){
        int rem=n1%10;
        arm+=rem*rem*rem;
        n1/=10;
    }
    if(arm==n) return true;
    return false;
}

int main(){
    int num=121;
    cout<<isArmstrong(371)<<endl;
    return 0;
}