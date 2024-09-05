#include<bits/stdc++.h>
using namespace std;

int als(int a[2][6],int t[2][5],int entry[],int exit[],int n){
    int f[2][n];
    for(int i=0;i<2;i++){
        f[i][0]=a[i][0]+entry[i];
    }
    for(int j=1;j<n;j++){
        f[0][j]=min(f[0][j-1]+a[0][j],f[1][j-1]+t[1][j-1]+a[0][j]);
        f[1][j]=min(f[1][j-1]+a[1][j],f[0][j-1]+t[0][j-1]+a[1][j]);
    }

    return min(f[0][n-1]+exit[0],f[1][n-1]+exit[1]);

}
int main(){
    int n=6;
    int a[][6]={
        {7,9,3,4,8,4},
        {8,5,6,4,5,7}
    };
    int t[][5]={
        {2,3,1,3,4},
        {2,1,4,2,1}
    };
    int entry[]={2,4};
    int exit[]={3,2};

    cout<<als(a,t,entry,exit,n);
    return 0;
}