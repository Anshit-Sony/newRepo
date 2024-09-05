#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c){
    return max(max(a,b),c);
}

int crossSum(int arr[],int m,int l,int h){
    int sum=0;
    int left_sum=INT_MIN;
    for(int i=m;i>=l;i--){
        sum+=arr[i];
        if(sum>left_sum){
            left_sum=sum;
        }
    }

    sum=0;
    int right_sum=INT_MIN;
    for(int i=m;i<=h;i++){
        sum+=arr[i];
        if(sum>right_sum){
            right_sum=sum;
        }
    }

    return max(left_sum+right_sum-arr[m],left_sum,right_sum);
}
int maxSubarraySum(int arr[],int l,int h){
    if(l>h){
        return INT_MIN;
    }
    if(l==h){
        return arr[l];
    }
    int m=(l+h)/2;
    return max(maxSubarraySum(arr,l,m-1),maxSubarraySum(arr,m+1,h),crossSum(arr,m,l,h));
}
int main(){
    int arr[]={-1,2,6,3,-4,8,9};
    cout<<maxSubarraySum(arr,0,6);
    return 0;
}