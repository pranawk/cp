#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>freq(mx+1, 0);
        vector<int>div3;
        for(int i=0; i<n; i++){
            if(nums[i]%3==0)div3.push_back(nums[i]/3);
            if(nums[i]%2==0)div3.push_back(nums[i]/2);
            div3.push_back(nums[i]);
            freq[nums[i]/4]++;
        }
        for(int i=mx-1; i>=0; i--){
            freq[i]=freq[i]+freq[i+1];
        }
        for(int i=0; i<div3.size(); i++)freq[div3[i]]++;
        int ans=1;
        for(int i=1; i<mx+1; i++){
            if(freq[i]>=n-k)ans=i;
        }
//        for(int i=1; i<mx+1; i++)cout<<freq[i]<<" ";
//        cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}