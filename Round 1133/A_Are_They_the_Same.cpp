//  A. Are They the Same?

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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        bool fl=true;
        int cn=0;
        for(int i=0; i<n; i++){
            if(b[i]>=a[i] && (b[i]-a[i])%2==0)continue;
            if(a[i]+k <=b[i] && k%2==1)continue;
            fl=false;
            cn++;
        }
        cout<<(fl==true || cn%2==0 ? "YES" : "NO")<<'\n';
    }
    return 0;
}