//  Round Trip II

#include<bits/stdc++.h>

using namespace std;
int n,k;
bool fl=false; int fi=0;
void solve(vector<vector<int>>&adj, int ii, vector<bool>&visited, vector<int>&parent){
    if(fl==true)return;
    //cout<<ii<<"fu";
    if(visited[ii]==true){
        fi=ii;
        fl=true;return;
    }
    visited[ii]=true;
    for(int i=0; i<adj[ii].size(); i++){
        if(fl==true)return;
        parent[adj[ii][i]]=ii;
        solve(adj,adj[ii][i],visited,parent);
    }
    visited[ii]=false;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<vector<int>>adj(n+1);
    for(int i=0; i<k; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    vector<bool>visited(n+1,false);
    vector<int>parent(n+1);
    for(int i=1; i<=n; i++){
        if(visited[i]==true)continue;
        solve(adj,1, visited,parent);
    }
//    queue<int>q;
//    while(!q.empty()){
//        int ft=q.front();
//        q.pop();
//        for(int i=0; i<adj[ft].size(); i++){
//            if(visited[adj[ft][i]]==false)continue;
//            visited[adj[ft][i]]=true;
//            parent[adj[ft][i]];
//            q.push(adj[ft][i]);
//        }
//    }
    if(fl==false){cout<<"IMPOSSIBLE";}
    else{
        vector<int>ans;
        int jj=fi;
        ans.push_back(fi);
//        int pp=4;
        while( parent[jj]!=fi){
            ans.push_back(parent[jj]);
            jj=parent[jj];
        }
        ans.push_back(fi);
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
    }
    return 0;
}