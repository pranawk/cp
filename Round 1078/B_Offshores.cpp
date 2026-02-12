//  B. Offshores

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x,y;
        cin>>n>>x>>y;
        long long ii,ans=0;
        long long mx=0;
        for(int i=0; i<n; i++){
            cin>>ii;
            ans+=(ii/x)*y;
            mx=max(mx,((ii/x)*(x-y)+ii%x));
        }
        ans+=mx;
        cout<<ans<<endl;
    }
    return 0;
}