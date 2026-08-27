//  Longest Common Subsequence

#include<bits/stdc++.h>

using namespace std;
int n,m;
struct tupple
{
    int first=-1,second=0;
    tupple *next=NULL;
};
tupple* dp[1001][1001];
tupple* solve(vector<int>&a, vector<int>&b, int ii,int jj)
{
    if (ii==n || jj==m)
    {
        tupple* temp=new tupple();
        dp[ii][jj]=temp;
        return dp[ii][jj];
    }
    if (a[ii]==b[jj])
    {
        if (dp[ii+1][jj+1]==NULL || dp[ii+1][jj+1]->next==NULL)dp[ii+1][jj+1]=solve(a,b,ii+1,jj+1);
        tupple* temp=new tupple();
        temp->first=a[ii];
        temp->second=dp[ii+1][jj+1]->second+1;
        dp[ii][jj]=temp;
        dp[ii][jj]->next=dp[ii+1][jj+1];
        return dp[ii][jj];
    }
    else
    {
        if (dp[ii+1][jj]==NULL || dp[ii+1][jj]->next==NULL)dp[ii+1][jj]=solve(a,b,ii+1,jj);
        if (dp[ii][jj+1]==NULL || dp[ii][jj+1]->next==NULL)dp[ii][jj+1]=solve(a,b,ii,jj+1);
        tupple* temp=new tupple();
        if (dp[ii+1][jj]->second>dp[ii][jj+1]->second)
        {
            temp->next=dp[ii+1][jj];
            temp->second=dp[ii+1][jj]->second;
            dp[ii][jj]=temp;
            return dp[ii][jj];
        }
        else
        {
            temp->next=dp[ii][jj+1];
            temp->second=dp[ii][jj+1]->second;
            dp[ii][jj]=temp;
            return dp[ii][jj];
        }
    }
    tupple* temp=new tupple();
    return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<int>a(n),b(m);
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<m; i++)cin>>b[i];
    tupple* ans=solve(a,b,0,0);
    cout<<ans->second<<endl;
    while (ans!=NULL)
    {
        if (ans->first!=-1)cout<<ans->first<<" ";
        ans=ans->next;
    }
    return 0;
}
