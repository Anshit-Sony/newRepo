#include<bits/stdc++.h>
using namespace std;

int findSecondLargestElem(vector<int> &arr,int n){
    int max=INT_MIN;
    int sec_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            sec_max=max;
        }
        else if(arr[i]<max && arr[i]>sec_max){
            sec_max=arr[i];
        }
    }
    return sec_max;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=findSecondLargestElem(arr,n);
    cout<<max<<endl;
}