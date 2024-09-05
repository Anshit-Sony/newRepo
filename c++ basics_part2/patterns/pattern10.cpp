#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}