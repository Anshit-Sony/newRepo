#include<bits/stdc++.h>
using namespace std;

//stores data in sorted order but doesn't obey the unique property of the set
int main() {
    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.emplace(2);//{1,1,1,2}
    cout<<ms.count(1)<<endl;//3

    auto it=ms.find(1);//it=address of first 1
    ms.erase(it);//erase the element at the address
    ms.erase(1);//erases all the 1's
    return 0;
}