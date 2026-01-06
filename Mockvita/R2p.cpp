#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<bool>>visited,int n, vector<string>&s, int i,int j,int &ans, int sum){
    //if(i==n){ans=min(ans,sum);return;}
    visited[i][j]=true;
    if(j+1==s[i].size()&& visited[i][0]==false && s[i][0]=='0')solve(visited,n, s, i,0,ans,sum+1);
    if(j-1==-1 && visited[i][s[i].size()-1]==false && s[i][s[i].size()-1]=='0')solve(visited,n, s, i,s[i].size()-1,ans,sum+1);
    if(j+1<s[i].size()&& visited[i][j+1]==false && s[i][j+1]=='0')solve(visited,n, s, i,j+1,ans,sum+1);
    if(j-1>=0 && visited[i][j-1]==false && s[i][j-1]=='0')solve(visited,n, s, i,j-1,ans,sum+1);
    if(i+1<n && visited[i+1][j*2]==false && s[i+1][j*2]=='0'){
        if(i==n-2){ans=min(ans,sum+1);return;}
        solve(visited,n, s, i+1,j*2,ans,sum+1);}
    if(i+1<n && visited[i+1][j*2+1]==false && s[i+1][j*2+1]=='0'){
        if(i==n-2){ans=min(ans,sum+1);return;}
        solve(visited,n, s, i+1,j*2+1,ans,sum+1);}
    if(i-1>=0 && visited[i-1][j/2]==false && s[i-1][j/2]=='0')solve(visited,n, s, i-1,j/2,ans,sum+1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cin.ignore();
    int nn=n;
    vector<string>s;
    string ss;
    while(nn){
            getline(cin>>ws, ss);
            if(ss.size()==0)continue;
            s.push_back(ss);
            nn--;
        }
//    while(nn--){
//        string ss;
//        cin>>ss;
//        s.push_back(ss);
//    }
    vector<vector<bool>>visited;
    nn=4;
    for(int i=0; i<n; i++){
        vector<bool>v(nn,false);
        visited.push_back(v);
        nn*=2;
    }
    int ans=INT_MAX;
    for(int i=0; i<4; i++){
        if(s[0][i]=='0'){solve(visited,n,s,0,i,ans,1);}
        }
    cout<<ans<<endl;
    return 0;
}