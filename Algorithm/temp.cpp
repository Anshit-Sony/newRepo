#include<iostream>
#include<climits>
using namespace std;

int MCM(int p[],int n){
    int dp[n][n];
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }

    for(int l=2;l<n;l++){
        for(int i=1;i<n-l+1;i++){
            int j=i+l-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++){
                int q=dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
                if(dp[i][j]>q){
                    dp[i][j]=q;
                }
            }
        }
    }
    return dp[1][n-1];
}

int main(){
    int p[]={5,4,6,2,7};
    int n=5;
    cout<<MCM(p,n);
    return 0;
}