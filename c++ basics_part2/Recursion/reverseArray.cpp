#include<bits/stdc++.h>
using namespace std;

void rev_arr(int a[],int i,int n){
    if(i>=n) return;
    swap(a[i] , a[n]);
    rev_arr(a,i+1,n-1);
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    rev_arr(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}