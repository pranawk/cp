//  B. Mashmokh and ACM

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int n;
int dp[2001][2001];
int solve(int aa, int k){
    if(dp[aa][k]!=-1)return dp[aa][k];
    if(k==0)return 1;
    int ans=0;
    for(int i=1; i*aa<=n; i++){
        ans=(ans+solve(i*aa, k-1))%MOD;
    }
    dp[aa][k]=ans;
    return dp[aa][k];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>n>>k;
    int ans=0;
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++)dp[i][j]=-1;
    }
    for(int i=1; i<=n; i++){
        ans=(ans+solve(i,k-1))%MOD;
    }
    cout<<ans;
    return 0;
}