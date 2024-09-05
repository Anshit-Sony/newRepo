#include<bits/stdc++.h>
using namespace std;

vector<int> strMatch(string t,string p){
    int n=t.length();
    int m=p.length();
    vector<int> idx;

    for(int i=0;i<n-m+1;i++){
        int j=0;
        while(j<m && t[i+j]==p[j]){
            j++;
        }
        if(j==m){
            idx.push_back(i);
        }
    }
    return idx;
}

int main(){
    string p="ababd";
    string t="ababcabcabababd";
    vector<int> ans=strMatch(t,p);
    int l=ans.size();
    if(l==0){
        cout<<-1;
    }else{
        for(int i=0;i<l;i++){
            if(i==l-1){
                cout<<ans[i];
            }else{
                cout<<ans[i]<<",";
            }
        }
    }
    return 0;
}