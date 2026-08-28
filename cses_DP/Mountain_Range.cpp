//  Mountain Range

#include<bits/stdc++.h>

using namespace std;
int n;
long long dp[200001][2];
//true =1. false =0
int solve(vector<int>&a, int ii, int ch, bool fl)
{
    if (ii>=n || ii<0)return 1;
    if (a[ii]>=ch)return 1;
    if (dp[ii+1][1]==-1)dp[ii+1][1]=1+solve(a,ii+1,a[ii], true);
    if (dp[ii-1][0]==-1)dp[ii-1][0]=1+solve(a,ii-1,a[ii], false);

    int aa=dp[ii+1][1];
    int bb=dp[ii-1][0];
    // return max(aa,bb);
    int cc;
        if (dp[ii+1][1]==-1)dp[ii+1][1]=solve(a,ii+1,a[ii], true);
        if (dp[ii-1][0]==-1)dp[ii-1][0]=solve(a,ii-1,a[ii], false);
        if (fl==true)cc=solve(a, ii+1, ch, fl);
        else cc=solve(a, ii-1, ch, fl);
    // if (dp[ii][fl]==-1)dp[ii][fl]=max(aa, max(bb, cc));
    return max(aa, max(bb, cc));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<200001; i++)
    {
        for (int j=0; j<2; j++)dp[i][j]=-1;
    }
    int ans=0;
    // ans=solve(a,0, INT_MAX, true);
    // ans=max(ans,solve(a,n-2,INT_MAX,false));
    for (int i=0; i<n; i++)ans=max(ans, max(solve(a, i+1, a[i], true),solve(a,i-1,a[i],false)));
    cout<<ans;
    return 0;
}