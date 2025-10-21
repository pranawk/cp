#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        vector<int>nums2=nums;
        int nn=n;
        vector<int>price(n);
        for(int i=0; i<n; i++)cin>>price[i];
        int fl=false;
        unordered_set<int>st;
        for(int i=0; i<n; i++){
                int ii=2;
                while(nums[i]>1){
                    if(nums[i]%ii==0){
                        if(st.find(ii)!=st.end()){cout<<0<<endl;fl=true;break;}
                        st.insert(ii);
                        while(nums[i]%ii==0)nums[i]/=ii;
                    }
                    ii++;
                    if(ii>451){
                        if(st.find(nums[i])!=st.end()&& nums[i]>1){cout<<0<<endl;fl=true;break;}
                        if(nums[i]>1)st.insert(nums[i]);
                        break;
                    }
                }
            if(fl==true)break;
        }
        if(fl==true)continue;
        //for(int i=0; i<primes.size(); i++)cout<<primes[i]<<" ";
        for(int i=0; i<nums2.size(); i++){
            int ii=2;
            int ni=nums2[i]+1;
            while(ni>1){
                if(ni%ii==0){
                    if(st.find(ii)!=st.end()){cout<<1<<endl;fl=true;break;}
                    while(ni%ii==0)ni/=ii;
                }
                ii++;
                if(ii>451){
                    if(st.find(ni)!=st.end()&& ni>1){cout<<1<<endl;fl=true;}
                    break;
                }
            }
            if(fl==true)break;
        }
        if(fl==true)continue;
        cout<<2<<endl;
    }
    return 0;
}