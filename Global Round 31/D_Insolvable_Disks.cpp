#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> ans(k);

    if (k % 2 == 0) {
        // Check if n is a power of 2 (e.g., 2, 4, 8, 16...)
        // The bitwise trick (n & (n - 1)) == 0 is true for powers of 2
        if ((n & (n - 1)) == 0) {
            // Your original logic: works perfectly for powers of 2
            for (long long i = 0; i < k - 1; i++) {
                ans[i] = n;
            }
            ans[k - 1] = 0;
        } else {
            // Logic for non-powers of 2 (e.g., n=6)
            // We fill k-2 spots with 'n' (they cancel out to 0)
            for (long long i = 0; i < k - 2; i++) {
                ans[i] = n;
            }
            
            // Calculate the special pair for the last two spots
            // 1. Find the Most Significant Bit (largest power of 2 <= n)
            long long msb = 1;
            while (msb * 2 <= n) msb *= 2;
            
            // 2. Find the Second Most Significant Bit
            long long diff = n - msb;
            long long second_msb = 1;
            while (second_msb * 2 <= diff) second_msb *= 2;
            
            // 3. Construct the pair
            ans[k - 2] = msb | (second_msb - 1);
            ans[k - 1] = n ^ ans[k - 2];
        }
    } else {
        // Your original logic for odd k
        for (long long i = 0; i < k; i++) {
            ans[i] = n;
        }
    }

    for (auto &i : ans) {
        cout << i << " ";
    };
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}