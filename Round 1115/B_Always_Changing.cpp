//  B. Always Changing

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int n0 = 0, n1 = 0;
    for (char c : s) {
        if (c == '0') n0++;
        else n1++;
    }
    int delta_n = n0 - n1;

    if (abs(delta_n) > 2) {
        cout << -1 << "\n";
        return;
    }

    int L = 1;
    int L0 = (s[0] == '0' ? 1 : 0);
    int L1 = (s[0] == '1' ? 1 : 0);
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            L++;
            if (s[i] == '0') L0++;
            else L1++;
        }
    }
    int delta_L = L0 - L1;

    int ans = (n - L) + max(0, abs(delta_n - delta_L) - 1);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}