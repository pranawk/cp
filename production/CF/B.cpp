#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x,y;
        cin>>n>>x>>y;
        int p=max(abs(x),abs(y));
        int q=min(abs(x),abs(y));
        int cn4=0;
        bool fl=true;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='4')cn4++;
        }
        if(p>n)fl=false;
        int lo=cn4-(n-p);
        //cout<<lo<<" ";
        if(n-lo<q)fl=false;
        cout<<(fl==false ? "NO" : "YES")<<endl;
       // cout<<cn4;
    }
    return 0;
}