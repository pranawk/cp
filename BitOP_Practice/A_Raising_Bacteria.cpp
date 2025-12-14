//  A. Raising Bacteria

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    int tt;
//    cin>>tt;
//    while(tt--){
//
//    }
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        ans+=n&1;
        n>>=1;
    }
    cout<<ans<<endl;
    return 0;
}
