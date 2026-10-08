//  C. Unrequited Love

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
        unordered_map<int,int>mp;
        vector<int>vv(n,INT_MIN/2);
        long long ans=0;
        for(int i=0; i<n-4; i++){
            int val=a[i]+a[i+2]-a[i+4];
            vv[i]=val;
            int ti=mp[val];
            if(i>=2 && vv[i-2]==val)ti--;
            if(i>3 && vv[i-4]==val)ti--;
            if(ti>0){
                ans+=ti;
            }
            mp[val]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}