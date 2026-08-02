//  A. You Delete, I Delete

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int oc=0,zc=0;
        string ans;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1' && oc==0){oc++;continue;}
            if(s[i]=='0' && zc==0){zc++;continue;}
            ans+=s[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}