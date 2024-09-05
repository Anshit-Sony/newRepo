#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair<int,int> p={1,2};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    //nested pair
    // pair<int,pair<int,int>> p={1,{2,3}};
    // cout<<p.second.first<<" and "<<p.second.second<<endl;

    //Pair is a data type 
    //We can have a array of a pair
    pair<int,int> p[]={{1,2},{3,4},{5,6}};
    cout<<p[2].first<<" and "<< p[2].second<<endl;
    return 0;
}