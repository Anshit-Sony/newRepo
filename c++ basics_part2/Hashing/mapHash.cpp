#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,1,2,3};
    int n=5;

    map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    cout<<hash[2];
    return 0;
}