//  C. Spying on the Beaver

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> parent(n + 1, -1);
        vector<int> depth(n + 1, 0);
        depth[1] = 0;
        vector<bool> con(n + 1, false);
        con[1] = true;
        for (int i = 0; i < n - 1; i++)
        {
            int temp;
            cin >> temp;
            depth[i + 2] = depth[temp] + 1;
            if (con[temp] == true)con[i + 2] = true;
            parent[i + 2] = temp;
        }
        int m;
        cin >> m;
        vector<int> cm(m);
        for (int i = 0; i < m; i++)cin >> cm[i];
        if (m == 1)
        {
            cout << 0 << endl;
            continue;
        }
        cout << m - 1 << " ";
        vector<pair<int, int>> ans;
        for (int i = 0; i < m; i++) { ans.push_back({depth[cm[i]], cm[i]}); }
        sort(ans.begin(), ans.end());
        for (int i = 1; i < ans.size(); i++)cout << ans[i].second << " ";
        cout << endl;
    }
    return 0;
}
