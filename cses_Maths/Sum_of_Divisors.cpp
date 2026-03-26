//  Sum of Divisors

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long ans=0;
    int ii=1;
    while(ii<=n){
        ans+=ii*(n/ii);
        ii++;
    }
    cout<<ans<<endl;
    return 0;
}