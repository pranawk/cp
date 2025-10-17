#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,s;
        cin>>n>>s;
        vector<int>nums(n);
        for(int i=0; i<n;i++)cin>>nums[i];
        int ans=0;
        if(abs(nums[0]-s)<abs(nums[n-1]-s))ans=abs(nums[0]-s)+nums[n-1]-nums[0];
        else ans= abs(nums[n-1]-s)+nums[n-1]-nums[0];
        cout<<ans<<'\n';

    }
    return 0;
}