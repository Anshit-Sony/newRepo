/*
Vector:
--You can change the size of the vector any time even if you have predefined
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    //Normal vector
    // vector<int> vec; //declaration of vector
    // vec.push_back(1);//push value 1 to the vector i.e initially vec={} and after vec={1}
    // vec.emplace_back(2);//similar to push_back now vec={1,2}
    

    // vector containing pair
    // vector<pair<int ,int>> v;
    // v.push_back({1,2});
    // v.emplace_back(3,4);//note: there is no curly brace
    //{}-->{{1,2}}-->{{1,2},{3,4}}

    // vector<int> v(5);//this code create a container of size 5.value is garbage or 0
    // vector<int> v1(5,100);//this code create a container of size 5 each with value 100
    // vector<int> v2(v1);//this code create a copy container of size 5 each with value 100


    //Vector element access
    // vector<int> v={4,5,7,2,8};
    //using loop
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    // using iterator
     //here it=v.begin() means it is pointing to the memory address of the first element of the vector
     // And it=v.end() means pointing to the memory location after the end element
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }

    //shortcut to declare an iterator
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }

    //other method
    // for(auto it:v){
    //     cout<<it<<" ";
    // }

    //insert
    vector<int> v(2,10);
    v.insert(v.begin(),1);//insert at the begining
    vector<int>temp={2,3,4};
    v.insert(v.begin()+1,temp.begin(),temp.end()); // insert the element of temp to v starting from index 1

    //delete
    // v.erase(st_idx,end_idx);
    // v.erase(v.begin()+1,v.begin()+3); //start idx is included while end is excluded
    // v.erase(v.begin());//delete the any single element

    // v.pop_back();//pop the element at the last
    // for(auto it:v){
    //     cout<<it<<" ";
    // }

    vector<int> v1={1,2};
    vector<int> v2={3,4};
    v1.swap(v2);//swap two vectors

    v1.clear();//clear the vector

    cout<<v.empty();//returns a bool val
    return 0;
}