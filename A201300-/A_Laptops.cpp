//  A. Laptops

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>mp;
    int a,b;
    bool fl=false;
    while(n--){
        cin>>a>>b;
        if(mp[a] && mp[a]!=b)fl=true;
        mp[a]=b;
    }
    vector<int>nums;
    for(auto i: mp)nums.push_back(i.second);
    for(int i=1;i<nums.size(); i++)if(nums[i]<nums[i-1])fl=true;
    cout<<(fl==true ? "Happy Alex" : "Poor Alex");
    return 0;
}