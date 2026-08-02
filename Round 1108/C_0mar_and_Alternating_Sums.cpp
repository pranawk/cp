//  C. 0mar and Alternating Sums

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
long long dp[200001][2];
long long solve(vector<int>&a, int ii, bool fl){
    if(ii<0)return 0;
    if(fl==true){
        if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a, ii, fl);
        if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a, ii, fl);
    }else{
        if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a, ii, fl);
        if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a, ii, fl);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
    }
    return 0;
}