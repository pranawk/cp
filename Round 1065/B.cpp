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
        vector<long long>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        long long ans=0;
        if(nums[0]==-1&&nums[n-1]==-1){nums[0]=0;nums[n-1]=0;}
        else if(nums[0]==-1){\
            nums[0]=nums[n-1];
        }
        else if(nums[n-1]==-1){nums[n-1]=nums[0];}
        else ans=abs(nums[0]-nums[n-1]);
        for(int i=0; i<n; i++)if(nums[i]==-1)nums[i]=0;
        cout<<ans<<endl;
        for(int i=0; i<n; i++)cout<<nums[i]<<" ";
        cout<<endl;
    }
    return 0;
}