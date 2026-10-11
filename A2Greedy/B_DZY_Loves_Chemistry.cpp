//  B. DZY Loves Chemistry

#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& con, vector<bool>& vis) {
    vis[u]=true;
    for (int v:con[u]) {
        if (!vis[v])dfs(v, con, vis);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>con(n+1);
    for (int i=0; i <m;i++) {
        int a,b;
        cin>>a>>b;
        con[a].push_back(b);
        con[b].push_back(a);
    }
    vector<bool>vis(n+1,false);
    int components=0;
    for (int i= 1; i<=n; i++) {
        if (!vis[i]){
            components++;
            dfs(i,con,vis);
        }
    }
    cout <<(1LL<<(n-components));
    return 0;
}