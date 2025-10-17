#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int ans=n;
    int ii=0;
    for(int i=n-1; i>=0; i--){
        if(ii>0){ans--;ii--;}
        if(ii<nums[i])ii=nums[i];
    }
    cout<<ans<<endl;
    return 0;
}