//  Rectangle Cutting

#include<bits/stdc++.h>

using namespace std;
int dp[501][501];

int solve(int n, int m)
{
    int p=min(n,m), q=max(n,m);
    if (p==q)return 0;
    else if (p*2==q)
    {
        dp[p][q]=1;
        return dp[p][q];
    }
    else
    {
        int mn=INT_MAX;
        for (int i=1; i<p; i++)
        {
            if (dp[i][q]==-1)dp[i][q]=solve(i,q);
            if (dp[p-i][q]==-1)dp[p-i][q]=solve(p-i,q);
            mn=min(mn,1+dp[i][q]+dp[p-i][q]);
            // cout<<mn<<" ";
        }
        for (int i=1; i<q; i++)
        {
            if (dp[i][p]==-1)dp[i][p]=solve(i,p);
            if (dp[q-i][p]==-1)dp[q-i][p]=solve(q-i,p);
            mn=min(mn, 1+dp[i][p]+dp[q-i][p]);
        }
        dp[p][q]=mn;
        return dp[p][q];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for (int i=0; i<501; i++)
    {
        for (int j=0; j<501; j++)dp[i][j]=-1;
    }
    cout<<solve(n,m);
    return 0;
}