//  C. Unstable Elements

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
       unordered_map<int,int>mp;
       int temp=-1,prev,cn=0;
       cin>>prev;cn=1;
       for(int i=0; i<n-1; i++){
           cin>>temp;
           if(temp!=prev){
            mp[cn]++;
            cn=1;
            prev=temp;
           }
           else cn++;
       }
       mp[cn]++;
       vector<pair<int,int>>a;
       for(auto i:mp){
            a.push_back({i.first,i.second});
       }
       sort(a.begin(),a.end());
       int nn=a.size();
       vector<int>rg(n,0);
       int sum=0,nums=0;
       vector<int>tr(nn,0);
       tr[nn-1]=a[nn-1].second;
       for(int i=nn-2; i>=0; i--){
            nums+=(a[i+1].second);
            sum+=nums*(a[i+1].first-a[i].first);
            rg[i]=sum;
            tr[i]=tr[i+1]+a[i].second;
       }
       //for(int i=0; i<a.size(); i++)cout<<rg[i]<<" ";
       int ans=0;
       for(int i=0; i<nn; i++){
            int lol=k-rg[i];
            if(lol<=0)continue;
            if((lol%tr[i])==0)ans++;
       }
       cout<<ans<<endl;
    }
    return 0;
}