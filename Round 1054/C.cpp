#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(k+1,0);
        while(n--){
            int t;
            cin>>t;
            if(t<=k)nums[t]++;
        }
        int ans=0;
        for(int i=0; i<k; i++){if(nums[i]==0)ans++;}
        cout<<max(ans,nums[k])<<endl;
    }
    return 0;
}