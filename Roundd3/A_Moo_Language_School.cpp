//  A. Moo Language School

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        for (int i=0; i<n; i+=k)
        {
            bool fl=false;
            for (int j=i; j<i+k && j<n; j++)if (s[j]=='0')fl=true;
            if (fl==false){ans++;}
        }
        cout<<ans<<endl;
    }
    return 0;
}