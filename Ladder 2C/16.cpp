#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>b(n+1,0);
    for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        b[i]=a+b[i-1];
    }
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        int ans=(b[r]-b[l-1])/10;
        cout<<ans<<endl;
    }
    return 0;
}