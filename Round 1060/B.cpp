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
        vector<int>lm(n);
        lm[0]=nums[0];
        for(int i=1; i<n; i++){
            lm[i]=max(nums[i],lm[i-1]);
        }
        int ans=0;
        if(nums[0]>=nums[1])ans++;
        for(int i=1; i<n; i++){
            if(i%2==0){
                if(nums[i]>=lm[i-1])ans+=nums[i]-lm[i-1]+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}