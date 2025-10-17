#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long>nums(14);
    for(int i=0; i<14; i++)cin>>nums[i];
    long long ans=0;
    for(int i=0; i<14; i++){
        if(nums[i]>0){
            long long lcn=0;
            long long mul=0;
            int nn;
            if(nums[i]>=14){
                mul=nums[i]/14;}
            nn=nums[i]%14;

            for(int j=i+1; j!=i; ){
                if(j==14)j=0;
                if((nums[j]+(nn>0)+mul)%2==0)lcn+=nums[j]+(nn>0)+mul;
                j++;nn--;
                if(j==14)j=0;
            }
            if(mul%2==0)lcn+=mul;
            ans=max(ans,lcn);
        }
    }
    cout<<ans<<endl;
    return 0;
}