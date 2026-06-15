//  Building Teams

#include<bits/stdc++.h>

using namespace std;
int n,m;
bool fl=true;
void solve(vector<vector<int>>&frnd, vector<int>&teams, int a, int aa){
    if(fl==false)return;
    if(teams[a]!=-1){fl=false;return;}
    teams[a]=aa;
    for(int i=0; i<frnd[a].size(); i++){
        if(teams[frnd[a][i]]==-1){
            solve(frnd, teams,frnd[a][i], aa^1);
        }
        else if(teams[frnd[a][i]]==aa){fl=false; return;}
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<int>>frnd(n+1);
    int a, b;
    while(m--){
        cin>>a>>b;
        frnd[a].push_back(b);
        frnd[b].push_back(a);
    }
    vector<int>teams(n+1,-1);
    int ii=1;
    while(ii<=n){
        if(teams[ii]==-1){solve(frnd, teams, ii, 1);}
        ii++;
    }
    //for(int )
    if(fl==false){cout<<"IMPOSSIBLE"; return 0;}
    for(int i=1; i<n+1; i++)cout<<teams[i]+1<<" ";
    return 0;
}