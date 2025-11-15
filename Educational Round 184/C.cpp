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
        vector<long long>restsum(n);
        restsum[0]=nums[0];
        for(int i=1; i<n; i++){
            restsum[i]=restsum[i-1]+nums[i];
        }
        vector<long long>pres(n);
        long long pl=0;
        pres[0]=0;
        for(long long i=1; i<n; i++){
            pl=max(pl, restsum[i-1]-i*i-i);
            pres[i]=pl;
        }
        //for(int i=0; i<n; i++)cout<<pres[i]<<" ";
        long long maxch=-nums[0]+2;
        for(long long i=0; i<n; i++){
            if(i==0)maxch=2-restsum[0];
            else maxch=max(maxch, 2+pres[i]-restsum[i]+i*i+3*i);
        }
        //cout<<ii<<endl;
        cout<<restsum[n-1]+maxch<<endl;
    }
    return 0;
}