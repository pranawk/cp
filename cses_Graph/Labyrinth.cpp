//  Labyrinth

#include<bits/stdc++.h>

using namespace std;
int n,m,s_i=-1,s_j;
string path;
int ans=INT_MAX;
struct triple{
    int ii;
    int jj;
};
queue<triple>q;
void solve(vector<string>&s){
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    vector<vector<pair<int,int>>>parent(n,vector<pair<int,int>>(m));
    while(!q.empty()){
        int sz=q.size();
        while(sz--){
            int i=q.front().ii, j=q.front().jj;
            q.pop();
            if(s[i][j]=='B'){
                int ti,tj;
                while(!(i==s_i &&j==s_j)){
                    ti=parent[i][j].first;tj=parent[i][j].second;
                    if(ti<i)path.push_back('D');
                    else if(ti>i)path.push_back('U');
                    else if(tj<j)path.push_back('R');
                    else if(tj>j)path.push_back('L');
                    i=ti;j=tj;
                }
                reverse(path.begin(),path.end());
                ans=path.size();
                return;
            }
            if(i-1>=0 && visited[i-1][j]==false && (s[i-1][j]=='.'||s[i-1][j]=='B')){q.push({i-1,j}); visited[i-1][j]=true; parent[i-1][j]={i,j};}
            if(i+1<n && visited[i+1][j]==false && (s[i+1][j]=='.'||s[i+1][j]=='B')){q.push({i+1,j});  visited[i+1][j]=true; parent[i+1][j]={i,j};}
            if(j-1>=0 && visited[i][j-1]==false && (s[i][j-1]=='.'||s[i][j-1]=='B')){q.push({i,j-1}); visited[i][j-1]=true; parent[i][j-1]={i,j};}
            if(j+1<m && visited[i][j+1]==false && (s[i][j+1]=='.'||s[i][j+1]=='B')){q.push({i,j+1}); visited[i][j+1]=true; parent[i][j+1]={i,j};}
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    vector<vector<int>>cost(n,vector<int>(m,INT_MAX));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j]=='A'){q.push({i,j});s_i=i;s_j=j; solve(s); break;}
        }
        if(s_i!=-1)break;
    }
    if(ans==INT_MAX)cout<<"NO"<<endl;
    else cout<<"YES"<<endl<<ans<<endl<<path<<endl;;
    return 0;
}