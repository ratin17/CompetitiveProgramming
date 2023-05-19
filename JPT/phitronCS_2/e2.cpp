#include<bits/stdc++.h>
using namespace std;

const int N = 1009;
const int M = 1e5 + 5;

int wt[N], val[N];

long long Knapsack(int W, int n){

    long long dp[W+1];
    memset(dp, 0, sizeof dp);
 
    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (wt[j] <= i)
            dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
 
    return dp[W];
}
 

int main(){
   long long n, cap;
    cin >> n >> cap;

    for(int i = 0 ; i < n ; i++) {
        cin >>val[i];
    }

    for(int i = 0 ; i < n ; i++) {
        cin >> wt[i];
    }
 
    cout <<Knapsack(cap, n);
 
    return 0;
}