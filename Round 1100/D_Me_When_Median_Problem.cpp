//  D. Me When Median Problem

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
       vector<int>a(n);
       vector<int>b(n);
       for(int i=0; i<n; i++)cin>>a[i];
       for(int i=0; i<n; i++)cin>>b[i];
       unordered_map<int,<pair<int,int>>mp;
       for(int i=0; i<n; i++){
            mp[i]={i-1,i+1};
       }
       priority_queue<pair<int,int>>pq;
       for(int i=1; i<n; i++){
            vector<int>aa={a[i],b[i],a[i-1],b[i-1]};
            sort(aa.begin(),aa.end());
            pq.push({min(aa[1],aa[2]),i});
       }
       vector<bool>ho(n,false);
       while(pq.size()!=1){
            while(ho[pq.top().second]==true)pq.pop();
            int ii=pq.top().second;
            if(pq.size()!=1){
                vector<int>aa;
                if(mp[ii].first!=-1){
                    aa.push_back()
                }
            }
       }
       for(int i=1; i<n; i++)
    }
    return 0;
}