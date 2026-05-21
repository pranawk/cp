//  C. Chipmunk Theo and Equality

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
        for(int i=0; i<n; i++)cin>>a[i];
        unordered_map<int,pair<int,int>>mp;
        for(int i=0; i<n; i++){
            if(a[i]==1){mp[2].first++;mp[2].second++;}
            int cnt=0;
            while(a[i]!=1){
                mp[a[i]].first+=cnt;
                mp[a[i]].second++;
                if(a[i]%2==0)a[i]/=2;
                else a[i]+=1;
                cnt++;
            }
            mp[1].first+=cnt;
            mp[1].second++;
        }
        int mn=INT_MAX;
        for(auto i:mp){
            //cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
            if(i.second.second==n)mn=min(mn,i.second.first);
        }
        cout<<mn<<endl;
    }
    return 0;
}