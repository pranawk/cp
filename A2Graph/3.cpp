//https://codeforces.com/problemset/problem/217/A
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<pair<int,int>>&nums, vector<bool>&visited, int i,int n){
    if(visited[i]==true)return;
    visited[i]=true;
    for(int ii=0; ii<n; ii++){
        if(nums[ii].first==nums[i].first || nums[ii].second==nums[i].second){
            dfs(nums, visited, ii,n);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>nums(n);
    for(int i=0; i<n; i++){
        int a,b;cin>>a>>b;
        nums[i]={a,b};
    }
    vector<bool>visited(n,false);
    int ans=0;
    for(int i=0; i<n; i++){
        if(visited[i]==false){
            ans++;
            dfs(nums, visited,i,n);
        }
    }
    cout<<ans-1<<endl;
    return 0;
}