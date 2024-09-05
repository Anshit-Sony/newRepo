#include<bits/stdc++.h>
using namespace std;

void explainPQ(){

    //Max-heap
    //highest priority to the greater element
    priority_queue<int> q;
    q.push(5);//{5}
    q.push(2);//{5,2}
    q.push(8);//{8,5,2}
    q.push(10);//{10,8,5,2}
    q.top();//10
    q.pop();//{8,5,2}
    // Note:No front or back
    
    //Min-heap
    //highest priority to the lesser element
    priority_queue<int,vector<int>,greater<int>> pq;

    // Note:Push and Pop take O(logn) and top take O(1)
    
}

int main(){
    explainPQ();
    return 0;
}