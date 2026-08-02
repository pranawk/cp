//  Flight Discount

#include<bits/stdc++.h>

using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1),adj2(n+1);
    for(int i=0; i<m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj2[b].push_back({a,c});
    }
    vector<long long>dis1(n+1, LLONG_MAX/3),dis2(n+1,LLONG_MAX/3);
    priority_queue<pair<long long ,int>, vector<pair<long long,int>>,greater<pair<long long,int>>>pq;
    pq.push({0,1});
    while(!pq.empty()){
        int pi=pq.top().second;
        long long pv=pq.top().first;
        for(int i=0; i<adj[pi].size(); i++){
            if(dis1[adj[pi][i].first]>pv+adj[pi][i].second){
                dis1[adj[pi][i].first]=pv+adj[pi][i].second;
                pq.push({pv+adj[pi][i].second, adj[pi][i].first});
            }
        }
        dis1[pi]=min(dis1[pi],pv);
        pq.pop();
    }
    pq.push({0,n});
    while(!pq.empty()){
        int pi=pq.top().second;
        long long pv=pq.top().first;
        for(int i=0; i<adj2[pi].size(); i++){
            if(dis2[adj2[pi][i].first]>pv+adj2[pi][i].second){
                dis2[adj2[pi][i].first]=pv+adj2[pi][i].second;
                pq.push({pv+adj2[pi][i].second, adj2[pi][i].first});
            }
            //pq.push({pv+adj2[pi][i].second, adj2[pi][i].first});
        }
        dis2[pi]=min(dis2[pi],pv);
        pq.pop();
    }
//    for(int i=1; i<=n; i++)cout<<dis1[i]<<" ";
//    cout<<endl;
//    for(int i=1; i<=n; i++)cout<<dis2[i]<<" ";
    long long ans=LLONG_MAX/2;
    for(int i=1; i<=n; i++){
        for(int j=0; j<adj[i].size(); j++){
            ans=min(ans, dis1[i]+adj[i][j].second/2+dis2[adj[i][j].first]);
        }
    }
    cout<<ans<<endl;
    return 0;
}