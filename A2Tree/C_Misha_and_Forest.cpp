//  C. Misha and Forest

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> deg(n), xr(n);
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> deg[i] >> xr[i];
        if (deg[i] == 1) q.push(i);
    }
    vector<pair<int, int>> ans;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (deg[v] == 0) continue;
        int u = xr[v];
        ans.push_back({v, u});
        deg[v]--;
        deg[u]--;
        xr[u] ^= v;
        if (deg[u] == 1) q.push(u);
    }
    cout << ans.size() <<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;

    return 0;
}