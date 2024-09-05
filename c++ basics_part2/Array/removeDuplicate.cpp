#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& arr){
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int> arr={1,1,1,2,2,3,4};
    int r=removeDuplicate(arr);
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}