//  C. Journey

#include<bits/stdc++.h>

using namespace std;

double solve(vector<vector<int>>&adj,int curdis,int ii,unordered_set<int>&st){
    double expected=0.0;
    int child=0;
    for(int i=0; i<adj[ii].size(); i++){
        if(st.find(adj[ii][i])==st.end()){
            st.insert(adj[ii][i]);
            child++;
            expected +=solve(adj,curdis+1,adj[ii][i],st);
            st.erase(adj[ii][i]);
        }
    }
    if(child==0)return curdis*1.0;
    return expected/child;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i=0; i<n-1; i++){
        int a;cin>>a;
        int b;cin>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    unordered_set<int>st;
    st.insert(1);
    cout<<setprecision(15)<<solve(adj,0,1,st)<<endl;
    return 0;
}
