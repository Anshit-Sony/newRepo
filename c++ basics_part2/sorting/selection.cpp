#include<bits/stdc++.h>
using namespace std;

void sel_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
    }
}


int main(){
    int arr[]={4,2,3,1,6,7};
    int n=sizeof(arr)/sizeof(int);
    sel_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}