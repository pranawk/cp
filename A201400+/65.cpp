#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    //Use Kadane's Algorithm
    vector<int>kdn(n,0);
    int kd=0;
    int oc=0;
    for(int i=0; i<n; i++){
        if(nums[i]==1){kd--;oc++;}
        if(kd<0)kd=0;
        if(nums[i]==0){kd++;kdn[i]=kd;}
    }
    int mx=*max_element(kdn.begin(),kdn.end());
    if(oc==n){cout<<n-1<<endl;return 0;}
    cout<<oc+mx<<endl;
    return 0;
}