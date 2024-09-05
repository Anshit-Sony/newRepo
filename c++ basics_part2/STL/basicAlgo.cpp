#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={5,2,4,1,8,9};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);//sort the array in accending order
    sort(arr,arr+n,greater<int>());//sort the array in decending order

    int maxi=*max_element(arr,arr+n);
    cout<<maxi<<endl;

    // pair<int,int> a[]={{1,2},{3,4},{2,1}};
    // int n2=3;
    // sort(a,a+n,comp);//comp is a self defined bool function 
    // printArray(arr,n);

    // int num=7;
    // int cnt=__builtin_popcount(num);//gives the number of set bit in a number i.e no. of 1's 

    // long long num=111234322;
    // int cnt=__builtin_popcountll(num);//if the number is long long

    // cout<<cnt<<endl;

    // string s="123";
    // do{
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(),s.end()));


    return 0;
}