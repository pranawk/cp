//  B. Rock and Lever

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
       int n;
       cin>>n;
       vector<int>a(n);
       long long ans=0;
       for(int i=0; i<n; i++)cin>>a[i];
       vector<int>bitfreq(34,0);
       for(int i=0; i<n; i++){
        int aa=0;
        while(a[i]!=0){
            a[i]>>=1;
            aa++;
        }
        ans+=bitfreq[aa];
        bitfreq[aa]++;
       }
       cout<<ans<<endl;
    }
    
    return 0;
}
