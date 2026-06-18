//  C. Omsk Programmers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long a,b,x;
        cin>>a>>b>>x;
        long long mn=min(a,b), mx=max(a,b), ans=INT_MAX,cn=0;
        while(mx> mn * x){
            ans=min(ans, cn+abs(mn-mx));
            mx/=x;
            cn++;
        }
        while(mx>0){
            ans=min(ans, cn+abs(mn-mx));
            ans=min(ans,cn+1+abs(mn/x-mx));
            ans=min(ans,cn+2+abs(mn/x-mx/x));
            ans=min(ans,cn+1+abs(mn-mx/x));
            mn/=x;
            mx/=x;
            cn+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}