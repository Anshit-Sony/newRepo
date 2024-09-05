//Time complexity:
//worst,Avg- O(n2)
//best- O(n)

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}


int main(){
    int arr[]={4,2,3,1,6,7};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}