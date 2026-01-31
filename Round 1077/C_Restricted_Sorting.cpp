//  C. Restricted Sorting

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
        vector<int>nums(n),n2;
        for(int i=0; i<n; i++)cin>>nums[i];
        n2=nums;
        sort(n2.begin(),n2.end());
        int mn=n2[0],mx=n2[n-1];
        //vector<int>notset;
        bool fl=true;
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i]!=n2[i]){
                ans=min(ans, max(mx-nums[i], nums[i]-mn));
                fl=false;}
        }
        if(fl==true){cout<<-1<<endl;continue;}
//        sort(notset.begin(),notset.end());
//        for(int i=1; i<notset.size(); i++){
//            //cout<<notset[i]<<" ";
//            ans=max(ans, notset[i]-notset[i-1]);
//        }
        //cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}