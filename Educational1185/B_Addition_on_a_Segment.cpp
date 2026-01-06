//  B. Addition on a Segment

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
       vector<int>b(n);
       for(int i=0; i<n; i++)cin>>b[i];
       long long sum=0;
       int zm=0,ans;
       for(int i=0; i<n; i++){if(b[i]>0){zm++;sum+=b[i];}}
       if(sum-zm>=n-1)ans=zm;
       else ans=sum-n+1;
       cout<<ans<<endl;
    }
    
    return 0;
}
