//  A. Extremely Round

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       int n;
       cin>>n;
       int ans=0;
       int ii=1;
       while(1){
           if(n>=pow(10,ii))ans+=9;
           else {ans+=n/pow(10,ii-1); break;}
           ii++;
       }
        cout<<ans<<'\n';
    }
    return 0;
}