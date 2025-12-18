//  B. Nikita and string

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    vector<int>mb(n);
    vector<int>pv_b(n);
    int bcow=0;
    int total_b=0;
    int pv=0;
    for(int i=0; i<n; i++){
        if(bcow<=0){bcow=0;}
        if(bcow>0 && s[i]=='a'){bcow--;}
        else if(s[i]=='b'&& bcow==0){pv=i; bcow++;total_b++;}
        else if(s[i]=='b'){bcow++;total_b++;}
        mb[i]=bcow;
        pv_b[i]=pv;
    }
//    for(int i=0; i<n; i++)cout<<pv_b[i]<<" ";
//    cout<<endl;
//    for(int i=0; i<n; i++)cout<<mb[i]<<" ";
    int mx=0,mx_i=0;
    for(int i=0; i<n; i++)if(mb[i]>mx){mx_i=i;mx=mb[i];}
    int ans=0;
    for(int i=0; i<pv_b[mx_i]; i++)if(s[i]=='a')ans++;
    for(int i=pv_b[mx_i]; i<=mx_i; i++)if(s[i]=='b')ans++;
    for(int i=mx_i+1; i<n; i++)if(s[i]=='a')ans++;
    if(total_b==0)cout<<n<<endl;
    else cout<<ans<<endl;
    return 0;
}
