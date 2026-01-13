//  A. Binary Array Game

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
        int cnz=0;
        for(int i=0; i<n; i++){cin>>nums[i];}
        if(nums[0]==0 && nums[n-1]==0)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}