//  D. Yaroslav and Productivity

#include<bits/stdc++.h>

using namespace std;
long long dp[200001][2];
long long solve(vector<int>&a, unordered_set<int>&b, int ii, bool fl){
    if(ii<0)return 0;
    if(fl==true){
        if(b.find(ii+1)!=b.end()){
            if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a,b,ii-1,fl);
            if(dp[ii][1]==LLONG_MAX/2)dp[ii][1]=solve(a,b,ii-1,false);
            return max(a[ii]+dp[ii][0], -a[ii]+dp[ii][1]);
        }else{
            if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a,b,ii-1,fl);
            return a[ii]+dp[ii][0];
        }
    }
    else{
        if(b.find(ii+1)!=b.end()){
            if(dp[ii][0]==LLONG_MAX/2)dp[ii][0]=solve(a,b,ii-1,true);
            if(dp[ii][1]==LLONG_MAX/2)dp[ii][1]=solve(a,b,ii-1,false);
            return max(-a[ii]+dp[ii][1], a[ii]+dp[ii][0]);
        }else{
            if(dp[ii][1]==LLONG_MAX/2)dp[ii][1]=solve(a,b,ii-1,fl);
            return -a[ii]+dp[ii][1];
        }
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        unordered_set<int>st;
        int temp;
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++){cin>>temp;st.insert(temp);}
        for(int i=0 ;i<200001; i++){
            for(int j=0; j<2; j++)dp[i][j]=LLONG_MAX/2;
        }
        long long ans=solve(a,st,n-1,true);
        cout<<ans<<endl;
    }
    return 0;
}