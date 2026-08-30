//  B1. Carrot Chopdown (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for (int i=0; i<n; i++)cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        unordered_map<int,int>mp;
        for (int i=0; i<n; i++)mp[a[i]]++;
        int l=0;
        for (int i=0; i<n; i++)
        {
            while (a[l]<a[i]/2)l++;
            ans=max(ans,n-i+mp[a[i]*2]);
            if (a[i]%2==0)ans=max(ans,n-l+mp[a[i]]);

        }
        
        cout<<ans<<endl;
    }
    return 0;
}