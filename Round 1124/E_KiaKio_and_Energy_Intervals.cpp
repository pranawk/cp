//  E. KiaKio and Energy Intervals

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n;  i++)cin>>a[i];
        int ans=0;
        for(int i=1; i<n; i++){
            int mx=max(a[i],a[i-1]);
            int sm=(a[i-1]&mx)^(a[i]&mx);
            ans=max(ans,sm);
        }
        cout<<ans<<endl;
    }
    return 0;
}