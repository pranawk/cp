//  A. Boredom

#include<bits/stdc++.h>

using namespace std;
long long dp[100005][2];
long long solve(vector<pair<int,int>>&pp, int ii, bool fl){
    long long aa=0, cs=0;
    if(ii==pp.size())return 0;
    if(dp[ii][fl]!=-1)return dp[ii][fl];
    if(fl==false){
        cs=1ll*pp[ii].first*pp[ii].second +solve(pp, ii+1, (ii+1<pp.size() && pp[ii+1].first==pp[ii].first+1));
    }
    aa=solve(pp, ii+1, false);
//     cout<<cs<<" ";
    return dp[ii][fl]=max(aa, cs);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<100005; i++){
        for(int j=0; j<2; j++)dp[i][j]=-1;
    }
    int n;
    cin>>n;
    int temp=0;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){cin>>temp;mp[temp]++;}
    vector<pair<int,int>>pp;
    for(auto i:mp)pp.push_back({i.first, i.second});
    sort(pp.begin(),pp.end());
    cout<<solve(pp, 0, false);
    return 0;
}