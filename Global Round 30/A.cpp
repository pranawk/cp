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
        int mn=INT_MAX,mx=INT_MIN;
        while(n--){
            int nn;cin>>nn;
            if(nn<mn)mn=nn;
            if(nn>mx)mx=nn;
        }
        int x;cin>>x;
        bool fl=true;
        if(x<mn || x>mx)fl=false;
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}