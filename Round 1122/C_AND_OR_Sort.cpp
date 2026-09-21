//  C. AND, OR, Sort!

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
        string s;
        cin>>s;
        if(s[0]=='1'){
            int cn=0;
            for(int i=0; i<n; i++){
                if(s[i]=='0')cn++;
            }
            cout<<cn<<endl;
            continue;
        }
        int ans=0;
        int zc=0,oc=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0' && oc!=0)zc++;
            if(s[i]=='1')oc++;
            if(zc==oc){ans+=zc;
                zc=0;oc=0;}
        }
        ans+=min(zc,oc);
        cout<<ans<<endl;
    }
    return 0;
}