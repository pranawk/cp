#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){cin>>a[i];mp[a[i]]++;}
        bool flag=true;
        for(auto i: mp){
            if(i.second%k!=0){cout<<0<<endl; flag=false;break;}
            i.second/=k;
        }
        if(flag==false)continue;
        long long ans=0;
        int l=0,r=0;
        while(l<n ){
            unordered_map<int,int>mp2;
            while(r<n && mp2[a[r]]<=mp[a[r]]/k){
                mp2[a[r]]++;
                r++;
            }
            ans+=r-l;
            mp2[a[l]]--; l++;
        }
        cout<<ans<<endl;
}
    return 0;
}