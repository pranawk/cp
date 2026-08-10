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

    return 0;
}