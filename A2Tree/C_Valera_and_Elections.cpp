//  C. Valera and Elections

#include<bits/stdc++.h>

using namespace std;
unordered_set<int>ans;
bool go(vector<vector<pair<int,int>>>&adj, int ii, int pv){
    if(adj[ii].size()==1 && adj[ii][0].first==pv)return true;
    bool fl=true;
    for(int i=0; i<adj[ii].size(); i++){
        if(adj[ii][i].first==pv)continue;
        if(adj[ii][i].second==2){
            if(go(adj,adj[ii][i].first, ii)==true)ans.insert(adj[ii][i].first);
            fl=false;
        }
        else{
            fl&=go(adj,adj[ii][i].first, ii);
        }
    }
    return fl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0; i<n-1; i++){
        int x,y,t;
        cin>>x>>y>>t;
        adj[x].push_back({y,t});
        adj[y].push_back({x,t});
    }
    bool fl=go(adj,1, -1);
//     if(fl==true)cout<<"paapi";
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<" ";
    return 0;
}