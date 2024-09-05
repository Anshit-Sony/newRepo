#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int>& v1,vector<int>& v2){
    //brute force approach using set

    //optimal Solution
    int i=0,j=0;
    vector<int> temp;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            if(temp.empty() || temp.back()!=v1[i]){
                temp.push_back(v1[i]);
            }
            i++;
        }else{
            if(temp.empty() || temp.back()!=v2[j]){
                temp.push_back(v2[j]);
            }
            j++;
        }
    }
    while(i<v1.size()){
        if(temp.back()!=v1[i] || temp.size()==0){
            temp.push_back(v1[i]);
        }
        i++;
    }
    while(j<v2.size()){
        if(temp.back()!=v2[j] || temp.size()==0){
            temp.push_back(v2[j]);
        }
        j++;
    }
    return temp;
}

vector<int> Intersection(vector<int>& v1,vector<int>& v2){
    vector<int> res;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v1[i]>v2[j]){
            j++;
        }
        else{
            res.push_back(v1[i]);
            i++,j++;
        }
    }
    return res;
}

int main(){
    vector<int> v1={1,2,2,3,4,5};
    vector<int> v2={1,1,2,3,4,5,6};
    // vector<int> result=Union(v1,v2);
    vector<int> result=Intersection(v1,v2);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}