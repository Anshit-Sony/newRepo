#include<bits/stdc++.h>
using namespace std;

void explainList(){
    // it is similar to the vector the only thing is that it has a front operation
    list<int> li;
    li.push_back(10);
    li.emplace_back(20);

    li.push_front(5);
    li.emplace_front(1);

    for(auto it=li.begin();it!=li.end();it++){
        cout<<*it<<endl;
    }
}
int main(){
    explainList();
    return 0;
}