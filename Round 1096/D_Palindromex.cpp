//  D. Palindromex

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
        vector<int>a(2*n);
        int ans=1;
        for(int i=0; i<2*n; i++)cin>>a[i];
        vector<int>centers;
        for(int i=0; i<2*n; i++){
            if(i+1<2*n && a[i+1]==a[i]){
                vector<int>nums;
                int l=i,r=i+1;
                while(a[l]==a[r] && r<2*n && l>=0){
                    nums.push_back(a[l]);l--;r++;
                }
                sort(nums.begin(),nums.end());
                int tem=0,ii=0;
                while(ii<nums.size() && nums[ii]==ii)ii++;
                ans=max(ans,ii);
            }
            else if(i+2<2*n && a[i+2]==a[i]){
                vector<int>nums;
                int l=i,r=i+2;
                nums.push_back(a[l+1]);
                while(a[l]==a[r] && r<2*n && l>=0){
                    nums.push_back(a[l]);l--;r++;
                   // cout<<a[l]<<" ";
                }
                sort(nums.begin(),nums.end());
                int tem=0,ii=0;
                while(ii<nums.size() && nums[ii]==ii)ii++;
                ans=max(ans,ii);
                //cout<<endl;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}