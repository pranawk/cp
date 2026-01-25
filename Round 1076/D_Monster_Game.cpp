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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];

        for(int i=0; i<n; i++)cin>>b[i];
        for(int i=1; i<n; i++)b[i]+=b[i-1];
        sort(a.begin(),a.end());
        int ii=n-1;
        while(b[ii]>n)ii--;
        int jj=0;
        long long ans=0;

        while(jj<n){
            ans=max(ans, 1ll*(ii+1)*a[jj]);
            int kk=jj+1;
            int pr=a[jj];
            while(jj<n && a[jj]==pr)jj++;
            if(jj==n)break;
            //cout<<jj<<a[jj]<<endl;
            while(ii>=0 && n-jj<b[ii])ii--;
        }
        cout<<ans<<endl;
    }
    return 0;
}