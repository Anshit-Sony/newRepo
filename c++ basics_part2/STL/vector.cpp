#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    //Vector is a data type used to store a set of data's just like an array with some additional features to make use of data easy
    //it is dynamic in nature i.e. it can adjust its size

    //vector<datatype> variablename;
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2); //generally emplace_back is faster than push_back otherwise the use is same
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;

    vector<int> v(5,100);//it is a container containing 5(size) instances of 100(value)
    // vector<int> v(5);//it is a  empty container of size 5 it might contain garbage value or null value

    // vector<int> v2(v);//make a copy of the vector v

    // iterator
    // vector<int>::iterator it=v.begin();//this points at the beginning of the vector
    // cout<<*it<<endl;

    //auto
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*it<<endl;
    // }
    //Note: v.end() points to the memory location after the last element

    // for(auto it:v){
    //     cout<<it<<endl;
    // }
    

    //erase
    //v.erase(st_idx,end_idx) start inx is included and endidx is not included

    //insert
    // v.insert(pos,val)
    //v.insert(pos,instance,val)
    // v.insert(pos,v1_pos1,v1_pos2)

    // some other functions
    // v.clear() clear the vector and make it empty
    //v.size() return the size of the vector
    // v.pop_back(); pop the first element of the vector 
    //v.swap(v1);v<--v1 and v1<--v


    
}
int main(){
    explainVector();
    return 0;
}