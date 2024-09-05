#include<bits/stdc++.h>
using namespace std;


int main(){
    int num=11;
    int count=0;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            count++;
            if(num!=i){
                count++;
            }
        }
    }
    if(count==2) cout<<"prime"<<endl;
    else cout<<"not prime"<<endl;
    return 0;
}