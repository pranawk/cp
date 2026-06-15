//  F. Vessels, Heights and Two Versions (Hard Version)

#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> h(n);
    long long max_val = -1;
    int m = 0;

    // Read inputs and find the global maximum partition
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        if (h[i] > max_val) {
            max_val = h[i];
            m = i;
        }
    }

    // Unroll the circular vessels into a straight line cut at m
    vector<int> V(n);
    for (int i = 0; i < n; ++i) {
        V[i] = (m + 1 + i) % n;
    }

    // Store the sequence of partition heights inside the unrolled line
    vector<long long> A(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        A[i] = h[(m + 1 + i) % n];
    }

    // Calculate L: Sum of suffix maximums going left from each vessel
    vector<long long> L(n, 0);
    vector<pair<long long, int>> stackL; // {value, count}
    long long current_sumL = 0;

    for (int i = 1; i < n; ++i) {
        long long x = A[i - 1];
        int count = 1;
        // Maintain monotonic decreasing stack
        while (!stackL.empty() && stackL.back().first <= x) {
            current_sumL -= stackL.back().first * stackL.back().second;
            count += stackL.back().second;
            stackL.pop_back();
        }
        stackL.push_back({x, count});
        current_sumL += x * count;
        L[i] = current_sumL;
    }

    // Calculate R: Sum of prefix maximums going right from each vessel
    vector<long long> R(n, 0);
    vector<pair<long long, int>> stackR; // {value, count}
    long long current_sumR = 0;

    for (int i = n - 2; i >= 0; --i) {
        long long x = A[i];
        int count = 1;
        // Maintain monotonic decreasing stack
        while (!stackR.empty() && stackR.back().first <= x) {
            current_sumR -= stackR.back().first * stackR.back().second;
            count += stackR.back().second;
            stackR.pop_back();
        }
        stackR.push_back({x, count});
        current_sumR += x * count;
        R[i] = current_sumR;
    }

    // Combine and map back to the original cyclic vessel indices
    vector<long long> ans(n, 0);
    for (int i = 0; i < n; ++i) {
        ans[V[i]] = L[i] + R[i];
    }

    // Output the results
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}