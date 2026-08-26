//  Coin Combinations I

#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int n;
int memo[1000001];

long long dp(int x, vector<int>& coins)
{
    if (x == 0)return 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (x >= coins[i])
        {
            if (memo[x - coins[i]] == -1)memo[x - coins[i]] = dp(x - coins[i], coins);
            ans += memo[x - coins[i]];
            ans %= MOD;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)cin >> coins[i];
    for (int i = 0; i <= x; i++)memo[i] = -1;
    cout << dp(x, coins);
    return 0;
}
