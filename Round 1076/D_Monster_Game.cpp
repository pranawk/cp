//  D. Monster Game

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
        vector<long long>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];

        for(int i=0; i<n; i++)cin>>b[i];
        for(int i=1; i<n; i++)b[i]+=b[i-1];
        sort(a.begin(),a.end());
        long long ans=0;
        int jj=n-1;
        while(b[jj]>n)jj--;
        int ii=0;
        while(ii<n){
            ans=max(ans,1ll*a[ii]*(jj+1));
            ii++;
            while(n-ii<b[jj])jj--;
        }

        cout<<ans<<endl;
    }
    return 0;
}