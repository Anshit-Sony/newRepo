#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j){
        while(pivot>=arr[i] && i<h){
            i++;
        }
        while(pivot<arr[j] && j>l){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;
}

void quick_sort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,h);
    }
    return;
}


int main(){
    int arr[]={4,2,3,1,6,7};
    int n=sizeof(arr)/sizeof(int);
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}