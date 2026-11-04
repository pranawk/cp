//  C. Big XOR

#include<bits/stdc++.h>

using namespace std;
vector<int>ans;
vector<int>dp;
int n;
long long solve(long long ii){
    if(dp[ii]!=-1)return dp[ii];
    if(ii>n)return 0;
    int nsm=solve(ii+1);
    if(((ii*2)^ nsm )>(ii^ nsm )){
        ans.push_back(1);
        return dp[ii]=((ii*2)^ nsm );
    }
    else {
        ans.push_back(0);
        return dp[ii]=ii^ nsm ;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        dp.clear();
        ans.clear();
        for(int i=0; i<n+2; i++)dp.push_back(-1);
        solve(1);
        for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
        cout<<'\n';
    }
    return 0;
}