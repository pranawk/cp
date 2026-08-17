#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> children(n + 1);
    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        children[p].push_back(i);
    }

    int m;
    cin >> m;
    vector<bool> isDam(n + 1, false);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        isDam[x] = true;
    }

    // Postorder traversal to compute which subtrees contain dams
    vector<int> order;
    order.reserve(n);
    vector<int> stack = {1};
    while (!stack.empty()) {
        int u = stack.back();
        stack.pop_back();
        order.push_back(u);
        for (int v : children[u]) stack.push_back(v);
    }
    reverse(order.begin(), order.end());

    vector<bool> hasDam(n + 1, false);
    for (int u : order) {
        bool damHere = isDam[u];
        for (int v : children[u]) {
            damHere = damHere || hasDam[v];
        }
        hasDam[u] = damHere;
    }

    // DP to compute total cameras (optional, can also count during reconstruction)
    vector<int> dp(n + 1, 0);
    for (int u : order) {
        int cnt = 0;
        int sum = 0;
        for (int v : children[u]) {
            if (hasDam[v]) {
                cnt++;
                sum += dp[v];
            }
        }
        if (isDam[u]) {
            dp[u] = cnt + sum;
        } else {
            dp[u] = (cnt == 0 ? 0 : (cnt - 1)) + sum;
        }
    }

    // Reconstruction of edges
    vector<pair<int, int>> edges;
    vector<int> nodes = {1};
    while (!nodes.empty()) {
        int u = nodes.back();
        nodes.pop_back();

        vector<int> damChildren;
        for (int v : children[u]) {
            if (hasDam[v]) damChildren.push_back(v);
        }

        if (isDam[u]) {
            // place cameras on all edges to children that contain dams
            for (int v : damChildren) {
                edges.push_back({u, v});
                nodes.push_back(v);
            }
        } else {
            if (damChildren.size() >= 2) {
                // place on all except the first one
                for (int i = 1; i < (int)damChildren.size(); i++) {
                    edges.push_back({u, damChildren[i]});
                    nodes.push_back(damChildren[i]);
                }
                // also process the first child (no edge at this level)
                nodes.push_back(damChildren[0]);
            } else if (damChildren.size() == 1) {
                // only one child – no camera on this edge, just go deeper
                nodes.push_back(damChildren[0]);
            }
            // if none, nothing to do
        }
    }

    cout << dp[1] << '\n';
    for (auto [u, v] : edges) {
        cout << u << ' ' << v << '\n';
    }

    return 0;
}