//  Maximum Subarray Sum

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    long long ans=nums[0];
    vector<long long>kadane_i(n);
    long long kadane=0;
    for(int i=0; i<n; i++){
        kadane+=nums[i];
        if(kadane<0){kadane=0;kadane_i[i]=(long long)nums[i];}
        else kadane_i[i]=kadane;
    }
    cout<<*max_element(kadane_i.begin(),kadane_i.end());
    return 0;
}
