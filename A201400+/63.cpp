#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    int mx=*max_element(nums.begin(),nums.end());
    for(int i=0; i<n; i++)cin>>nums[i];
    vector<int>suff(n,15000000),pre(n,15000000);
    int ssum=0;
    for(int i=1; i<k;i++)ssum+=nums[i];
    for(int i=0;i<=n-k; i++){
        suff[i]=ssum;
        ssum-=nums[i+1];
        ssum+=nums[i+k];
    }
    int psum=0;
    for(int i=n-1; i>=n-k; i--)psum+=nums[i];
    for(int i=n-1; i>=k-1; i--){
        pre[i]=psum;
        psum-=nums[i-1];
        psum+=nums[i-k];
    }
    int ans=INT_MAX;
    int ind=0;
    for(int i=0; i<n; i++){
        if(ans>min(nums[i]+suff[i], nums[i]+pre[i])){
            ans=min(ans,min(nums[i]+suff[i], nums[i]+pre[i]) );
            ind=i;
        }
    }
    cout<<ind+1<<endl;
    return 0;
}