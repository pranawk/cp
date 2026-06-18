//  Monsters

#include<bits/stdc++.h>

using namespace std;
int n,m;
queue<pair<int,int>>q2;
void map_cell(vector<string>&s,vector<vector<bool>>&visited, int time, vector<vector<int>>&cells){
    while(!q2.empty()){
        int sz=q2.size();
        while(sz--){
            int ti=q2.front().first, tj=q2.front().second;
            q2.pop();
            if(ti-1>=0 && visited[ti-1][tj]==false && s[ti-1][tj]=='.'){
                cells[ti-1][tj]=time;
                visited[ti-1][tj]=true;
                q2.push({ti-1,tj});//cout<<"D";
            }
            if(ti+1<n && visited[ti+1][tj]==false && s[ti+1][tj]=='.'){
                cells[ti+1][tj]=time;
                visited[ti+1][tj]=true;
                q2.push({ti+1,tj});//cout<<"U";
            }
            if(tj-1>=0 && visited[ti][tj-1]==false && s[ti][tj-1]=='.'){
                cells[ti][tj-1]=time;
                visited[ti][tj-1]=true;
                q2.push({ti,tj-1});//cout<<"L";
            }
            if(tj+1<m && visited[ti][tj+1]==false && s[ti][tj+1]=='.'){
                cells[ti][tj+1]=time;
                visited[ti][tj+1]=true;
                q2.push({ti,tj+1});//cout<<"R";
            }
        }
        time++;
    }
//    cells[ii][jj]=cost;
//    if(ii-1>=0){
//        if(s[ii-1][jj]=='.' && (cells[ii-1][jj]>cost+1 ||cells[ii-1][jj]==-1))map_cell(s,ii-1,jj,cost+1,cells);
//    }
//    if(ii+1<n){
//        if(s[ii+1][jj]=='.' && (cells[ii+1][jj]>cost+1 || cells[ii+1][jj]==-1))map_cell(s,ii+1,jj,cost+1,cells);
//    }
//    if(jj-1>=0){
//        if(s[ii][jj-1]=='.' && (cells[ii][jj-1]>cost+1 || cells[ii][jj-1]==-1))map_cell(s,ii,jj-1,cost+1,cells);
//    }
//    if(jj+1<m){
//        if(s[ii][jj+1]=='.' && (cells[ii][jj+1]>cost+1 || cells[ii][jj+1]==-1))map_cell(s,ii,jj+1,cost+1,cells);
//    }
//    return ;
}
queue<pair<int,int>>q;
string ans;
void solve(vector<string>&s, vector<vector<bool>>&visited, int time, vector<vector<pair<int,int>>>&parent, vector<vector<int>>&cells){
    while(q.size()!=0){
        int sz=q.size();
        while(sz--){
            int ti=q.front().first, tj=q.front().second;
            q.pop();
            if(ans.size()>0)return;
            if(ti==0 || ti==n-1 || tj==0|| tj==m-1){
                int temp_i,temp_j;
                while(1){
                    if(parent[ti][tj].first==-1)break;
                    if(parent[ti][tj].first==ti-1)ans+="D";
                    if(parent[ti][tj].first==ti+1)ans+="U";
                    if(parent[ti][tj].second==tj-1)ans+="R";
                    if(parent[ti][tj].second==tj+1)ans+="L";
                    temp_i=parent[ti][tj].first;temp_j=parent[ti][tj].second;
                    ti=temp_i;
                    tj=temp_j;
                }
                reverse(ans.begin(),ans.end());
                return;
            }
            if(ti-1>=0 && visited[ti-1][tj]==false && s[ti-1][tj]=='.' && (cells[ti-1][tj]>time||cells[ti-1][tj]==-1)){
                visited[ti-1][tj]=true;
                parent[ti-1][tj]={ti,tj};
                q.push({ti-1,tj});//cout<<"D";
            }
            if(ti+1<n && visited[ti+1][tj]==false && s[ti+1][tj]=='.' && (cells[ti+1][tj]>time||cells[ti+1][tj]==-1)){
                visited[ti+1][tj]=true;
                parent[ti+1][tj]={ti,tj};
                q.push({ti+1,tj});//cout<<"U";
            }
            if(tj-1>=0 && visited[ti][tj-1]==false && s[ti][tj-1]=='.' && (cells[ti][tj-1]>time||cells[ti][tj-1]==-1)){
                visited[ti][tj-1]=true;
                parent[ti][tj-1]={ti,tj};
                q.push({ti,tj-1});//cout<<"L";
            }
            if(tj+1<m && visited[ti][tj+1]==false && s[ti][tj+1]=='.' && (cells[ti][tj+1]>time||cells[ti][tj+1]==-1)){
                visited[ti][tj+1]=true;
                parent[ti][tj+1]={ti,tj};
                q.push({ti,tj+1});//cout<<"R";
            }
            //cout<<endl;
        }
        time++;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<int>>cells(n,vector<int>(m,-1));
    vector<string>s(n);
    int ii,jj;
    for(int i=0; i<n; i++)cin>>s[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j]=='M')q2.push({i,j});
            if(s[i][j]=='A'){ii=i;jj=j;}
        }
    }
    vector<vector<bool>>visited2(n,vector<bool>(m,false));
    map_cell(s, visited2, 1, cells);
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++)cout<<cells[i][j]<<" ";
//        cout<<endl;
//    }
    vector<vector<pair<int,int>>>parent(n,vector<pair<int,int>>(m,{-1,-1}));
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    q.push({ii,jj});
    solve(s,visited,1,parent,cells);
    if(ans.size()>0 ||(ii==0 || ii==n-1 || jj==0|| jj==m-1)){
        cout<<"YES"<<endl<<ans.size()<<endl<<ans;
    }
    else cout<<"NO";
    return 0;
}