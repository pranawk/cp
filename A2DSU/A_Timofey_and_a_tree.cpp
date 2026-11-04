//  A. Timofey and a tree

#include<bits/stdc++.h>

using namespace std;
bool giv(vector<vector<int>>&adj, vector<bool>&visited, int ii, int&c, vector<int>&color){
    bool ans=true;
    if(ii==-1)return true;
    if(color[ii]!=c)return false;
    for(int i=0; i<adj[ii].size(); i++){
        if(adj[ii][i]==-1)continue;
        if(visited[adj[ii][i]]==false){
            visited[adj[ii][i]]=true;
            ans&= giv(adj, visited, adj[ii][i], c, color);
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>>adj(n);
    vector<pair<int,int>>gg;
    int aa=-1,bb;
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        x--; y--;
        gg.push_back({x,y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>color(n);
    for(int i=0; i<n; i++)cin>>color[i];
    for(int i=0; i<gg.size(); i++){
        if(color[gg[i].first]!=color[gg[i].second]){
//             for(int j=0; j<adj[gg[i].first].size(); j++){
//                 if(adj[gg[i].first][j]==gg[i].second)adj[gg[i].first][j]=-1;
//             }
//             for(int j=0; j<adj[gg[i].second].size(); j++){
//                 if(adj[gg[i].second][j]==gg[i].first)adj[gg[i].second][j]=-1;
//             }
            vector<bool>visited(n,false);
            visited[gg[i].first]=true;
            bool ans= true;
            for(int j=0; j<adj[gg[i].first].size(); j++){
                if(adj[gg[i].first][j]==-1)continue;
               ans&=giv(adj,visited,adj[gg[i].first][j], color[adj[gg[i].first][j]], color);
            }
            if(ans==true){cout<<"YES\n"<<gg[i].first+1; return 0;}
            ans=true;
            for(int j=0; j<n; j++)visited[j]=false;
            visited[gg[i].second]=true;
            for(int j=0; j<adj[gg[i].second].size(); j++){
                if(adj[gg[i].second][j]==-1)continue;
               ans&=giv(adj,visited,adj[gg[i].second][j], color[adj[gg[i].second][j]], color);
            }
            if(ans==true)cout<<"YES\n"<<gg[i].second+1;
            else{
                cout<<"NO";
            }
            break;
        }
        if(i==gg.size()-1)cout<<"YES\n1";
    }
    return 0;
}