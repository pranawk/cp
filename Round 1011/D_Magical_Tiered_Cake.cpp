//  D. Magical Tiered Cake

#include<bits/stdc++.h>

using namespace std;

 int n;
 vector<int> a, pos;
 vector<pair<int, int>> ans;
 bool possible;

 void solve_toh(int k, vector<int>& targets) {
     if (k == 0 || !possible) return;

     if (pos[k] == targets[k]) {
         solve_toh(k - 1, targets);
         return;
     }

     int src = pos[k];
     int dst = targets[k];
     int other = 6 - src - dst;

     int m = (k - 1) - a[k];
     if (m < 0) {
         possible = false;
         return;
     }

     vector<int> orig_targets = targets;

     for (int i = 1; i <= m; i++) {
         targets[i] = other;
     }

     for (int i = m + 1; i < k; i++) {
         targets[i] = src;
     }

     solve_toh(k - 1, targets);
     if (!possible) return;

     ans.push_back({src, dst});
     pos[k] = dst;

     for (int i = 1; i < k; i++) {
         targets[i] = orig_targets[i];
     }
     solve_toh(k - 1, targets);
 }

 void solve() {
     cin >> n;
     a.assign(n + 1, 0);
     for (int i = 1; i <= n; i++) {
         cin >> a[i];
     }
     pos.assign(n + 1, 1);
     ans.clear();
     possible = true;

     vector<int> targets(n + 1, 3);

     solve_toh(n, targets);

     if (!possible) {
         cout << "NO" << "\n";
     } else {
         cout<<"YES"<<endl;
         cout << ans.size() << "\n";
         for (auto& p : ans) {
             cout << p.first << " " << p.second << "\n";
         }
     }
 }

 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int tt;
     if (cin >> tt) {
         while (tt--) {
             solve();
         }
     }
     return 0;
 }