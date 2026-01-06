//  C. First or Second

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        vector<long long>pre_sum(n,0),suf_sum(n,0);
        long long ps=nums[0];
        pre_sum[1]=ps;
        for(int i=2; i<n; i++){
            ps+=abs(nums[i-1]);
            pre_sum[i]=ps;
        }
        ps=nums[n-1];
        suf_sum[n-2]=ps;
        for(int j=n-3; j>=0; j--){
            ps+=(nums[j+1]);
            suf_sum[j]=ps;
        }
        long long ans=INT_MIN;
        for(int i=0; i<n; i++)ans=max(ans,pre_sum[i]-suf_sum[i]);
        cout<<ans<<endl;
    }
    
    return 0;
}
