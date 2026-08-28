//  Mountain Range

#include<bits/stdc++.h>

using namespace std;
int n;
int dp[200001][2];
//true =right. false =left
int solve(vector<int>&a, int ii, bool fl)
{
    int aa=0;
    for (int i=ii+1; i<n; i++)
    {
        if (a[i]>=a[ii])break;
        if (dp[i][0]==-1)dp[i][0]=solve(a, i,  true);
        if (dp[i][1]==-1)dp[i][1]=solve(a, i, false);
        aa=max(aa, max(1+dp[i][0],1+dp[i][1]));
    }
    for (int i=ii-1; i>=0; i--)
    {
        if (a[i]>=a[ii])break;
        if (dp[i][0]==-1)dp[i][0]=solve(a, i,  true);
        if (dp[i][1]==-1)dp[i][1]=solve(a, i, false);
        aa=max(aa, max(1+dp[i][0],1+dp[i][1]));
    }
    dp[ii][fl]=aa;
    return dp[ii][fl];
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
    for (int i=0; i<n; i++)ans=max(ans,solve(a, i, true));
    cout<<ans+1;
    return 0;
}