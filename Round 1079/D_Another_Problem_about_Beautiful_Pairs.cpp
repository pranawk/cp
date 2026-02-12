//  D. Another Problem about Beautiful Pairs

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
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        set<int>st;
        unordered_map<int,unordered_set<int>>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]].insert(i);
        }
        st.insert(nums[0]);
        mp[nums[0]].insert(0);
        long long ans=0;
        for(int i=1; i<n; i++){
            for(auto el: st){
                if(el*nums[i]>i+1)break;
                if(mp[el].find(i-el*nums[i])!=mp[el].end()){ans++;}
            }
            st.insert(nums[i]);
            mp[nums[i]].insert(i);
        }
        cout<<ans<<endl;
    }
    return 0;
}