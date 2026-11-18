//  A. Line Trip

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int ans=0;
        for(int i=1; i<n; i++){
            ans=max(ans,a[i]-a[i-1]);
        }
        ans=max(ans, a[0]);
        ans=max(ans, 2*(x-a[n-1]));
        cout<<ans<<'\n';
    }
    return 0;
}