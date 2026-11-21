//  B. Playing in a Casino

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(m,vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)cin>>a[j][i];
        }
        long long ans=0;
        for(int i=0; i<m; i++){
            sort(a[i].begin(),a[i].end());
            long long ps=accumulate(a[i].begin(),a[i].end(),0ll);
            for(int j=n-1; j>0; j--){
                ps-=a[i][j];
                ans+=(1ll*j*a[i][j])-ps;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}