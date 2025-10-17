#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int cn=0;
    int ref=nums[k-1];
    for(int i=0; i<n; i++){
        if(nums[i]>0 && nums[i]>=ref)cn++;
    }
    cout<<cn;
    return 0;
}