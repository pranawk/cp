//  B. AI Finds Nothing Here

#include<bits/stdc++.h>

using namespace std;
const unsigned MOD=998244353;
unsigned powmod(unsigned base, long long exp){
    unsigned res=1;
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
    int tt;
    cin>>tt;
    while(tt--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long aa=(n*m)-(n-r+1)*(m-c+1);
        long long ans=1;
        ans=powmod(2,aa);
        cout<<ans<<endl;
    }
    return 0;
}