//  C. Kefa and Park

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    vector<vector<int>>adj(n+1);
    for(int i=0; i<n-1; i++){
        int p,q;
        cin>>p>>q;
        adj[p].push_back(q);
        adj[q].push_back(p);
    }

    queue<pair<int,pair<int,int>>>q;
    unordered_map<int,int>mp;
    unordered_set<int>visited;
    set<int>ans;
    q.push({1,{0,-1}});
    while(!q.empty()){
        int ii=q.front().first;
        int jj=q.front().second.first;
        int pv=q.front().second.second;
        q.pop();
        if(a[ii-1]==1)jj++;
        else jj=0;
        if(jj>m)continue;
        if(adj[ii].size()==1 && adj[ii][0]==pv)ans.insert(ii);
        for(int i=0; i<adj[ii].size(); i++){
            if(adj[ii][i]==pv)continue;
            if(visited.find(adj[ii][i])==visited.end() || mp[adj[ii][i]]>jj){
                mp[adj[ii][i]]=jj;
                visited.insert(adj[ii][i]);
                q.push({ adj[ii][i],{jj,ii}});
            }
        }
    }
    cout<<ans.size();
    return 0;
}