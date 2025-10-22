#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    if(n==1){cout<<1<<endl;return 0;}
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        for(int ii=2; ii<=nums[i]; ii++){
            if(nums[i]%ii==0)mp[ii]++;
            while(nums[i]%ii==0)nums[i]/=ii;
            if(ii>=317){mp[nums[i]]++;break;}
        }
    }
    int ans=1;
    for(auto &i: mp){
        ans=max(ans,i.second);
    }
    cout<<ans<<endl;
    return 0;
}