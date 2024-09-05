#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,1,2,3};
    int n=5;

    int hash[*max_element(arr,arr+n)+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    cout<<hash[2];
    return 0;
}