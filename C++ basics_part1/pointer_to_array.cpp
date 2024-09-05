#include<iostream>
using namespace std;

int main(){
    int *(*p);
    int arr[][5]={{1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5}};
    p=&arr;
    cout<<*p<<endl;
    cout<<*(p+1);
    return 0;
}