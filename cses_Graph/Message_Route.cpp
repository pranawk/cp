//  Message Route

#include<bits/stdc++.h>

using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<int>>wire(n+1);
    int a,b;
    while(m--){
        cin>>a>>b;
        wire[a].push_back(b);
        wire[b].push_back(a);
    }
    vector<int>cost(n+1,INT_MAX);
    cost[1]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq; //{cost,ii}
    pq.push({0,1});
    int c, ii;
    vector<int>parent(n+1);
    while(pq.size()!=0){
        c=pq.top().first;
        ii=pq.top().second;
        pq.pop();
        for(int i=0; i<wire[ii].size(); i++){
            if(cost[wire[ii][i]]>c+1){
                cost[wire[ii][i]]=c+1;
                parent[wire[ii][i]]=ii;
                pq.push({c+1, wire[ii][i]});
            }
        }
    }
    vector<int>ans;
    //for(int i=1; i<=n; i++)cout<<parent[i]<<" ";
    if(cost[n]!=INT_MAX){
        int pr=parent[n];
        ans.push_back(n);
        while(pr!=1){
            ans.push_back(pr);
            pr=parent[pr];
        }
    }
    else{
        cout<<"IMPOSSIBLE";
        return 0;
    }
    ans.push_back(1);
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
    return 0;
}