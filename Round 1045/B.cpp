#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<long long>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        if(k%2==1){
            for(int i=0; i<n; i++){
                if(nums[i]%2!=0)nums[i]+=k;
            }
        }
        else{
            int j= k+1;
            for(int i=0;i<n; i++){
               nums[i]+=(nums[i]%j*k);
            }
        }
        for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";}
        cout<<endl;
    }
return 0;
}