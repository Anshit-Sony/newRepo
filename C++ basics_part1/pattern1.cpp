#include<iostream>
using namespace std;

int main(){
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }

        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=i;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}