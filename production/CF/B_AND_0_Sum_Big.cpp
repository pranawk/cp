//  B. AND 0, Sum Big

#include<bits/stdc++.h>

using namespace std;
unsigned powmod(unsigned base, unsigned exponent, unsigned MOD){
    unsigned ans=1;
    while(exponent!=0){
        if(exponent&1==1){
            ans=(1ll*ans*base)%MOD;
        }
        base=(1ll*base*base)%MOD;
        exponent>>=1;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        unsigned n,k;
        cin>>n>>k;
        cout<<powmod(n,k,1000000007)<<endl;
    }
    
    return 0;
}
