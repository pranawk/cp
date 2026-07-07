//  B. Crimson Triples

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        long long ans=0;
        for(int i=1; i<=n; i++){
            ans+=(n/i)*(n/i);
        }
        cout<<ans<<endl;
        // ans+=n/factors of(a)
    }
    return 0;
}