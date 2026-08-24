//  C. Lucky Tree

#include<bits/stdc++.h>

using namespace std;
int n;

bool luck_chk(int n)
{
    bool res = true;
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)res = false;
        n /= 10;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    vector<bool> visited(n + 1, false);
    long long ans = 0;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        long long cn = 0, tv = 0;
        if (visited[i] == true)continue;
        q.push(i);
        tv++;
        visited[i] = true;
        while (!q.empty())
        {
            int fr = q.front();
            q.pop();
            for (int i = 0; i < adj[fr].size(); i++)
            {
                if (visited[adj[fr][i].first] == true)continue;
                visited[adj[fr][i].first] = true;
                tv++;
                cn += luck_chk(adj[fr][i].second);
                q.push(adj[fr][i].first);
            }
        }
        if (tv < 2)continue;
        cout << tv << " " << cn << endl;
        ans += tv * (tv - 2) * cn;
    }
    cout << ans;
    return 0;
}
