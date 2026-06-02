//  C1. Seating Arrangement (Easy Version)

#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,x,cc;
    cin>>n>>x>>cc;
    string s;
    cin>>s;
    long long eia=0;
    long long seat=0;
    long long ae=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='I'){
            if(x>0){x--;seat+=cc-1;eia++;}
        }
        else if(s[i]=='E'){
            if(seat>0){seat--;eia++;}
            else if(x>0 && ae>0){x--;ae--;seat+=cc-1;eia++;}
        }
        else if(s[i]=='A'){
            if(seat>0){seat--;ae++;eia++;}
            else if(x>0){x--;seat+=cc-1;eia++;}
        }
    }
    cout<<eia<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}