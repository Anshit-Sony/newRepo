#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    //it follows FIFO
    //indexed based access is not allowed
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.push(3);//{1,2,3}
    q.front();//1
    q.front()+=4;//{5,2,3}
    q.back();//3
    q.pop();//{2,3}

    //rest same functions as the stack
    
}

int main(){
    explainQueue();
    return 0;
}