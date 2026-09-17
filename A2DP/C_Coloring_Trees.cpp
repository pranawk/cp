//  C. Coloring Trees

#include<bits/stdc++.h>

using namespace std;
int n,m;
long long dp[101][101][101];
long long solve(vector<vector<int>>&cc, vector<int>&a, int prv, int cn, int ii){
    long long aa=LLONG_MAX;
    if(ii==n && cn==0)return 0ll;
    if(ii==n)return LLONG_MAX/2;
    if(cn<0)return LLONG_MAX/2;
    if(dp[prv+1][cn][ii]!=-1)return dp[prv+1][cn][ii];
    if(a[ii]==0){
        for(int i=0; i<m; i++){
            if(i==prv)aa=min(aa, 1ll*cc[i][ii]+solve(cc,a,i,cn,ii+1));
            else aa=min(aa, 1ll*cc[i][ii]+solve(cc,a,i,cn-1,ii+1));
        }
    }
    else{
        if(a[ii]==prv+1){
            aa=min(aa, solve(cc,a,a[ii]-1,cn,ii+1));
        }
        else{
            aa=min(aa, solve(cc,a,a[ii]-1,cn-1,ii+1));
        }
    }
    dp[prv+1][cn][ii]=aa;
//     cout<<aa<<" ";
    return dp[prv+1][cn][ii];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>n>>m>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    vector<vector<int>>cc(m,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>cc[j][i];
    }
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            for(int k=0; k<101; k++)dp[i][j][k]=-1;
        }
    }
    long long aa=solve(cc,a,-1,k,0);
    if(aa>=LLONG_MAX/2)aa=-1;
    cout<<aa;
    return 0;
}