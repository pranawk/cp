//  B. Yet Another Array Partitioning Task

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    vector<int>nums2=nums;
    sort(nums2.begin(),nums2.end());
    unordered_set<int>st;
    unordered_map<int,int>mp;
    int nn=m*k;int ii=n-1;
    long long sum=0;
    while(nn--){
        st.insert(nums2[ii]);
        mp[nums2[ii]]++;
        sum+=nums2[ii];
        ii--;
    }
    vector<int>ans;
    int kk=0;
    for(int i=0; i<n; i++){
        if(st.find(nums[i])!=st.end() && mp[nums[i]]>0){
            mp[nums[i]]--;
            kk++;
        }
        if(kk==m){ans.push_back(i+1);kk=0;}
    }
    cout<<sum<<endl;
    for(int i=0; i<ans.size()-1; i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
