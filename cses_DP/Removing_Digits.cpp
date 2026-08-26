//  Removing Digits

#include<bits/stdc++.h>

using namespace std;
int dp[1000000];

int solve(int n)
{
    vector<int> digits;
    if (n == 0)return 0;
    int nn = n;
    while (nn > 0)
    {
        digits.push_back(nn % 10);
        nn /= 10;
    }
    int ans = INT_MAX / 2;
    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i] == 0)continue;
        if (n - digits[i] >= 0 && dp[n - digits[i]] == -1)dp[n - digits[i]] = 1 + solve(n - digits[i]);
        if (n - digits[i] >= 0)ans = min(ans, dp[n - digits[i]]);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < 1000000; i++)dp[i] = -1;
    cout << solve(n);
    return 0;
}
