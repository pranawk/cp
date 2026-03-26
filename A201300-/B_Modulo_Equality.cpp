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
    mp[cnt].push_back(a[n-1]);
//    for(auto i:mp){
//        cout<<i.first<<" ";
//        for(int j=0; j<i.second.size(); j++)cout<<i.second[j]<<" ";
//        cout<<endl;
//    }
    cnt=1;
    vector<int>c;
    unordered_map<int,int>mp2;
    for(int i=1; i<n; i++){
        if(b[i]!=b[i-1]){
            mp2[cnt]++;
            for(int j=0; j<cnt; j++)c.push_back(mp[cnt][mp2[cnt]-1]);
            cnt=1;
        }
        else cnt++;
    }
    mp2[cnt]++;
    for(int j=0; j<cnt; j++)c.push_back(mp[cnt][mp2[cnt]-1]);
//    for(int i=0; i<c.size(); i++)cout<<c[i]<<" ";cout<<endl;
//    cnt=1;
//    vector<int>c1;
//    unordered_map<int,int>mp21;
//    for(int i=1; i<n; i++){
//        if(b[i]!=b[i-1]){
//            mp21[cnt]++;
//            for(int j=0; j<cnt; j++)c1.push_back(mp[cnt][mp[cnt].size()-mp21[cnt]]);
//            cnt=1;
//        }
//        else cnt++;
//    }
//    mp21[cnt]++;
//    for(int j=0; j<cnt; j++)c1.push_back(mp[cnt][mp[cnt].size()-mp21[cnt]]);
//    for(int i=0; i<c1.size(); i++)cout<<c1[i]<<" ";
    int ans=0;
    ans=abs(c[0]-b[0]);
    int dif=b[0]-c[0];
    if((c[n-1]+dif)%m!=b[n-1])ans=m-c[n-1];
    cout<<ans<<endl;
    return 0;
}