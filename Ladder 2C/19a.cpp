#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<bool>>visited, vector<string>grid,int ls,int rs,
            int ll, int rr, vector<int>&cost,int ccost,int i,int j,int n,bool fw){
    if(fw==true && (grid[i][j]=='0'))ccost=(i-ls)*(i-ls)+(j-rs)*(j-rs);
    fw=(grid[i][j]=='1');
    if(i==ll && j==rr){cost.push_back(ccost);return;}
    visited[i][j]=true;
    if(j+1<n && visited[i][j+1]==false){
        bool fl=false;
        if(ls==-1&&grid[i][j+1]=='1'){ls=i;rs=j;}
        solve(visited,grid,ls,rs,ll,rr,cost,ccost,i,j+1,n,fw);
        if(fl==true){ls=-1;}}
    if(i+1<n && visited[i+1][j]==false){
        bool fl=false;
        if(ls==-1&&grid[i+1][j]=='1'){ls=i;rs=j;fl=true;}
        solve(visited,grid,ls,rs,ll,rr,cost,ccost,i+1,j,n,fw);
        if(fl==true){ls=-1;}}
    if(i-1>=0 && visited[i-1][j]==false){
        bool fl=false;
        if(grid[i-1][j]=='1'&& ls==-1){ls=i;rs=j;fl=true;}
        solve(visited,grid,ls,rs,ll,rr,cost,ccost,i-1,j,n,fw);
        if(fl==true){ls=-1;}}

    if(j-1>=0 && visited[i][j-1]==false){
        bool fl=false;
        if(grid[i][j-1]=='1'&& ls==-1){ls=i;rs=j;}
        solve(visited,grid,ls,rs,ll,rr,cost,ccost,i,j-1,n,fw);
        if(fl==true){ls=-1;}}
     return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int si,sj,ei,ej;
    cin>>si>>sj>>ei>>ej;
    vector<string>grid(n);
    for(int i=0; i<n; i++){
        cin>>grid[i];
    }
    vector<vector<bool>>visited(n,vector(n,false));
    vector<int>ans;
    solve(visited,grid,-1,-1,ei-1,ej-1,ans,0,si-1,sj-1,n,false);
    //for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
    cout<<*min_element(ans.begin(),ans.end())<<endl;
    return 0;
}
