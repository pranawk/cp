#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define vec vector
#define pb push_back
#define INF INT_MAX
#define se second
#define fi first
#define pii pair<int, int>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pll pair<long long, long long>
#define str string

using ll = long long;
using ull = unsigned long long;
using ui = unsigned int;

const int MOD = 1000000007;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;

void solve() {
    int n, s; cin >> n >> s;
    vec<int> a(n);
    int sum = 0; int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
        if (a[i] == 0) cnt0++;
        else if (a[i] == 1) cnt1++;
        else if (a[i] == 2) cnt2++;
    }
    int T = s - sum;
    if (T < 0 || T == 1) {
        bool first = true;
        for (int i = 0; i < cnt0; i++) {
            if (!first) cout << ' ';
            cout << 0;
            first = false;
        }
        for (int i = 0; i < cnt2; i++) {
            if (!first) cout << ' ';
            cout << 2;
            first = false;
        }
        for (int i = 0; i < cnt1; i++) {
            if (!first) cout << ' ';
            cout << 1;
            first = false;
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}