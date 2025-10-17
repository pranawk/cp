#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int count=1; int cn=1;
    for(int i=0; i<n-1; i++){
        if(nums[i]>nums[i+1]){count=max(cn,count);cn=0;}
        cn++;
    }
    count=max(cn,count);
    cout<<count;
    return 0;
}