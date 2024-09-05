#include<bits/stdc++.h>
using namespace std;

//stores unique data doesnot obey sorted rule
//stores data in random fashion 
int main() {
    unordered_set<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1}
    ms.insert(1);//{1}
    ms.emplace(2);//{1,2}

    // rest same functions as that of set
    // note: no upperBound and lowerBound function
    return 0;
}