//  Round Trip

#include<bits/stdc++.h>

using namespace std;
int n,m;
vector<int>ans;
void solve(vector<vector<int>>&roads, vector<int>&parent, int ii, vector<bool>&visited){
    if(ans.size()>3)return;
    for(int i=0; i<roads[ii].size(); i++){
        if(ans.size()>3)return;
        if(visited[roads[ii][i]]==true && parent[ii]!=roads[ii][i]){
            ans.push_back(roads[ii][i]);
            int jj=ii;
            while(jj!=roads[ii][i] ){
                ans.push_back(jj);
                jj=parent[jj];
            }
            ans.push_back(roads[ii][i]);
            return ;
        }
        else if(visited[roads[ii][i]]==false){
            parent[roads[ii][i]]=ii;
            visited[roads[ii][i]]=true;
            solve(roads,parent, roads[ii][i], visited);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<int>>roads(n+1);
    int a,b;
    while(m--){
        cin>>a>>b;
        roads[a].push_back(b);
        roads[b].push_back(a);
    }
    vector<int>parent(n+1, -1);
    vector<bool>visited(n+1,false);
    for(int i=1; i<=n; i++){
        if(ans.size()>3)break;
        if(visited[i]==false){
            visited[i]=true;
            solve(roads,parent,i, visited);
        }
    }
    if(ans.size()==0){cout<<"IMPOSSIBLE";return 0;}
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
    return 0;
}