//  Edit Distance

#include<bits/stdc++.h>

using namespace std;
int n,m;
int dp[5001][5001];
int minm(string &a, string &b, int ii, int jj)
{
    if (jj==m)return n-ii;
    if (ii==n)return m-jj;
    if (a[ii]==b[jj])
    {
        if (dp[ii+1][jj+1]==-1)dp[ii+1][jj+1]=minm(a,b,ii+1,jj+1);
        dp[ii][jj]=dp[ii+1][jj+1];
        return dp[ii][jj];
    }
    else
    {
        if (dp[ii+1][jj+1]==-1)dp[ii+1][jj+1]=minm(a,b,ii+1,jj+1);
        if (dp[ii][jj+1]==-1)dp[ii][jj+1]=minm(a,b,ii,jj+1);
        if (dp[ii+1][jj]==-1)dp[ii+1][jj]=minm(a,b,ii+1,jj);

        dp[ii][jj]=1+min(min(dp[ii+1][jj+1],dp[ii][jj+1]),dp[ii+1][jj]);
        return dp[ii][jj];
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    n=a.size();m=b.size();
    for (int i=0; i<5001; i++)
    {
        for (int j=0; j<5001; j++)dp[i][j]=-1;
    }
    cout<<minm(a,b,0,0);
    return 0;
}
