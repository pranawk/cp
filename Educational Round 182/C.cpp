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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        long long ans=0;
        int rr=0;
        for(int i=0; i<n-1; i++){
            int temp=max(a[i],b[i]);
            if(temp<=a[i+1] && temp<=b[i+1]){
                rr++;}
        }
        if(rr>0){ans=2;rr--;}
        while(rr>0){ans=(ans*2+2)%MOD;rr--;}

        cout<<(ans+2)%MOD<<endl;
    }
    return 0;
}