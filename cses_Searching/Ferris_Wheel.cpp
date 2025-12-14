//  Ferris Wheel

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    int ans=0;
    int l=0,r=n-1;
    while(l<=r){
        if(nums[l]+nums[r]<=x){ans++;l++;r--;}
        else{
            ans++;
            r--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
