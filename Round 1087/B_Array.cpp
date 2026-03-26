//  B. Array

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
        vector<int>ans(n);
        for(int i=0; i<n; i++){
            int mx=0,mn=0;
            for(int j=i+1; j<n; j++){
                if(nums[j]>nums[i])mx++;
                else if(nums[j]<nums[i])mn++;
            }
            ans[i]=max(mx,mn);
        }
        for(int i=0; i<n; i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}