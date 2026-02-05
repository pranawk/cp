//  A. Next Test

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        if(nums[i]!=i+1){cout<<i+1<<endl;return 0;}
    }
    cout<<n+1<<endl;
    return 0;
}