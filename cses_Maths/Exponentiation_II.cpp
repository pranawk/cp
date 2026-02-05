//  Exponentiation II

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;

long long pow_mod(long long a,long long b){
    long long ans=1;
    while(b>0){
        if((b&1)==1){ans=(ans*a)%MOD;}
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}
long long pow2_mod(long long a,long long b,long long c){
    long long ans=1;
    vector<int>freq(31,0);

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
        cout<<pow2_mod(a,b,c)<<endl;
    }
    return 0;
}