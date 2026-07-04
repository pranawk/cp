//  B. Party Monster

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int cn=0,cn2=0;
        int n;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='(')cn++;
            else cn2++;
        }
        if(cn==cn2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}