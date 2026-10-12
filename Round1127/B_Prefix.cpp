//  B. Prefix

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
        vector<long long>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        long long mxpref=a[0],mnpref=a[0],ans=a[0];
        for(int i=1; i<n; i++){
            ans=max(ans,a[i]+max(abs(mxpref),abs(mnpref)));
            mxpref= max(a[i]+2*mxpref,a[i]);
            mnpref= min(a[i]+2*mnpref,a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}