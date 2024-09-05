#include<iostream>
#include<string.h>
using namespace std;

int LCS(string seq1,string seq2){
    int m=seq1.length();
    int n=seq2.length();
    int lcs[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                lcs[i][j]=0;
            }
            else if(seq1[i-1]==seq2[j-1]){
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else{
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    return lcs[m][n];
}
int main(){
    string seq1="acbad";
    string seq2="abcd";
    cout<<LCS(seq1,seq2);
    return 0;
}