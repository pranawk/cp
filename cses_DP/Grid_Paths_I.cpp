//  Grid Paths I

#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)cin >> grid[i][j];
    }
    vector<vector<long long>> paths(n, vector<long long>(n, 0));
    if (grid[0][0] != '*')paths[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (paths[i][j] != 0)
            {
                if (j + 1 < n && grid[i][j + 1] != '*')
                {
                    paths[i][j + 1] += paths[i][j];
                    paths[i][j + 1] %= MOD;
                }
                if (i + 1 < n && grid[i + 1][j] != '*')
                {
                    paths[i + 1][j] += paths[i][j];
                    paths[i + 1][j] %= MOD;
                }
            }
        }
    }
    cout << paths[n - 1][n - 1];
    return 0;
}
