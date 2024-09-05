#include<bits/stdc++.h>
using namespace std;


int main(){
    int num=36;

    //one method
    // for(int i=1;i<=num;i++){
    //     if(num%i==0){
    //         cout<<i<<" ";
    //     }
    // }


    //second method
    set<int> st;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            st.insert(i);
            st.insert(num/i);
        }
    }  

    for(auto it:st){
        cout<<it<<" ";
    } 
     return 0;
}