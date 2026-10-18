//  A. Hey, It's Me, Souvlakity

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
        int fo=INT_MAX, so=INT_MIN;
        int cna=0;
        for(int i=0; i<n; i++)if(s[i]=='1'){fo=min(fo,i);so=max(so,i);cna++;}
        if(cna>2)cout<<so-fo<<endl;
        else if(cna==2)cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}