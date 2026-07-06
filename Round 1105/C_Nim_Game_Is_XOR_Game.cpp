//  C. Nim Game Is XOR Game

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
        int am=0;
        for(int i=0; i<n; i++)am^=a[i];
        int ans=0;
        for(int i=0; i<n; i++){
            if((am^a[i])<=a[i])ans++;
        }
        if(am==0){cout<<1<<endl;continue;}
        cout<<ans<<endl;
    }
    return 0;
}