//  C1. A Simple GCD Problem (Easy Version)

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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        int ans=0;
        int pasg=gcd(a[0],a[1]);
        if(a[0]!=pasg){
            if(b[0]>=pasg)ans++;
        }
        else if(a[0]==pasg && b[0]>=2*pasg){
            for(i=pasg; i<=b[i]; i+=pasg)
            if(gcd())
        }
        int cgc;
        for(int i=1; i<n-1; i++){
            cgc=gcd(a[i],a[i+1]);
            if(cgc==pasg && a[i]!=cgc)ans++;
            else if(lcm(cgc,pasg)*2<b[i] ){
                if(b[0]>=pasg)ans++;
            }
            pasg=cgc;
        }
        pasg=gcd(a[n-2],a[n-1]);
        if(a[n-1]!=pasg && pasg<=b[n-1])ans++;
        else if(a[n-1]==pasg && b[n-1]>=2*pasg)ans++;
        cout<<ans<<endl;
    }
    return 0;
}