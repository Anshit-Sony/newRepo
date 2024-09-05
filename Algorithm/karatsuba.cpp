#include<iostream>
#include <math.h>
using namespace std;

int size_of_int(int a){
    string str=to_string(a);
    return str.length();
}
int karatsuba(int x,int y){
    if(x<10 || y<10){
        return x*y;
    }
    int n=max(size_of_int(x),size_of_int(y));
    int power=(int)pow(10,n/2);
    int a=x/power;
    int b=x%power;
    int c=y/power;
    int d=y%power;
    int X=karatsuba(a,c);
    int Y=karatsuba(b,d);
    int Z=karatsuba((a+b),(c+d))-X-Y;
    return (X*(power*power)+(Z*power)+Y);
}
int main(){
    cout<<karatsuba(11560,2259);
    return 0;
}