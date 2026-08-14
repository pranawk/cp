//  C. The Fair Nut and String
//.
#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string s2;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='b')s2+=s[i];
        else continue;
    }
    long long ans=1, n=s2.size();
    int cn=0;
    int ii=1;
    int pi=0;
    while(pi<n && s2[pi]=='b')pi++;
    for(int i=pi ; i<n;){
        while(i<n && s2[i]=='a'){i++;cn++;}
        ans*=1ll*(cn+1);
        ans%=MOD;
        cn=0;
        while(i<n && s2[i]=='b')i++;
        ii++;
    }
    cout<<ans-1;
    return 0;
}