//  D. Falling Concrete

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
       for(int i=0; i<n; i++)a[i]-=i;
       sort(a.begin(),a.end());
       map<int,int>mp;
       for(int i=0; i<n; i++){
           if(!mp.count(a[i]))mp[a[i]]++;
       }
        int ans=1;
       for(auto i:mp){
            if(mp.count(i.first-1))mp[i.first]=mp[i.first-1]+1;
            ans=max(ans,mp[i.first]);
       }
        cout<<ans<<endl;
    }
    return 0;
}