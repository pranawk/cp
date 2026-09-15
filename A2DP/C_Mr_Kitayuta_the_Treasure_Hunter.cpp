//  C. Mr. Kitayuta, the Treasure Hunter

#include<bits/stdc++.h>

using namespace std;
unordered_map<int, int> mp;
int d;
int dp[30001][1000];
unordered_map<int,int>offset;

int mxm = 0;
int solve(int ii, int jmp)
{
    int a = 0, b = 0, c = 0;
    if (ii + jmp <= mxm)
    {
        if (dp[ii + jmp][jmp-d+250]==-1)dp[ii -d+250+ jmp][jmp] = solve(ii + jmp, jmp);
        a = dp[ii + jmp][jmp-d+250];
    }
    if (jmp - 1 > 0 && ii + jmp - 1 <= mxm)
    {
        if (dp[ii + jmp - 1][jmp -d+250- 1]==-1)dp[ii + jmp - 1][jmp-d+250 - 1] = solve(ii + jmp - 1, jmp - 1);
        b = dp[ii + jmp - 1][jmp -d+250- 1];
    }
    if (ii + jmp + 1 <= mxm)
    {
        if (dp[ii + jmp + 1][jmp -d+250+ 1]==-1)dp[ii + jmp + 1][jmp-d+250 + 1] = solve(ii + jmp + 1, jmp + 1);
        c = dp[ii + jmp + 1][jmp -d+250+ 1];
    }
    dp[ii][jmp-d+250] = mp[ii] + max(a, max(b, c));
    return dp[ii][jmp-d+250];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mxm = max(mxm, temp);
        mp[temp]++;
    }
    for (int i=0; i<30001; i++)
    {
        for (int j=0; j<1000; j++)dp[i][j]=-1;
    }
    cout << solve(d, d);
    return 0;
}