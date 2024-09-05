#include<bits/stdc++.h>
using namespace std;


//Brute force approach: TC->O(n+d) SC->O(d)
void rotateByD(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}

void rotateByD2(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    rotateByD2(arr,n,2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}