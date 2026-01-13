//  B. Hourglass

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int s,k,m;
        cin>>s>>k>>m;
        int ans=0;
        if(k>=s){
            m%=k;
            ans=s-m;
            if(ans<0)ans=0;
        }
        else{
            int ii= m/k;
            if(ii%2==0)s=s;
            else s=k;
            ans= s-m%k;
            if(ans<0)ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}