#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,a,b;
    cin>>k>>a>>b;
    int ans=0;
    ans+=a/k;
    ans+=b/k;
    if(b/k==0&& a%k!=0)ans=-1;
    if(a/k==0&& b%k!=0)ans=-1;
    if(ans==0)cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}