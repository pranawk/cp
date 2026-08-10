//  C. Edgy Trees

#include<bits/stdc++.h>
using namespace std;

const int MOD=1000000007;
long long n,k;
int sz;

long long cal(int n){
    long long ans=1;
    for(int i=0; i<k; i++){ans*=1ll*n;ans%=MOD;}
    ans-=n;
    return ans;
}


void give(vector<bool>&visited, int ii, vector<vector<pair<int,int>>>&adj){
    queue<int>q;
    q.push(ii);
    while(!q.empty()){
        int fr=q.front();
        q.pop();
        visited[ii]=true;
        sz++;
        for(int i=0; i<adj[fr].size(); i++){
            if(adj[fr][i].second==1)continue;
            if(visited[adj[fr][i].first]==true)continue;
            visited[adj[fr][i].first]=true;
            q.push(adj[fr][i].first);
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0; i<n-1; i++){
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        adj[t1].push_back({t2,t3});
        adj[t2].push_back({t1,t3});
    }
    vector<bool>visited(n,false);
    vector<int>pp;
    for(int i=1; i<=n; i++){
        if(visited[i]==true)continue;
        sz=0;
        give(visited, i, adj);
        pp.push_back(sz);
    }
    //for(int i=0; i<pp.size(); i++)cout<<pp[i]<<" ";
    long long ans=cal(n);
    //cout<<ans<<endl;
    for(int i=0; i<pp.size(); i++){ans=(ans-cal(pp[i])+MOD)%MOD;}
    cout<<ans%MOD<<endl;
    return 0;
}