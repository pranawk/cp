//  A. Another Popcount Problem

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
        if(k>=n){cout<<n<<endl;continue;}
        int ans=0;
        int ii=1,cn=1;
        while(ii<=n){
            ans+=min(n/ii,k);
            n-=min(n/ii*ii, k*ii);
            ii<<=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}