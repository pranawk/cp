//  A. Walking Master

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans= 0;
        if(d>=b){ans+=d-b; a+=ans;}
        else{cout<<-1<<'\n';continue;}
        if(a<c){cout<<-1<<'\n';continue;}
        ans+= a-c;
        cout<<ans<<'\n';
    }
    return 0;
}