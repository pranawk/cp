//  B. Arpa's weak amphitheater and Mehrdad's valuable Hoses

#include<bits/stdc++.h>

using namespace std;
int find(int i, vector<int>&parents){
    if(parents[i]==i)return i;
    return parents[i]=find(parents[i],parents);
}
void Union(int i, int j, vector<int>&parents){
    int p_i=find(i,parents);
    int p_j=find(j,parents);
    if(p_i!=p_j){
        parents[p_i]=p_j;
    }
}
int dp[1001][1001];
long long solve(int ii,unordered_map<int,vector<pair<int,int>>>&low, vector<int>&pars,  int r_w){
        if(ii==pars.size())return 0;
        if(dp[ii][r_w]!=-1)return dp[ii][r_w];
        long long ans=0;
        int pp=pars[ii];
        for(int i=0; i<low[pp].size(); i++){
            if(low[pp][i].first <=r_w){
                ans=max(ans, low[pp][i].second+ solve(ii+1, low, pars,  r_w-low[pp][i].first));
            }
//             cout<<low[pars[ii]][i].first<<" ";
        }
        ans=max(ans, solve(ii+1, low, pars, r_w));
        return dp[ii][r_w]=ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,w;
    cin>>n>>m>>w;
    vector<int>bea(n), wei(n);
    for(int i=0; i<n; i++)cin>>wei[i];
    for(int i=0; i<n; i++)cin>>bea[i];
    vector<int>parents;
    for(int i=0; i<n; i++)parents.push_back(i);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        Union(a,b,parents);
    }
    unordered_map<int,int>t_w, t_b;
    for(int i=0; i<n; i++){
        parents[i]=find(i,parents);
        t_w[parents[i]]+=wei[i];
        t_b[parents[i]]+=bea[i];
    }
    unordered_map<int,vector<pair<int,int>>>low; // []-> {weight, price}
    for(int i=0; i<n; i++){
        low[find(i,parents)].push_back({wei[i], bea[i]});
    }
    vector<int>pars;
    for(auto i: t_b){
        int gg=find(i.first, parents);
        pars.push_back(gg);
        low[gg].push_back({t_w[i.first], i.second});
    }
//     for(auto i:low){
//         for(int j=0; j<i.second.size(); j++){
//             cout<<i.first<<" "<<i.second[j].first<<" "<<i.second[j].second<<'\n';
//         }
//     }
    for(int i=0; i<1001; i++){
        for(int j=0; j<1001; j++)dp[i][j]=-1;
    }
    cout<<solve(0, low, pars, w);
    return 0;
}