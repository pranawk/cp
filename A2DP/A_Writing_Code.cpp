//  A. Writing Code

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, b, MOD;
    if (!(cin >> n >> m >> b >> MOD)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> dp(m + 1, vector<int>(b + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = a[i]; k <= b; k++) {
                dp[j][k] = (dp[j][k] + dp[j - 1][k - a[i]]) % MOD;
            }
        }
    }

    int total_plans = 0;
    for (int k = 0; k <= b; k++) {
        total_plans = (total_plans + dp[m][k]) % MOD;
    }

    cout << total_plans << "\n";

    return 0;
}

