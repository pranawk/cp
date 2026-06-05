//  C. Barcode

#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX;
int x,y,m,n;
int dp[1001][1001][2];
long long solve(vector<pair<int,int>>&wb, int i ,int ci, bool bl){
    if(i==m && ci>=x && ci<=y)return 0;
    if(i==m)return 1000000;
    long long curr=0;

    if(ci+1>y){
        if(bl==true){
            curr+=n-wb[i].second;
            if(dp[i+1][1][0]==-1)dp[i+1][1][0]=solve(wb,i+1,1,false);
            return curr +dp[i+1][1][0];
        }
        else{
            curr+=n-wb[i].first;
            if(dp[i+1][1][1]==-1)dp[i+1][1][1]=solve(wb,i+1,1,true);
            return curr +dp[i+1][1][1];
        }
    }
    else if(ci<x){
        if(bl==true){
            curr+=n-wb[i].first;
            if(dp[i+1][ci+1][1]==-1)dp[i+1][ci+1][1]=solve(wb,i+1,ci+1,true);
            return curr +dp[i+1][ci+1][1];
        }
        else{
            curr+=n-wb[i].second;
            if(dp[i+1][ci+1][0]==-1)dp[i+1][ci+1][0]=solve(wb,i+1,ci+1,false);
            return curr +dp[i+1][ci+1][0];
        }
    }
    else{
        if(bl==true){
            if(dp[i+1][ci+1][1]==-1)dp[i+1][ci+1][1]=solve(wb,i+1,ci+1,true);
            if(dp[i+1][1][0]==-1)dp[i+1][1][0]=solve(wb,i+1,1,false);
            return min(n-wb[i].first+dp[i+1][ci+1][1],n-wb[i].second+dp[i+1][1][0]);
        }
        else{
            if(dp[i+1][ci+1][0]==-1)dp[i+1][ci+1][0]=solve(wb,i+1,ci+1,false);
            if(dp[i+1][1][1]==-1)dp[i+1][1][1]=solve(wb,i+1,1,true);
            return min(n-wb[i].second+dp[i+1][ci+1][0],n-wb[i].first+dp[i+1][1][1]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<1001; i++){
        for(int j=0; j<1001; j++){dp[i][j][0]=-1;dp[i][j][1]=-1;}
    }
    cin>>n>>m>>x>>y;
    vector<pair<int,int>>wb(m,{0,0});    //{white,black}
    char c;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>c;
            if(c==46)wb[j].first++;
            else wb[j].second++;
        }
    }
    //cout<<solve(wb,0,0,true)<<" "<<solve(wb,0,0,false)<<endl;
    ans=min(solve(wb,0,0,true), solve(wb,0,0,false));
    cout<<ans<<endl;

    return 0;
}