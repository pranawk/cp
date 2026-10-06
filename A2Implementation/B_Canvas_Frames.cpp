//  B. Canvas Frames

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)mp[a[i]]++;
    int ans=0;
    for(auto i:mp){
        int ii=i.second;
        ii/=2;
        if(ii>0)ans+=ii;;
    }
    cout<<ans/2;
    return 0;
}