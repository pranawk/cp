//  D. Christmas Tree Decoration

#include<bits/stdc++.h>

using namespace std;

const int MOD=998244353;
long long pp(int i){
    if(i==0)return 1;
    return (1ll*i*pp(i-1))%MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n+1);
        for(int i=0; i<n+1; i++)cin>>nums[i];
        long long sum=0;
        for(int i=0; i<=n; i++)sum+=nums[i];
        int fn=1;
        if(sum%n==0)fn=0;
        long long ss=sum;
        sum/=n;
        bool fl=true;
        int mx=*max_element(nums.begin()+1,nums.end());
        if(mx>=sum+2){cout<<0<<endl;continue;}
        for(int i=1; i<=n; i++){
            if(nums[i]<sum){
                nums[0]-=sum-nums[i];
                nums[i]=sum;
                if(nums[0]<0){fl=false;break;}
            }
        }
        if(fl==false){cout<<0<<endl;continue;}
        long long ans=pp(n-1);
        int point=ss%n;
        int pr=point-nums[0];
        ans=(1ll*pp(point)/pp(pr)*pp(n-pr));
        cout<<ans<<endl;
    }
    
    return 0;
}
