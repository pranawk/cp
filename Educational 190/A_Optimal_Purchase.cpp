//  A. Optimal Purchase

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       long long a,b,c;
       cin>>a>>b>>c;
       long long ans=0;
       if(b*3<=c){cout<<a*b<<endl;continue;}
       ans+=1ll*(a/3)*c;
       a%=3;
       if(a==2){
        if(2*b>c)ans+=c;
        else ans+=1ll*2*b;
       }
       if(a==1)ans+=min(b,c);
       cout<<ans<<endl;

    }
    return 0;
}