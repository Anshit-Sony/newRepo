#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int ans = 0;
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << n - j;
        } 
        for(int l = 0; l < 2*n - 2*(i+1) - 1   ; l++){
            cout << n - i;
        }
        for(int m = i ; m >= 0 ; m--){
            ans = n - m;
            if(ans == 1){
                continue;
            }
            cout << ans;
        }
        cout << endl;  
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = n ; j >= i+1 ; j--){
            cout << j;
        }
        for(int l = 0 ; l < 2*i - 1 ; l++){
            cout << i + 1;
        }
        for(int m = i + 1 ; m <= n ; m++){
            cout << m;
        }
        cout << endl;
    }
}