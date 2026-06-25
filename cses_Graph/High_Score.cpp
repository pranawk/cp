//  High Score
// Bellmann Ford
#include<bits/stdc++.h>

using namespace std;
int n,m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<pair<int,long long>>>out(n+1);
    vector<vector<int>>in(n+1);
    int a,b;
    long long c;
    while(m--){
        cin>>a>>b>>c;
        in[b].push_back(a);
        out[a].push_back({b,c});
    }
    unordered_set<int>con;
    queue<int>q;
    q.push(n);
    vector<int>visited(n+1,false);
    visited[n]=true;
    while(!q.empty()){
        con.insert(q.front());
        int f=q.front();
        q.pop();
        for(int i=0; i<in[f].size(); i++){
            if(visited[in[f][i]]==false){
                visited[in[f][i]]=true;
                q.push(in[f][i]);
            }
        }
    }
    vector<long long>cost(n+1, LLONG_MIN/4),c2;
    cost[1]=0;
    long long aa;
    for(int k=0; k<n+1; k++){
        for(int i=1; i<=n; i++){
            for(int j=0; j<out[i].size(); j++){
                long long aa=cost[i],bb=out[i][j].second;
                if(cost[i]!=LLONG_MIN/4)cost[out[i][j].first]=max(cost[out[i][j].first],aa+bb);
            }
        }
        if(k==n-1)c2=cost;
    }
    bool fl=true;
    for(auto i: con){
        if(c2[i]!=cost[i])fl=false;
        //cout<<i<<" ";
    }
    if(fl==false)cout<<-1;
    else cout<<cost[n];
    //for(int i=1; i<=n; i++)cout<<cost[i]<<" ";
    return 0;
}