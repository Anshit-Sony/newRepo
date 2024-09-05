#include<iostream>
using namespace std;

int max_DandC(int arr[],int start,int end){
    if(start==end){
        return arr[start];
    }
    int mid=(start+end)/2;
    int left_max=max_DandC(arr,start,mid);
    int right_max=max_DandC(arr,mid+1,end);
    return max(left_max,right_max);
}
int min_DandC(int arr[],int start,int end){
    if(start==end){
        return arr[start];
    }
    int mid=(start+end)/2;
    int left_min=min_DandC(arr,start,mid);
    int right_min=min_DandC(arr,mid+1,end);
    return min(left_min,right_min);
}

int main(){
    int arr[]={9,3,6,1,7,2};
    cout<<max_DandC(arr,0,5)<<endl;
    cout<<min_DandC(arr,0,5)<<endl;
}