//  A. SauSaGe Bank

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
        long long ans=0;
        ans+=1ll*(k-1)*2;
        long long ii=1;
        n-=k-1;
        if(n==0){
            cout<<ans<<endl;
            continue;
        }
        while(n--)ii<<=1ll;
        ans+=ii;
        cout<<ans<<endl;
    }
    return 0;
}