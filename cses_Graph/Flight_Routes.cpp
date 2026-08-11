//  Flight Routes

#include<bits/stdc++.h>

using namespace std;
int n,m,k;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0; i<m; i++){
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        adj[t1].push_back({t2,t3});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.push({1,0});
    vector<vector<int>>mins(n+1);
    int nn=n*k;
    while(nn-- && !pq.empty()){
        int top=pq.top().first;
        int cc=pq.top().second;
        pq.pop();
        priority_queue<int,vector<int>,greater<int>>temp;
        for(int i=0; i<mins[top].size(); i++)temp.push(mins[top][i]);
        vector<int>tp;int aa=k;
        while(aa-- && !temp.empty()){
            tp.push_back(temp.top());
            temp.pop();
        }
        mins[top]=tp;
        for(int i=0; i<adj[top].size(); i++){
            pq.push({adj[top][i].first, cc+adj[top][i].second});
            mins[adj[top][i].first].push_back(cc+adj[top][i].second);
        }
    }
    sort(mins[n].begin(),mins[n].end());
    for(int i=0; i<k && i<mins[n].size(); i++)cout<<mins[n][i]<<" ";

    return 0;
}