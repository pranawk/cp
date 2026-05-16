//  B. Everything Everywhere

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(gcd(a[i],a[i+1])==abs(a[i]-a[i+1]))ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}