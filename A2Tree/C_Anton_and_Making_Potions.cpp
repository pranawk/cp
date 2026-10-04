//  C. Anton and Making Potions

#include<bits/stdc++.h>

using namespace std;
int find(vector<pair<int,int>>&b, int &price, int l, int r){
    if(b[l].second>price)return 0;
    int mid= l+(r-l+1)/2;
    if(l==r)return b[l].first;
    if(b[mid].second<=price)return find(b,price,mid,r);
    else return find(b,price,l,mid-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int x,s;
    cin>>x>>s;
    vector<pair<int,int>>a(m);
    for(int i=0; i<m; i++)cin>>a[i].first;
    for(int i=0; i<m; i++)cin>>a[i].second;
    a.push_back({x,0});
    vector<pair<int,int>>b(k+1);
    b[0]={0,0};
    for(int i=0; i<k; i++)cin>>b[i+1].first;
    for(int i=0; i<k; i++)cin>>b[i+1].second;

    long long ans=1ll*x*n;
    for(int i=0; i<m+1; i++){
        if(a[i].second<=s){
            int price=s-a[i].second;
            if(k>0)ans=min(ans,1ll*(n-find(b,price, 0, k))*a[i].first);
            else ans=min(ans, 1ll*n*a[i].first);
        }
    }
    cout<<ans;
    return 0;
}