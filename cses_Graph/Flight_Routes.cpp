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
    priority_queue<pair<long long,int>,vector<pair<long long,int>>, greater<pair<long long,int>>>pq;
    pq.push({0,1});
    vector<vector<long long>>mins(n+1);
    vector<int>visited(n+1,0);
    vector<bool>ct(n+1,0);
    int sz=0;
    int nn=n*(k+1);
    int vss=0;
    while(sz!=n+1 ){
        if(pq.empty())break;
        int top=pq.top().second;
        long long cc=pq.top().first;
        mins[top].push_back(cc);
        pq.pop();
        if(visited[top]>=k){
            if(ct[top]==false){
                ct[top]=true;sz++;
            }
            continue;
        }
        else{
            visited[top]++;
        }
        priority_queue<long long,vector<long long>,greater<long long>>temp;
        for(int i=0; i<mins[top].size(); i++)temp.push(mins[top][i]);
        vector<long long>tp;int aa=0;
        while(aa<k && !temp.empty()){
            tp.push_back(temp.top());
            temp.pop();
        }
        mins[top]=tp;
        for(int i=0; i<adj[top].size(); i++){
            pq.push({cc+adj[top][i].second, adj[top][i].first});
            //mins[adj[top][i].first].push_back(cc+adj[top][i].second);
        }
    }
//    for(int i=1; i<=n; i++){
//        for(int j=0; j<mins[i].size(); j++)cout<<mins[i][j]<<" ";
//        cout<<endl;
//    }
    sort(mins[n].begin(),mins[n].end());
    for(int i=0; i<k && i<mins[n].size(); i++)cout<<mins[n][i]<<" ";

    return 0;
}