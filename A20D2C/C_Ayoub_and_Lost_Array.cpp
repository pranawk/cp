//  C. Ayoub and Lost Array

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r;
    cin>>n>>l>>r;
    if(r-l+1>=3){
        int pp=r-l+1;
        long long ans=1;
        for(int j=0; j<n-1; j++){ans*=pp;ans%=MOD;}
        ans*=(pp/3);
        ans%=MOD;
        cout<<ans;
    }
    return 0;
}