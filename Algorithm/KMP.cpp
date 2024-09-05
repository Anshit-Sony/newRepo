#include<bits/stdc++.h>
using namespace std;

vector<int> pi_table(string p){
    int n=p.length();
    vector<int> pi(n);
    pi[0]=0;
    for(int k=0,q=1;q<n;q++){
        if(p[k]==p[q]){
            pi[q]=k+1;
            k++;
        }else{
            while(k>0 && p[k]!=p[q]){
                k=pi[k-1];
            }
            if(p[k]==p[q]){
                pi[q]=k+1;
                k++;
            }
            else{
                pi[q]=0;
            }
        }
    }
    return pi;
}
vector<int> kmp(string t,string p){
    int m=t.length();
    int n=p.length();
    vector<int> pi=pi_table(p);
    vector<int> ans;
    int q=0,i=0;
    while(i<m){
        if(p[q]==t[i]){
            ++q;
            ++i;
        }else{
            if(q==0){
                ++i;
            }else{
                q=pi[q-1];
            }
        }
        if(q==n){
            q=pi[q-1];
            ans.push_back(i-n);
        }
    }
    return ans;
}
int main(){
    string p="abcd";
    string t="abcdabcd";
    vector<int> ans=kmp(t,p);
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