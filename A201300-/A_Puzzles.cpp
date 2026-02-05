//  A. Puzzles

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>nums(m);
    for(int i=0; i<m; i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    int dif=INT_MAX;
    int l=0;
    while(l+n-1<m){
        dif=min(dif, nums[l+n-1]-nums[l]);
        l++;
    }
    cout<<dif<<endl;
    return 0;
}