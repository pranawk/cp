#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = 0;
        int consecutive = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                consecutive++;
                if (consecutive == k) {
                    res++;
                    consecutive = 0;
                    i++;
                }
            } else {
                consecutive = 0;
            }
        }
        cout << res << '\n';
    }
    return 0;
}