//  E. Prime Destruction

#include<bits/stdc++.h>

using namespace std;
unordered_map<long long,long long>mp;
long long solve(long long a, long long k){
    if(a<=k)return 0;
    if(mp.count(a))return mp[a];
    long long ii=2;
    long long aa=a;
    vector<long long>pr;
    for(int ii=2; ii*ii<=a; ii++){
        if(a%ii==0)pr.push_back(ii);
        while(a%ii==0)a/=ii;
    }
    if(a>1)pr.push_back(a);
    long long ans=LLONG_MAX;
    for(int i=0; i<pr.size(); i++){
        ans=min(ans, 1+ pr[i]*solve(aa/pr[i],k));
    }
    mp[aa]=ans;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        long long ans=0;
        for(int i=0; i<n; i++){
            if(a[i]<=k)continue;
            else ans+=solve(a[i],k);
//             cout<<i<<" "<<solve(a[i],k)<<" ";
        }
        cout<<ans<<endl;
        mp.clear();
    }
    return 0;
}