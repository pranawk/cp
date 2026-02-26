//  B. Modulo Equality

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    unordered_map<int,vector<int>>mp;
    int cnt=1;
    for(int i=1; i<n ; i++){
        if(a[i]!=a[i-1]){mp[cnt].push_back(a[i-1]);cnt=1;}
        else cnt++;
    }
    int ans=0;
    mp[cnt].push_back(a[n-1]);
    cnt=1;
    vector<int>c;
    for(auto i: mp)cout<<i.first<<" "<<i.second.size()<<endl;
    unordered_map<int,int>mp2;
    for(int i=1; i<n; i++){
        if(b[i]!=b[i-1]){
            mp2[cnt]++;
            for(int j=0; j<cnt; j++)c.push_back(mp[cnt][mp2[cnt]-1]);
            cnt=1;
        }
        else cnt++;
    }
    for(int j=0; j<cnt; j++)c.push_back(mp[cnt][mp2[cnt]-1]);
    for(int i=0; i<c.size(); i++)cout<<c[i]<<" ";
    //if(fl==false)ans=abs(b[0]-a[0]);
    cout<<ans<<endl;
    return 0;
}
