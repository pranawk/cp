//  Array Coloring

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<pair<int,int>>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i].first;
            if(i%2==0)nums[i].second=0;
            else nums[i].second=1;
        }
        sort(nums.begin(),nums.end());
        bool fl=true;
        for(int i=1; i<n; i++){
            if(nums[i].second==nums[i-1].second)fl=false;
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}