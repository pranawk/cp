//  B. Vika and the Bridge

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>>dis(k+1);
        vector<int>pa(k+1,-1);
        int temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            dis[temp].push_back(i-pa[temp]-1);
            pa[temp]=i;
        }
//         for(int i=1; i<=k; i++){
//             for(int j=0; j<dis[i].size(); j++)cout<<dis[i][j]<<" ";
//             cout<<'\n';
//         }
        for(int i=1; i<=k; i++)dis[i].push_back(n-pa[i]-1);
        int ans=INT_MAX;
        for(int i=1; i<=k; i++){
            int sz= dis[i].size();
            sort(dis[i].begin(),dis[i].end());
            dis[i][sz-1] /=2;
            sort(dis[i].begin(),dis[i].end());
            ans=min(ans, dis[i][sz-1]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}