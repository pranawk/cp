//  B. Always Changing

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        string s;
        cin >> n >> s;
        int Z = count(s.begin(), s.end(), '0');
        int O = n - Z;
        int d = Z - O;
        if (abs(d) > 2) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> allowed;
        for (int v = -1; v <= 1; ++v) {
            if (abs(d - v) <= 1) allowed.push_back(v);
        }
        const int NEG = -1e9;
        array<int, 3> dp0, dp1;
        dp0.fill(NEG);
        dp1.fill(NEG);
        for (char ch : s) {
            array<int, 3> ndp0 = dp0;
            array<int, 3> ndp1 = dp1;
            if (ch == '0') {
                ndp0[2] = max(ndp0[2], 1);
                for (int prev = 0; prev < 3; ++prev) {
                    if (dp1[prev] != NEG) {
                        int prevDiff = prev-1;
                        int newDiff = prevDiff+1;
                        if (-1 <= newDiff && newDiff <= 1) {
                            int idx = newDiff + 1;
                            ndp0[idx] = max(ndp0[idx], dp1[prev] + 1);
                        }
                    }
                }
            } else {
                ndp1[0] = max(ndp1[0], 1);
                for (int prev = 0; prev < 3; ++prev) {
                    if (dp0[prev] != NEG) {
                        int prevDiff = prev - 1;
                        int newDiff = prevDiff - 1;
                        if (-1 <= newDiff && newDiff <= 1) {
                            int idx = newDiff + 1;
                            ndp1[idx] = max(ndp1[idx], dp0[prev] + 1);
                        }
                    }
                }
            }
            dp0= ndp0;
            dp1= ndp1;
        }
        int max_len = 0;
        for (int v: allowed) {
            int idx= v + 1;
            max_len= max({max_len,dp0[idx],dp1[idx]});
        }
        cout<<n-max_len<<endl;
    }
    return 0;
}