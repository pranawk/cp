#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    unordered_map<int,int>mp;
    while(tt--){
        int h,m;
        cin>>h>>m;
        h=h*100+m;
        mp[h]++;
    }
    int ans=0;
    for(auto i:mp)ans=max(ans,i.second);
    cout<<ans<<endl;
    return 0;
}