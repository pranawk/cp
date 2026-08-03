//  Cycle Finding

#include<bits/stdc++.h>

using namespace std;
int n,m,ti;
bool fl=false;
void solve(vector<vector<pair<int,int>>>&adj, int ii, int cost, vector<long long>&cos, vector<int>&parent){
    if(fl==true)return;
    if(cos[ii]!=LLONG_MAX/3 ){
        if(cost<cos[ii]){
            ti=ii;
            fl=true;
        }
        return;
    }
    cos[ii]=cost;
    for(int i=0; i<adj[ii].size(); i++){
        if(fl==true)break;
        parent[adj[ii][i].first]=ii;
        solve(adj, adj[ii][i].first, cost+adj[ii][i].second, cos, parent);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    vector<int>parent(n+1);
//    vector<long long>cos(n+1,LLONG_MAX/3);
    queue<pair<int,long long>>q;
    for(int i=1; i<=n; i++){
        vector<long long>cos(n+1,LLONG_MAX/3);
        //parent[i]=-1;
        solve(adj, i, 0, cos, parent);
        if(fl==true)break;
    }
//    cos[1]=0;
//    q.push({1,0});
//    int ti;
//    while(!q.empty()){
//        int ii=q.front().first;
//        long long cc=q.front().second;
//        q.pop();
//        for(int i=0; i<adj[ii].size(); i++){
//            if(cos[adj[ii][i].first]<cc+adj[ii][i].second){
//                parent[adj[ii][i].first]=ii;
//                ti=adj[ii][i].first;
//                fl=true;
//                break;
//            }
//            if(cos[adj[ii][i].first]>cc+adj[ii][i].second){
//                parent[adj[ii][i].first]=ii;
//                cos[adj[ii][i].first]=cc+adj[ii][i].second;
//                q.push({adj[ii][i].first,cc+adj[ii][i].second});
//            }
//        }
//        if(fl==true)break;
//    }
    if(fl==true){
        cout<<"YES"<<endl;
        int fu=ti;
        vector<int>ans;
        while(1){
            ans.push_back(ti);
            ti=parent[ti];
            if(ti==fu)break;
        }
        cout<<fu<<" ";
        for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
        //cout<<ti<<" "<<fu;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}