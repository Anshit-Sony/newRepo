#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    //it follows LIFO
    //indexed based access is not allowed
    //main 3 operations: push/emplace, pop and top
    //Note: all the works are being done in constant time
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);//stack={3,2,1}
    st.top();//3
    st.pop();//pop out the 3 stack={2,1}
    st.size();//2

    stack<int> st1,st2;//declaring 2 stacks
    st1.swap(st2);//swap st1 and st2
}

int main(){
    explainStack();
    return 0;
}