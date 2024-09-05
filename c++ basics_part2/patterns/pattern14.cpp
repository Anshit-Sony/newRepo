#include<iostream>
using namespace std;

void printpattern(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        int space=2*(n-i);
        if(i>n) space=2*(i-n);
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    printpattern(n);
    return 0;
}