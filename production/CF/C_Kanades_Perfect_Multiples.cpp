//  C. Kanade's Perfect Multiples

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        unordered_set<int>st;
        vector<int>nums(n);
        for(int i=0; i<n; i++){cin>>nums[i];}
        unordered_map<int,bool>mp;
        for(int i=0; i<n; i++)mp[nums[i]]=false;
        for(int i=0; i<n; i++)st.insert(nums[i]);
        sort(nums.begin(),nums.end());
        bool fl=true;
        vector<int>ans;
        for(int i=0; fl==true && i<n; i++){
            if(mp[nums[i]]==false){
                ans.push_back(nums[i]);
                for(int j=1; j*nums[i]<=k ; j++){
                    if(st.find(nums[i]*j)==st.end()){fl=false;break;}
                    else mp[j*nums[i]]=true;
                }
            }
        }
        if(fl==false)cout<<-1<<endl;
        else{
            cout<<ans.size()<<endl;
            for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    
    return 0;
}
