#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        long long ans=0;
        sort(nums.begin(),nums.end());
        if(n%2==0){
            for(int i=n-1; i>=0; i-=2){
                ans+=nums[i];
            }
        }
        else{
            for(int i=n-1; i>=0; i-=2){
                ans+=nums[i];
            }

        }
        cout<<ans<<endl;
    }
    return 0;
    }
