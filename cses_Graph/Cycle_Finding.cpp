//  Cycle Finding
/*
Good Question: You use Bellmann ford algo, for n-1 time relaxation ,
If relaxation happen for nth time , there is a negative edge,
To find loop , we have already declarec the parent array, we need to set back....
... n times  , to make sure to get into the loop, into the loop, we just print the result.
*/
#include<bits/stdc++.h>

using namespace std;
int n,m,ti;
bool fl=false;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    vector<int>parent(n+1,-1);
    vector<long long>cost(n+1,0);
    bool fl=false;
    int ii;
    for(int k=0; k<n; k++){
        for(int i=1; i<=n; i++){
            for(int j=0; j<adj[i].size(); j++){
                if(cost[adj[i][j].first]>cost[i]+adj[i][j].second){
                    if(k==n-1){
                        fl=true;
                        ii=adj[i][j].first;
                    }
                    cost[adj[i][j].first]=cost[i]+adj[i][j].second;
                    parent[adj[i][j].first]=i;
                }
            }
        }
    }
    if(fl==false){cout<<"NO";return 0;}
    for (int i = 0; i < n; i++) {
        ii= parent[ii];
    }
    vector<int>pr;
    pr.push_back(ii);
    int jj=ii;
    while(parent[jj]!=ii){
        pr.push_back(parent[jj]);
        jj=parent[jj];
        //if(jj==-1){fl=false;break;}
    }
    pr.push_back(ii);
    cout<<"YES"<<endl;
    for(int i=pr.size()-1; i>=0; i--)cout<<pr[i]<<" ";
    return 0;
}