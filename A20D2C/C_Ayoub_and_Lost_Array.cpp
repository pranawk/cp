//  C. Ayoub and Lost Array

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int dp[200005][3];
int n;
long long solve(int ii, int &l, int &r, int sum){
    if(ii==n && sum==0)return 1;
    if(ii==n)return 0;
    if(dp[ii][sum]!=-1)return dp[ii][sum];
    long long ans=0;
    ans+=(ans+((r-l+3)/3*(solve(ii+1, l, r, (sum+l)%3))))%MOD;
    if(l+1<=r)ans=(ans+1ll*((r-l+2)/3*(solve(ii+1,l,r,(sum+l+1)%3))))%MOD;
    if(l+2<=r)ans=(ans+1ll*((r-l+1)/3*(solve(ii+1,l,r,(sum+l+2)%3))))%MOD;
    return dp[ii][sum]=ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,r;
    cin>>n>>l>>r;
    for(int i=0; i<200005; i++){
        for(int j=0; j<3; j++)dp[i][j]=-1;
    }
    cout<<solve(0,l,r,0);
    return 0;
}