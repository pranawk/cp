//  D. Three Activities

#include<bits/stdc++.h>

using namespace std;
int dp[100001][8];
int solve(vector<int>&a, vector<int>&b, vector<int>&c, int ii, int bit){
    if(dp[ii][bit]!=-1)return dp[ii][bit];
    if(ii==a.size())return 0;
    int ans=0;
    if((bit&1)==0)ans=max(ans, a[ii]+solve(a,b,c, ii+1, bit|1));
    if((bit&2)==0)ans=max(ans, b[ii]+solve(a,b,c, ii+1, bit|2));
    if((bit&4)==0)ans=max(ans, c[ii]+solve(a,b,c, ii+1, bit|4));
    ans=max(ans, solve(a,b,c, ii+1,bit));
    return dp[ii][bit]=ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        for(int i=0; i<n; i++)cin>>c[i];
        for(int i=0; i<100001; i++){
            for(int j=0; j<8; j++)dp[i][j]=-1;
        }
        cout<<solve(a,b,c,0,0)<<'\n';
    }
    return 0;
}