#include <iostream>
#include <vector>
using namespace std;

int als(vector<vector<int>>& a, vector<vector<int>>& t, vector<int>& entry, vector<int>& exit, int n) {
    vector<vector<int>> f(2, vector<int>(n));
    for (int i = 0; i < 2; i++) {
        f[i][0] = a[i][0] + entry[i];
    }
    for (int j = 1; j < n; j++) {
        f[0][j] = min(f[0][j - 1] + a[0][j], f[1][j - 1] + t[1][j - 1] + a[0][j]);
        f[1][j] = min(f[1][j - 1] + a[1][j], f[0][j - 1] + t[0][j - 1] + a[1][j]);
    }

    return min(f[0][n - 1] + exit[0], f[1][n - 1] + exit[1]);
}

int main() {
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;
    vector<vector<int>> a(2,vector<int>(n));
    for(int i=0;i<2;i++){
        cout<<"Enter the "<<i<<"th"<< " data: ";
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    vector<vector<int>> t(2,vector<int>(n-1));
    for(int i=0;i<2;i++){
        cout<<"Enter the "<<i<<"th"<< " travelling: ";
        for(int j=0;j<n-1;j++){
            cin>>t[i][j];
        }
    }
    
    vector<int> entry = {2, 4};
    vector<int> exit = {3, 2};

    cout << als(a, t, entry, exit, n) << endl;
    return 0;
}
