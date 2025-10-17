#include<bits/stdc++.h>
using namespace std;

void solve(long long& ans, unordered_map<int,int>&mpp, int ii, vector<int>&a){
    if(ii>=a.size())return;
    if(!mpp.contains(a[ii])||mpp[a[ii]]==0){return;}
    for(int i=ii; i<a.size(); i++){
            if(mpp[a[i]]>0){ans++;
            mpp[a[i]]--;
            solve(ans, mpp, i+1, a);
            mpp[a[i]]++;}
            else return;
    }
}

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
            int ii=i.first;
            int val=i.second;
            mp[ii]=val/k;
        }
        if(flag==false)continue;
        long long ans=0;
        solve(ans,mp,0,a);
        cout<<ans<<endl;
    }
    return 0;
}