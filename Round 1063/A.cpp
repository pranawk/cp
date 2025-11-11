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
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        sort(nums.begin(), nums.end());
        bool fl=true;
        for(int i=1; i<nums.size()-1; i+=2){
            if(nums[i+1]>nums[i])fl=false;
        }
        cout<<(fl==true ? "YES": "NO")<<endl;
    }
    return 0;
}