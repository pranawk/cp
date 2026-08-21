//  D. Gargari and Permutations

#include<bits/stdc++.h>

using namespace std;
int n, k;
int dp[1000][2];

int solve(vector<vector<int>>& a, vector<unordered_map<int, int>>& v_mp, vector<int> pos)
{
    if (pos[0] >= n)return 0;
    bool fl = true;
    for (int i = 1; i < k; i++)
    {
        if (pos[i] > v_mp[i][a[0][pos[0]]])
        {
            fl = false;
            break;
        }
    }
    if (fl == false)
    {
        int pp = pos[0];
        // if (dp[pp][0] == -1)
        // {
            pos[0]++;
            dp[pp][0] = solve(a, v_mp, pos);
        // }
        return dp[pp][0];
    }
    else
    {
        int pp = pos[0];
        pos[0]++;
        // if (dp[pp][0] == -1)
        dp[pp][0] = solve(a, v_mp, pos);
        if (dp[pp][1] == -1)
        {
            for (int i = 1; i < k; i++)
            {
                pos[i] = v_mp[i][a[0][pos[0] - 1]];
            }
            dp[pp][1] = 1 + solve(a, v_mp, pos);
        }
        return max(dp[pp][0], dp[pp][1]);
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 2; j++)dp[i][j] = -1;
    }
    cin >> n >> k;
    vector<vector<int>> a(k, vector<int>(n));
    vector<unordered_map<int, int>> v_mp(k);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            v_mp[i][a[i][j]] = j;
        }
    }
    vector<int> pos(k, 0);
    cout << solve(a, v_mp, pos) << endl;
    // for (int i=0; i<n; i++)cout<<dp[i][0]<<" ";
    // cout<<endl;
    // for (int i=0; i<n; i++)cout<<dp[i][1]<<" ";
    return 0;
}
