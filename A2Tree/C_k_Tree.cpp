//  C. k-Tree

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int dp[101][2];
int n,k,d;
int solve(int sum, bool fl){
    if(sum==n && fl==true)return 1;
    if(sum>=n)return 0;
    if(dp[sum][fl]!=-1)return dp[sum][fl];
    int ss=0;
    for(int i=1; i<=k; i++){
        if(sum+i<=n)ss=(ss+solve(sum+i,(i>=d)|fl))%MOD;
    }
    return dp[sum][fl]=ss;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>d;
    for(int j=0; j<101; j++){
        for(int k=0; k<2; k++)dp[j][k]=-1;
    }
    cout<<solve(0,false);
    return 0;
}