//  B. DZY Loves Chemistry

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
//     if(m==0){cout<<1<<endl;return 0;}
    vector<pair<int,int>>a(m);
    for(int i=0; i<m; i++)cin>>a[i].first>>a[i].second;
    vector<pair<int,pair<int,vector<int>>>>cn;
    for(int i=0; i<=n; i++)cn.push_back({0,{i,{}}});
    for(int i=0; i<m; i++){
        int aa=a[i].first,bb=a[i].second;
        cn[aa].first++;
        cn[aa].second.second.push_back(bb);
        cn[bb].first++;
        cn[bb].second.second.push_back(aa);
    }
    sort(cn.begin(),cn.end());
    long long ans=1;
    unordered_set<int>st;
    for(int i=n; i>=0; i--){
        int val=cn[i].second.first;
        if(st.find(val)!=st.end())ans<<=(1ll);
        for(int j=0; j<cn[i].second.second.size(); j++){
            st.insert(cn[i].second.second[j]);
        }
    }
    cout<<ans;
    return 0;
}