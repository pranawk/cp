#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    unordered_map<int,vector<int>>mp;
    for(int i=0; i<n; i++){mp[a[i]].push_back(i);}
    vector<pair<int,int>>ans;
    for(auto i: mp){
        vector<int>nn=i.second;
        if(nn.size()==1){ans.push_back({i.first,0});continue;}
        int diff=nn[1]-nn[0];
        if(nn.size()==2){ans.push_back({i.first,diff});continue;}
        int ii=0;
        for(ii=0; ii<nn.size()-1; ii++){if(nn[ii+1]-nn[ii]!=diff)break;}
        if(ii==nn.size()-1)ans.push_back({i.first,diff});
    }
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}