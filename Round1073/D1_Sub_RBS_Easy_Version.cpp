//  D1. Sub-RBS (Easy Version)

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
     int ans=1;
     int i=0;
     while(i<n && s[i]=='('){ans++;i++;}
     i++;
     for(int ii=i; ii<n; ii++){
        if(s[ii]==')')ans--;
     }
     if(ans>0)cout<<-1<<endl;
     else cout<<n-2<<endl;
    }
    return 0;
}