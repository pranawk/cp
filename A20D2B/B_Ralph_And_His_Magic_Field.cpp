//  B. Ralph And His Magic Field

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
unsigned long long powmod(unsigned long long base, unsigned long long exp){
    unsigned long long res=1;
    base%=MOD;
    while(exp!=0){
        if((exp&1) !=0)res=(1ll*res*base)%MOD;
        base=(1ll*base*base)%MOD;
        exp>>=1;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n,m,k;
    cin>>n>>m>>k;
    if(k==-1 && (n%2)!=(m%2)){
        cout<<0;
        return 0;
    }
    cout<<powmod(powmod(2,(n-1)),(m-1));
    return 0;
}