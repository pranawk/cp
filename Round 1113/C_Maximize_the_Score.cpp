//  C. Maximize the Score

#include<bits/stdc++.h>

using namespace std;
unordered_map<int,int>mp;
long long dp[400002];
int n;
long long solve(vector<int>&a, int ii){
    if(ii>=2*n)return 0;
    long long aa,b;
    if(dp[ii+1]==-1)dp[ii+1]=solve(a,ii+1);
    aa=1+dp[ii+1];
    if(dp[mp[a[ii]]+1]==-1)dp[mp[a[ii]]+1]=solve(a,mp[a[ii]]+1);
    b=1ll*(mp[a[ii]]-ii+1)*(mp[a[ii]]-ii+1)+dp[mp[a[ii]]+1];
    dp[ii]=max(aa,b);
    return dp[ii];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        vector<int>a(2*n);
        for(int i=0; i<2*n; i++){cin>>a[i];mp[a[i]]=i;}
        for(int i=0; i<2*n+1; i++)dp[i]=-1;
        cout<<solve(a, 0)<<endl;
    }
    return 0;
}