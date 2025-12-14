//  B. Fedor and New Game

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>sol(m);
    for(int i=0; i<m; i++)cin>>sol[i];
    int o_sol;cin>>o_sol;
    int ans=0;
    for(int i=0; i<m; i++){
        sol[i]^=o_sol;
        int curr=0;
        while(sol[i]>0){curr+=sol[i]&1;sol[i]>>=1;}
        if(curr<=k)ans++;
    }
    cout<<ans<<endl;
//    int tt;
//    cin>>tt;
//    while(tt--){
//
//    }
    
    return 0;
}
