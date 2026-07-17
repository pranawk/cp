//  D. Yaroslav and Productivity

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
        vector<int>a(n),b(m);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];
        vector<int>mxs(n,0);
        int nsum=0,psum=0;
        for(int i=0; i<n; i++){
            if(a[i]<0)nsum+=a[i];
            else psum+=a[i];
            mxs[i]=max(psum+nsum, abs(nsum)-psum);
        }
        int ans=0;
        for(int i=0; i<m; i++){
            ans=max(ans, mxs[b[i]-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}