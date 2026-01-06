//  B. Lunar New Year and Food Ordering

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),c(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>c[i];
    vector<pair<int,int>>sp;
    for(int i=0; i<n; i++)sp.push_back({c[i],i});
    sort(sp.begin(),sp.end());
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)mp[i]=a[i];
    int l=0;
    while(m--){
        int t,d;
        long long sum=0;
        cin>>t>>d;
        t--;
        if(mp[t]>=d){
            mp[t]-=d;
            sum+=1ll*c[t]*d;
        }
        else{
            d-=mp[t];
            sum+=1ll*mp[t]*c[t];
            mp[t]=0;
            while(d!=0){
                if(l==n){sum=0;break;}
                if(mp[sp[l].second]>0){
                    if(mp[sp[l].second]>=d){sum+=1ll*d*sp[l].first;mp[sp[l].second]-=d;d=0;}
                    else{
                        sum+=1ll*mp[sp[l].second]*sp[l].first;d-=mp[sp[l].second];mp[sp[l].second]=0;
                        l++;
                    }
                }
                else l++;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
