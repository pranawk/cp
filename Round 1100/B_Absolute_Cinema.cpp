//  B. Absolute Cinema

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
        int mx=0;
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                int temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
            mx=max(mx,a[i]);
        }
        long long ans=mx;
        for(int i=0; i<n; i++)ans+=b[i];
        cout<<ans<<endl;
    }
    return 0;
}