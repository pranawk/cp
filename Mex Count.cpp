#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        vector<int>numcn(n+1,0);
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            numcn[nums[i]]++;
        }
        vector<pair<int,int>>range(n+1,{n+2,n+2});
        for(int i=0; i<n+1; i++){
            if(i!=0 && numcn[i-1]==0)break;
            range[i].first=numcn[i];
            int sec=0;
            for(int j=0; j<i; j++){
                sec+=numcn[j]-1;}
            for(int j=i+1; j<numcn.size(); j++){
                sec+=numcn[j];}
            range[i].second=numcn[i]+sec;
        }
        vector<int>ks(n+1,0);
        for(int i=0; i<n+1; i++){
            if(range[i].first==n+2 || range[i].second==n+2)continue;
            ks[range[i].first]++;
            if(range[i].second!=n)ks[range[i].second+1]--;
        }
        for(int i=1;i<n+1;i++)ks[i]+=ks[i-1];
        for(int i=0; i<n+1; i++){
            cout<<ks[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}