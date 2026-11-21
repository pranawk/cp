//  A. Don't Try to Count

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int cn=0;
        while(x.size()<s.size()){x+=x;cn++;}
        int ii=0,jj=0;
        bool fl=false;
        while(ii<x.size()){
            jj=0;
            int pp=ii;
            if(x[pp]==s[jj]){
                 while(jj<s.size() && pp<x.size() && x[pp]==s[jj]){pp++;jj++;}
                 if(pp==x.size() && jj!=s.size()){
                    pp=0;
                    while(jj<s.size() && pp<x.size() && x[pp]==s[jj]){pp++;jj++;}
                    if(jj==s.size()){fl=true; cn++; break;}
                 }
                 if(jj==s.size()){fl=true; break;}
            }
            ii++;
        }
        if(fl==true)cout<<cn<<'\n';
        else cout<<"-1\n";
    }
    return 0;
}