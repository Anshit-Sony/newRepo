#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);

    //Binary Search--O(logn)
    bool isPresent=binary_search(arr,arr+n,3);
    cout<<isPresent<<endl;// 1 i.e true

    //LowerBound--O(logn)
    //it is also used for searching
    int num1=lower_bound(arr , arr+n , 4)-arr;//return the index of first occurrence of number
    //if the number is not present then it returns the immediate greater number
    cout<<num1<<endl; 

    //upper_bound---O(logn)
    int num2=upper_bound(arr,arr+n,4)-arr;//returns the index of the value immediate greater than the value
    cout<<num2-1<<endl;//4 i.e index of the number and if multiple then the last
    return 0;
}