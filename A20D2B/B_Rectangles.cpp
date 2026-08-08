//  B. Rectangles

#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>a[i][j];
    }
    long long ans=0;
    for(int i=0; i<n; i++){
        int cz=0,co=0;
        for(int j=0; j<m; j++){if(a[i][j]==0)cz++;else co++;}
        ans+=1LL<<cz;
        ans+=1LL<<co;
        ans-=2;
    }
    for(int i=0; i<m; i++){
        int cz=0,co=0;
        for(int j=0; j<n; j++){if(a[j][i]==0)cz++;else co++;}
        ans+=1LL<<cz;
        ans+=1LL<<co;
        ans-=(2+co+cz);
    }
    cout<<ans;
    return 0;
}