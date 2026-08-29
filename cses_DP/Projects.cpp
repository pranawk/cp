//  Projects

#include<bits/stdc++.h>

using namespace std;
int n;
long long dp[200001];
long long solve(vector<pair<int,int>>&start, vector<int>&end, vector<int>&reward, int ii)
{
    if (ii>=n)return 0;
    int c_i=start[ii].second;
    long long aa=0,bb=reward[c_i];
    if (dp[ii+1]==-1)dp[ii+1]=solve(start,end,reward,ii+1);
    aa=dp[ii+1];
    if (end[ii]<n)
    {
        if (dp[end[ii]]==-1)dp[end[ii]]=solve(start,end,reward,end[ii]);
        bb=1ll*reward[c_i]+dp[end[ii]];
    }
    dp[ii]=max(aa,bb);
    return dp[ii];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i=0; i<200001; i++)dp[i]=-1;
    cin>>n;
    vector<pair<int,int>>start(n);
    vector<int>end(n), reward(n);
    for (int i=0; i<n; i++)
    {
        cin>>start[i].first;
        cin>>end[i]>>reward[i];
        start[i].second=i;
    }
    sort(start.begin(),start.end());
    vector<int>ends(n);
    priority_queue<pair<int,int>>pq;
    for (int i=0; i<n; i++)
    {
        while (!pq.empty() && pq.top().first>-1*(start[i].first))
        {
            ends[pq.top().second]=i;
            pq.pop();
        }
        pq.push({-1*(end[start[i].second]),i});
    }
    while (!pq.empty())
    {
        ends[pq.top().second]=n;
        pq.pop();
    }
    // for (int i=0; i<n; i++)cout<<ends[i]<<" ";
    cout<<solve(start,ends, reward,0);
    return 0;
}