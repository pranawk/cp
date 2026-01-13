//  B. Arrays Sum

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       int n,k;
       cin>>n>>k;
       vector<int>nums(n);
       for(int i=0; i<n; i++){
        cin>>nums[i];
       }
       int nn=0;
       for(int i=1; i<n; i++)if(nums[i]!=nums[i-1])nn++;
       if(k==1&& nn>0){cout<<-1<<endl;continue;}
       else if(k==1){cout<<1<<endl;continue;}
       int ans=nn/(k-1)+ (nn%(k-1)!=0);
       if(ans==0)ans++;
       cout<<ans<<endl;
    }
    return 0;
}
