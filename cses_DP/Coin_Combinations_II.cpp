//  Coin Combinations II

#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int n;
// int dp[1000001][100];
// long long solve(int x, int ii, vector<int>&coins)
// {
//     if (x==0)return 1;
//     int ans=0;
//     for (int i=ii; i<n; i++)
//     {
//         if (x>=coins[i])
//         {
//             if (x-coins[i]==0 || dp[x-coins[i]][i]==-1)dp[x-coins[i]][i]=solve(x-coins[i],i,coins);
//             ans+=dp[x-coins[i]][i];
//             ans%=MOD;
//         }
//     }
//     return ans;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)cin >> coins[i];
    sort(coins.begin(), coins.end());
    // for (int i=1 ; i<=1000000; i++)
    // {
    //     for (int j=0; j<100; j++)dp[i][j]=-1;
    // }
    // cout<<solve(x,0, coins);
    vector<long long> dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= x; j++)
        {
            if (dp[j - coins[i]] != 0)
            {
                dp[j] += (dp[j - coins[i]]);
                dp[j] %= MOD;
            }
        }
    }
    cout << dp[x];
    return 0;
}
