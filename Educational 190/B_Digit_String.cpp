//  B. Digit String

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
        if(s.size()==0){cout<<0<<endl;continue;}
        int cn=0,cn2=0,cn13=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='4')cn++;
            else if(s[i]=='2')cn2++;
            else cn13++;
            if(cn2>cn13){
                cn+=cn13;
                cn13=0;cn2=0;
            }
        }
        cn+=cn2;
        cout<<cn<<endl;
    }
    return 0;
}