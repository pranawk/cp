//  B. Stubborn Pen

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
        bool fl=true; // tr-> r
        int ans=0;
        for(int i=0 ; i<n; i++){
            if(s[i]=='R' && fl==false){
                fl=true;
                ans++;
            }
            else if(s[i]=='B' && fl==true){
                fl=false;
                ans++;
            }
            fl^=1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}