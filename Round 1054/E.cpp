#include<bits/stdc++.h>
using namespace std;

long long subarray(int n, const vector<int>& a, int maxd, int minlen, int maxlen) {
    long long count = 0;
    unordered_map<int, int> freq;
    int l = 0;

    for (int r = 0; r < n; ++r) {
        freq[a[r]]++;
        while (freq.size() > maxd) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }l++;
        }
        int b_min = max(l, r - maxlen + 1);
        int b_max = r - minlen + 1;
        if (b_max >= b_min) {
            count += (long long)b_max - b_min + 1;
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k, ll, rr;
        cin >> n >> k >> ll >> rr;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans=subarray(n, a, k, ll, rr);
        long long sol=0;
        if (k>1) {
            sol=subarray(n, a, k - 1, ll, rr);
        }
        cout<<ans-sol<< endl;
    }
    return 0;
}
