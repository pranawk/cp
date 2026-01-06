//  A. Operations with Inversions

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n);
        vector<bool>marked(n,false);
        for(int i=0; i<n; i++){cin>>nums[i];}
        int ans=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++)if(nums[j]<nums[i])marked[j]=true;
            }
        for(int i=0; i<n; i++)if(marked[i]==true){ans++;}
        cout<<ans<<endl;

        }
    
    return 0;
}
