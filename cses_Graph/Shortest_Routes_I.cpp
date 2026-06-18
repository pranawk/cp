//  Shortest Routes I

#include<bits/stdc++.h>

using namespace std;

int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<pair<long long, long long>>>roads(n+1);
    long long a,b,c;
    for(long long i=0; i<m; i++){
        cin>>a>>b>>c;
        roads[a].push_back({c,b});
    }
    vector<long long>cost(n+1,LLONG_MAX/4);
    priority_queue<pair<long long ,long long>,vector<pair<long long ,long long>>,greater<pair<long long ,long long>>>pq;
    pq.push({0,1});
    long long fi,fj;
    while(!pq.empty()){
        fi=pq.top().first;
        fj=pq.top().second;
        pq.pop();
        if(cost[fj]<=fi)continue;
        cost[fj]=fi;
        for(long long i=0; i<roads[fj].size() ; i++){
            pq.push({roads[fj][i].first+fi, roads[fj][i].second});
        }
    }
    for(long long i=1; i<=n; i++)cout<<cost[i]<<" ";
    return 0;
}