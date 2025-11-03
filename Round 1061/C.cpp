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
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        vector<int>rr(200001,0);
        int bm=0;
        for(int i=0; i<n; i++){
            int ii=nums[i];
            rr[ii]++;
            if(ii%3==0)rr[ii/3]++;
            for(int iii=1; iii<=ii/4; iii++)rr[iii]++;
            bm=max(bm,ii);
        }
        int maxm=1;
        for(int i=1; i<=bm; i++){
            if(rr[i]+k>=n)maxm=i;
        }
        cout<<maxm<<endl;
    }
    return 0;
}