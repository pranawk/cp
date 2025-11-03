#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
//    unordered_set<int>st;
//    unordered_map<int,int>mp;
//    for(int i=0; i<n; i++){
//        if(st.find(nums[i])!=st.end()){mp[nums[i]]++;dup.insert(nums[i]);}
//        st.insert(nums[i]);
//    }
    //if(mp.size()==0){cout<<0<<endl;return 0;}
    unordered_set<int>pre,pre2;
    int ans=INT_MAX;
    for(int j=n-1; j>=0; j--){
        if(pre.find(nums[j])!=pre.end()){ans=min(ans,j+1);break;}
        pre.insert(nums[j]);
    }
    pre.clear();
    for(int i=0; i<n; i++){
        if(pre.find(nums[i])!=pre.end())break;
        pre.insert(nums[i]);pre2=pre;
        for(int j=n-1; j>i; j--){
            if(pre.find(nums[j])!=pre.end()){ans=min(ans,j-i);break;}
            pre.insert(nums[j]);
            if(j==i+1)ans=0;
        }
        pre=pre2;
    }
    if(n==1)ans=0;
    cout<<ans<<endl;
    return 0;
}