//  Removal Game

#include<bits/stdc++.h>

using namespace std;
long long dp[5001][5001][2];
long long solve(vector<int>&a, int l, int r, bool fl)
{
    if (l>r)return 0;
    if (fl==true)
    {
        if (dp[l+1][r][1]==LLONG_MIN/4)dp[l+1][r][1]=solve(a,l+1,r,false);
        if (dp[l][r-1][1]==LLONG_MIN/4)dp[l][r-1][1]=solve(a,l,r-1,false);
        long long aa=a[l]+dp[l+1][r][1];
        long long b=a[r]+dp[l][r-1][1];
        dp[l][r][0]=max(aa,b);
        return dp[l][r][0];
    }
    else
    {
        if (dp[l+1][r][0]==LLONG_MIN/4)dp[l+1][r][0]=solve(a,l+1,r,true);
        if (dp[l][r-1][0]==LLONG_MIN/4)dp[l][r-1][0]=solve(a,l,r-1,true);
        long long aa=dp[l+1][r][0];
        long long b=dp[l][r-1][0];
        dp[l][r][1]=min(aa,b);
        return dp[l][r][1];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<5001; i++)
    {
        for (int j=0; j<5001; j++)
        {
            for (int k=0; k<2; k++)dp[i][j][k]=LLONG_MIN/4;
        }
    }
    cout<<solve(a,0,n-1,true);
    return 0;
}