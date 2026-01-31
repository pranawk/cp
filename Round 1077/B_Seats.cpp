//  B. Seats

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
        int i=0;
        int ans=0;
        int cn=0;
        if(s[i]=='0'){
            while(i<n && s[i]=='0'){cn++;i++;}
        }
        if(i==n){cout<<(n+2)/3<<endl;continue;}
        ans+=(cn+1)/3;
        cn=0;
        while(i<n){
            while(i<n && s[i]=='1'){i++;ans++;}
            cn=0;
            while(i<n && s[i]=='0'){cn++; i++;}
            if(i==n)ans+=(cn+1)/3;
            else ans+=cn/3;
        }
        cout<<ans<<endl;
    }
    return 0;
}