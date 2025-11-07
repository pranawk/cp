//https://codeforces.com/problemset/problem/500/A
#include<bits/stdc++.h>
using namespace std;
void s3xy(vector<list<int>>&adj,vector<bool>&visited, int t, int i,bool &fl){
    if(visited[i]==true)return;
    visited[i]=true;
    for(auto ii:adj[i]){
        if(ii==t){fl=true;}
        s3xy(adj,visited, t, ii,fl);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<int>a(n-1);
    for(int i=0; i<n-1; i++)cin>>a[i];
    vector<list<int>>adj(n);
    vector<bool>visited(n,false);
    for(int i=0; i<n-1; i++)adj[i].push_back(i+a[i]);
    bool fl=false;
    s3xy(adj,visited, t-1, 0, fl);
    cout<<(fl==true ? "YES" : "NO")<<endl;
    return 0;
}