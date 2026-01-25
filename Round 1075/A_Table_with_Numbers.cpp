//  A. Table with Numbers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        int mn=0;
        int mx=0;
        for(int i=0; i<n; i++){
            if(nums[i]<=min(l,h))mn++;
            else if(nums[i]<=max(l,h))mx++;
        }
        //cout<<mn<<" "<<mx<<endl;
        int ans=0;
        if(mx<=mn){ans+=mx; mn-=mx;}
        else if(mx>mn){ans+=mn; mn=0;}
        ans+=mn/2;
        cout<<ans<<endl;
    }
    return 0;
}