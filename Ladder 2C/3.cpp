#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    int r=(n-k)/2;
    int lc=0,rc=0;
    string ss;
    for(int i=0; i<n; i++){
        if(lc<r && s[i]=='('){lc++;continue;}
        if(rc<r && s[i]==')'){rc++;continue;}
        ss+=s[i];
    }
    cout<<ss<<endl;
    return 0;}