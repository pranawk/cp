//  A. Zhily and Array Operating

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
       vector<long long>a(n);
       for(int i=0; i<n; i++)cin>>a[i];
       long long cn=0,cn2=0;
       for(int i=n-1; i>=0; i--){
            cn2+=a[i];
            cn2=max(cn2,a[i]);
            if(cn2>0)cn++;
       }
       cout<<cn<<endl;
    }
    return 0;
}