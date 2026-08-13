//  Round Trip II

#include<bits/stdc++.h>

using namespace std;
int n,k;
void solve(vector<vector<int>>&adj, int ii){

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<vector<int>>adj(n+1);
    for(int i=0; i<k; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    vector<bool>visited(n+1,false);
    vector<int>parent(n+1);
    bool fl=false; int ii=0;
    for(int i=1; i<=n; i++){
        if(visited[i]==true)continue;
    }
    return 0;
}