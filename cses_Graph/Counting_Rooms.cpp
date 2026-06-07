//  Counting Rooms

#include<bits/stdc++.h>

using namespace std;
int n,m;
void solve(vector<string>&s, vector<vector<bool>>&visited, int i,int j){
    if(visited[i][j]==true)return ;
    visited[i][j]=true;
    if(i-1>=0 && s[i-1][j]=='.')solve(s, visited,i-1,j);
    if(i+1<n && s[i+1][j]=='.')solve(s, visited,i+1,j);
    if(j-1>=0 && s[i][j-1]=='.')solve(s, visited,i,j-1);
    if(j+1<m && s[i][j+1]=='.')solve(s, visited,i,j+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    int ans=0;
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j]=='.' && visited[i][j]==false){ans++; solve(s, visited, i,j);}
        }
    }
    cout<<ans<<endl;
    return 0;
}