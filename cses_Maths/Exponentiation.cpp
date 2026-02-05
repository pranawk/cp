//  Exponentiation

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int pow_mod(long long a, long long b){
    long long exp=1;
    while(b>0){
        if((b&1)==1)exp=(1ll*exp*a)%MOD;
        a=(1ll*a*a)%MOD;
        b>>=1;
    }
    return (int)exp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long a,b;
        cin>>a>>b;
        cout<<pow_mod(a,b)<<endl;
    }
    return 0;
}