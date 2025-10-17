#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ocn=false, ecn=false;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
        if(nums[i]%2==0)ecn=true;
        else ocn=true;
    }
    if(ecn==true && ocn==true)sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++)cout<<nums[i]<<" ";
    cout<<endl;
    return 0;
}