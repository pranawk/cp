//A Prank
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int maxcn=0;
    int cn=0;
    for(int i=0; i<n-2; i++){
        if( nums[i+2]==nums[i]+2){
            if(nums[i]==1 && nums[i+1]==2)cn++;
            cn++;
            if(nums[i+1]==999&&nums[i+2]==1000)cn++;
        }
        else{maxcn=max(maxcn,cn);cn=0;}

    }
    maxcn=max(maxcn,cn);

    if(nums[0]==1 && nums[1]==2)maxcn=max(maxcn,1);
    if(nums[n-1]==1000 && nums[n-2]==999)maxcn=max(maxcn,1);

    cout<<maxcn<<endl;
    return 0;
}