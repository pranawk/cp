#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++){cin>>nums[i];}
        int count=-1;
        if(n==2){
                    if(abs(nums[0]-nums[1])<=1)count=0;
                }
        else{
            for(int i=0; i<n-1; i++){
                if(nums[i+1]==nums[i])count=0;
                if(nums[i+1]<nums[i])count=1;
                if(abs(nums[i]-nums[i+1])<=1)count=0;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}