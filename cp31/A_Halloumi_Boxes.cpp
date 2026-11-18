//  A. Halloumi Boxes

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        if(k==1){
            bool fl=true;
            int mx=1;
            for(int i=0; i<n; i++){
                if(a[i]<mx)fl=false;
                mx=max(a[i],mx);
            }
            cout<<(fl==true ? "YES" : "NO")<<'\n';
        }
        else cout<<"YES\n";
    }
    return 0;
}