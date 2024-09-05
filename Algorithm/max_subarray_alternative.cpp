#include<iostream>
using namespace std;

int subArray(int num[],int n){
    int maxsum=num[0];
    int currsum=0;
    for(int i=0;i<n;i++){
        if(currsum<0){
            currsum=0;
        }
        currsum+=num[i];
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}

int main(){
    int arr[]={-1,2,6,3,-4,-8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<subArray(arr,n);
}