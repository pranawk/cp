//  Building Roads

#include<bits/stdc++.h>

using namespace std;
int n,m;
unordered_set<int>st;
vector<bool>visited(100001,false);
void solve(vector<vector<int>>&sd, int a){
    visited[a]=true;
//    if(sd[a].size()==0);
    st.insert(a);
    for(int i=0; i<sd[a].size(); i++){
        if(visited[sd[a][i]]==false)solve(sd,sd[a][i]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<int>>sd(n+1);
    vector<pair<int,int>>ans;
    int a,b;
    while(m--){
        cin>>a>>b;
        sd[a].push_back(b);
        sd[b].push_back(a);
    }
    int ii=1;
    while(ii<n && sd[ii].size()==0){
        ans.push_back({ii,ii+1});
        ii++;
    }
    st.insert(ii);
    while(ii<=n){
        solve(sd,ii);
        while(ii<=n && st.find(ii)!=st.end())ii++;
        if(ii>n)break;
        ans.push_back({ii-1, ii});
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}