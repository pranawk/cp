#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=a; i<n+1; i++){
        if(dp[i-a]!=0)dp[i]=max(dp[i],dp[i-a]+1);
    }
    for(int i=b; i<n+1; i++){
        if(dp[i-b]!=0)dp[i]=max(dp[i],dp[i-b]+1);
    }
    for(int i=c; i<n+1; i++){
        if(dp[i-c]!=0)dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n]-1<<endl;
    return 0;
}