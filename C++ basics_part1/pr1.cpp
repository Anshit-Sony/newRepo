#include<bits/stdc++.h>
using namespace std;
struct str{
    int startTime;
    int endTime;
    int profit;
};
int maxProfit(struct str st[],int n,vector<int> t){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(st[i].profit<st[j].profit){
                struct str temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
    int l=0;
    int profit=0;
    when(l<n||t.is_not_empty){
        profit+=str.profit[l];
        l++;
        for(int i=str.startTime[i];i<str.endTime[i];i++){
            for(int j=0;j<n;j++){
                if(t[j]>str.startTime && t[j]<str.endTime){
                    t[j].delete;
                }
            }
        }
    }
    return profit;
    
    
    
}
int main(){
    int n;
    cin>>n;
    str raju[n];
    vector<int>st(n);
    for(int i=0;i<n;i++){
        cin>>raju.startTime[i];
        
        
    }
    vector<int>et(n);
    for (int i=0;i<n;i++){
        cin>>raju.endTime[i];
        
    }
    for(int i=0;i<n;i++){
        st[i]=raju.startTime[i];
    }
    for(int i=0;i<n;i++){
        et[i]=raju.endTime[i];
    }
    vector<int>t;
    for(int i=st.min();i<=et.max();i++){
        t.push_back();
    }
    for(int i=0;i<n;i++){
        cin>>raju.profit[i];
    }
    cout<<maxProfit(raju,n,t);
    return 0;
}