#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    long long ans=0;
    for(int i=0; i<n; i++){
        if(nums[i]<0)ans+=i+1-nums[i];
        else{if(nums[i]<i+1)ans+=i+1-nums[i];
            if(nums[i]>i+1)ans+=nums[i]-(i+1);
            }
        //cout<<ans<<" ";
    }
    cout<<ans<<endl;
    return 0;
}