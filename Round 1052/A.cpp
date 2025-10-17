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
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int ans=0;
        vector<int>nums;
        for(auto i:mp){nums.push_back(i.second);}
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            int temp=(nums.size()-i)*nums[i];
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
    }