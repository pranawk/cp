//  High Score

#include<bits/stdc++.h>

using namespace std;
int n,m;
bool fl2=false;
long long ans=LLONG_MIN;
void solve(int ii,long long cos,vector<long long>&cost, vector<vector<pair<int,long long>>>&roads, bool fl){
    long long pc=cost[ii];
    cost[ii]=cos;
    if(ii==n){
        if(fl==true)fl2=true;
        ans=max(ans,cos);
        cost[ii] = pc;
        return;
    }
    for(int i=0; i<roads[ii].size(); i++){
            if(cost[roads[ii][i].first]!=LLONG_MIN){if(cost[roads[ii][i].first]< (cos+roads[ii][i].second)){fl=true;}break;}
    }
    for(int i=0; i<roads[ii].size(); i++){
        if(cost[roads[ii][i].first]!=LLONG_MIN){continue;}
        //cost[roads[ii][i].first]=cos+roads[ii][i].second;
        solve(roads[ii][i].first, cos+roads[ii][i].second, cost, roads, fl);
    }
    cost[ii]=pc;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fl2 = false;
    ans = LLONG_MIN;
    cin>>n>>m;
    vector<vector<pair<int,long long>>>roads(n+1),roads2(n+1);
    int a,b;
    long long c;
    while(m--){
        cin>>a>>b>>c;
        roads2[a].push_back({b,c});
    }
    for(int i=1; i<=n; i++){
        sort(roads2[i].begin(),roads2[i].end());
        for(int j=0; j<roads2[i].size(); j++){
            if(roads[i].size()>0 && roads2[i][j].first==roads[i].back().first ){roads[i].back().second=max(roads2[i][j].second,roads[i].back().second);}
            else roads[i].push_back({roads2[i][j].first,roads2[i][j].second});
        }
    }
    vector<long long>cost(n+1,LLONG_MIN);
    cost[1]=0;
    solve(1,0,cost,roads,false);
    if(fl2==true){cout<<-1<<endl;return 0;}
    cout<<ans<<endl;
    return 0;
}