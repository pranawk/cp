#include <bits/stdc++.h>
using namespace std;

int dp[1005][18];
int T_target;

int solve(int L, int k) {
    if (k == 0) return (L == T_target ? 1 : 0);
    int &res = dp[L][k];
    if (res != -1) return res;
    res = solve(L, k-1);
    for (int x = 1; x < L; ++x) {
        res = max(res, solve(x, k-1) + solve(L-x, k-1));
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; ++i) { cin >> a[i]; total += a[i]; }

        int max_a = *max_element(a.begin(), a.end());
        int limit = min(m, 18);
        vector<int> ans(m + 1, 0);

        for (int T = 1; T <= max_a; ++T) {
            T_target = T;
            for (int k = 1; k <= limit; ++k) {
                int cur = 0;
                for (int L : a) {
                    memset(dp, -1, sizeof(dp));
                    cur += solve(L, k);
                }
                ans[k] = max(ans[k], cur);
            }
        }

        for (int k = limit + 1; k <= m; ++k)
            ans[k] = total;
        for (int k = 1; k <= m; ++k) {
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}