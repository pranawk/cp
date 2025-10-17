#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    int lc=0,rc=0;
    for(int i=0; i<n; i++){
        if(s[i]=='(')lc++;
        else rc++;
    }
    if(lc!=rc){cout<<"NO"<<endl;return 0;}
    if(n%2==1){cout<<"NO"<<endl;return 0;}
    int cn=0;
    for(int i=0; i<n; i++){
        if(cn>0&& s[i]==')')cn--;
        if(s[i]=='(')cn++;
    }
    if(cn>1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}