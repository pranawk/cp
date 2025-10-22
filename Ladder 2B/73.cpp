#include<bits/stdc++.h>
using namespace std;
const int MOD=pow(10,9)+7;
unsigned powmod(unsigned base,unsigned exp,unsigned modulo){
    unsigned res=1;
    while(exp!=0){
        if((exp & 1)!=0){
            res=(1ll*res*base)%modulo;
        }
        base=(1ll*base*base)%modulo;
        exp>>=1;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    cout<<powmod((powmod(2,m,MOD)-1),n,MOD)<<endl;
    return 0;
}