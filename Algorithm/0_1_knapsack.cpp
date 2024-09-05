//0/1 knapsack
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int pr[], int wt[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (wt[i] > wt[j])
            {
                swap(&wt[i], &wt[j]);
                swap(&pr[i], &pr[j]);
            }
        }
    }
}

int knapsack(int pr[],int wt[],int W,int n){
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else{
                if(wt[i-1]<=j){
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+pr[i-1]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
    }
    return dp[n][W];
}

int main()
{
    int n = 4;
    int pr[] = {4, 3, 1, 2};
    int wt[] = {5, 4, 6, 3};
    sort(pr, wt, n);
    cout << knapsack(pr, wt, 8, 4);
    return 0;
}