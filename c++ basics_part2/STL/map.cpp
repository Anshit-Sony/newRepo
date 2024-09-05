#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    //{key,value} pair
    //key is unique and sorted 
    //value can be anything

    //map<datatype,datatype> mp;
    //datatype can be pair,vector or anything

    map<int,int> mp;
    //mp[key]=value;
    mp[1]=2;//{{1,2}}
    // mp.insert({1,2})

    for(auto it:mp){
        cout<<it.first<<" and "<<it.second<<endl;
    }

    auto it=mp.find(2);//we give key returns the address

    auto it=mp.lower_bound(1);
    auto it=mp.upper_bound(2);

    
}

void explainMultiMap(){
    //similar to map but can contain multiple same key
}
void unorderedMultiMap(){
    //key is stored like unordered set
}

int main(){
    explainMap();
    return 0;
}