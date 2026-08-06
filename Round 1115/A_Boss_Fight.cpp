//  A. Boss Fight

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
        vector<int>a;
        unordered_map<int,int>mp;
        int temp;
        for(int i=0; i<n; i++){cin>>temp;mp[temp]++;}
        vector<pair<int,int>>pp;
        for(auto i: mp)pp.push_back({i.second,i.first});
        sort(pp.begin(),pp.end());
        for(int i=0; i<pp.size(); i++){
            for(int j=0; j<pp[i].first; j++)a.push_back(pp[i].second);
        }
        int l=0,r=n-1;
        int ans=0;
        //for(int i=0; i<n; i++)cout<<a[i]<<" ";
        while(l<=r){
            if(l==r){
                ans+=a[l];break;
            }
            if(a[l]==a[r]){
                ans+=a[l]*2;break;
            }
            ans+=a[l];
            ans+=a[r];
            l++;r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}