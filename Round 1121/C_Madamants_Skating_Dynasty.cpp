//  C. Madamant's Skating Dynasty

#include<bits/stdc++.h>

using namespace std;
const int MOD=998244353;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        if(n==1){cout<<0<<endl;continue;}
        sort(a.begin(),a.end());
        long long dd=0;
        long long ans=0;
        long long  cn=1; long long pp=1;
        for(int i=n-2; i>=0; i--){
                int dif=a[i+1]-a[i];
                dd+=(cn)*dif;
                dd%=MOD;
                ans=(ans*(cn)+ pp*dd);
                pp=(pp*cn)%MOD;
                cn++;
                ans%=MOD;
//                 cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }
    return 0;
}