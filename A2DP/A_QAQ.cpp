//  A. QAQ

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    vector<int>bq(n,0),aq(n,0);
    int cn=0;
    for(int i=0; i<n; i++){
        if(s[i]=='Q')cn++;
        bq[i]=cn;
    }
    cn=0;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='Q')cn++;
        aq[i]=cn;
    }
    int ans=0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='A')ans+=bq[i]*aq[i];
    }
    cout<<ans<<endl;
    return 0;
}