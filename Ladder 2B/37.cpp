#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    long long ans=1;
    while(k>0){
        if(k%2==1)break;
        k/=2;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}