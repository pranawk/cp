#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<bool>>visited, vector<string>grid,int ls,int rs,
            int cn, int ll, int rr, vector<int>&cost,int ccost,int i,int j,int n,bool fw){
    if(i==ll && j==rr){
        if(fw==true)ccost=(i-ls)*(i-ls)+(j-rs)*(j-rs);
        cost.push_back(ccost);return;}
    if(i+1<n && visited[i+1][j]==false ){
        visited[i+1][j]=true;
        if(grid[i+1][j]=='1'){
            bool fl=false;
            if(fw==false){fl=true;fw=true;}
            bool rn=false;
            if(ls==-1){rn=true;ls=i;rs=j;}
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i+1,j,n,fw);
            if(rn==true){ls=-1;}
            if(fl==true)fw=false;
        }
        else{
            bool fl=false;
            if(fw==true){fl=true;ccost=(i+1-ls)*(i+1-ls)+(j-rs)*(j-rs);cn++;}fw=false;
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i+1,j,n,fw);
            if(fl==true)fw=true;
        }
        visited[i+1][j]=false;
    }
    if(i-1>=0 && visited[i-1][j]==false ){
        visited[i-1][j]=true;
        if(grid[i-1][j]=='1'){
            bool fl=false;
            if(fw==false){fl=true;fw=true;}
            bool rn=false;
            if(ls==-1){rn=true;ls=i;rs=j;}
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i-1,j,n,fw);
            if(rn==true){ls=-1;}
            if(fl==true)fw=false;
        }
        else{
            bool fl=false;
            if(fw==true){fl=true;ccost=(i-1-ls)*(i-1-ls)+(j-rs)*(j-rs);cn++;}fw=false;
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i-1,j,n,fw);
            if(fl==true)fw=true;
        }
        visited[i-1][j]=false;
    }
    if(j+1<n && visited[i][j+1]==false ){
        visited[i][j+1]=true;
        if(grid[i][j+1]=='1'){
            bool fl=false;
            if(fw==false){fl=true;fw=true;}
            bool rn=false;
            if(ls==-1){rn=true;ls=i;rs=j;}
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i,j+1,n,fw);
            if(rn==true){ls=-1;}
            if(fl==true)fw=false;
        }
        else{
            bool fl=false;
            if(fw==true){fl=true;ccost=(i-ls)*(i-ls)+(j+1-rs)*(j+1-rs);cn++;}fw=false;
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i,j+1,n,fw);
            if(fl==true)fw=true;
        }
        visited[i][j+1]=false;
    }
    if(j-1>=0 && visited[i][j-1]==false){
         visited[i][j-1]=true;
         if(grid[i][j-1]=='1'){
            bool fl=false;
            if(fw==false){fl=true;fw=true;}
            bool rn=false;
            if(ls==-1){rn=true;ls=i;rs=j;}
            solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i,j-1,n,fw);
            if(rn==true){ls=-1;}
            if(fl==true)fw=false;
         }
         else{
             bool fl=false;
             if(fw==true){fl=true;ccost=(i-ls)*(i-ls)+(j-1-rs)*(j-1-rs);cn++;ls=-1;}fw=false;
             solve(visited,grid,ls,rs,cn,ll,rr,cost,ccost,i,j-1,n,fw);
             if(fl==true)fw=true;
         }
         visited[i][j-1]=false;
     }
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
    solve(visited,grid,-1,-1,0,ei-1,ej-1,ans,0,si-1,sj-1,n,false);
    //for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
    cout<<*min_element(ans.begin(),ans.end())<<endl;
    return 0;
}