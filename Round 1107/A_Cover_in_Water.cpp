//  A. Cover in Water

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
        int ans=0;
        int cn=0;
        bool fl=false;
        for(int i=0; i<n; i++){
           if(s[i]=='.')cn++;
           else {
            if(cn>=2)ans+=2;
            else if(cn==1)ans++;
            cn=0;
           }
           if(cn==3)fl=true;
        }
        if(fl==true){
            cout<<2<<endl;
            continue;
        }
        if(cn>=2)ans+=2;
        if(cn==1)ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}