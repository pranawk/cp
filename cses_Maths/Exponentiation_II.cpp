//  Exponentiation II

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
const int MOD2=1000000006;

long long pow_mod(long long a,long long b){
    long long ans=1;
    while(b>0){
        if((b&1)==1){ans=(ans*a)%MOD;}
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}
long long pow_mod2(long long a,long long b){
    long long ans=1;
    while(b>0){
        if((b&1)==1){ans=(ans*a)%MOD2;}
        a=(a*a)%MOD2;
        b>>=1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<pow_mod(a,pow_mod2(b,c))<<endl;
    }
    return 0;
}