#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    //similar to list and vector
    deque<int> li;
    li.push_back(10);
    li.emplace_back(20);

    li.push_front(5);
    li.emplace_front(1);

    for(auto it=li.begin();it!=li.end();it++){
        cout<<*it<<endl;
    }
}
int main(){
    explainDeque();
    return 0;
}