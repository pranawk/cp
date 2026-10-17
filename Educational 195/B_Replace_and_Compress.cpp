//  B. Replace and Compress

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
        int cn=1;
        int ans=1;
        bool fl=true;
        bool fl2=true;
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]){
                cn++;
            }
            else{
                if(cn!=2 && i!=1){
                    if(cn==1 && fl==true){ans++;fl=false;}
                    else if(cn>2 && fl2==true){ans++;fl2=false;}
                }
                cn=1;
            }
            if(i==s.size()-1 && cn>2 && fl2==true)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}