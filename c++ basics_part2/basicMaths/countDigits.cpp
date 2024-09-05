#include<bits/stdc++.h>
using namespace std;


int main(){
    int num=7789;

    //traditional method
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    cout<<count<<endl;

    //shortcut
    int count1=(int)(log10(7789)+1);
    cout<<count1<<endl;

    //timecomplexity-- O(log10(n))
    return 0;
}