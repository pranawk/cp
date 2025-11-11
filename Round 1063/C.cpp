#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<long long>row1(n),row2(n);
        for(long long i=0; i<n; i++)cin>>row1[i];
        for(long long i=0; i<n; i++)cin>>row2[i];
        vector<long long>down_min(n),down_max(n);
        long long mn=row2[n-1],mx=row2[n-1];
        for(long long i=n-1; i>=0; i--){
            if(row2[i]<mn)mn=row2[i];
            if(row2[i]>mx)mx=row2[i];
            down_min[i]=mn;
            down_max[i]=mx;
        }
        long long upmn=row1[0],upmx=row1[0];
        unordered_map<long long,long long>mp;
        for(long long i=0; i<n; i++){
            if(row1[i]<upmn)upmn=row1[i];
            if(row1[i]>upmx)upmx=row1[i];
            long long mii=min(upmn, down_min[i]);
            long long mxx=max(upmx, down_max[i]);
            long long ii=INT_MAX;
            if(mp[mii])ii=mp[mii];
            ii=min(ii,mxx);
            mp[mii]=ii;
        }
        vector<long long>mm(2*n+1, INT_MAX);
        for(auto i: mp){
            mm[i.first]=i.second;
        }
        for(int i=2*n-1; i>=1; i--){
            mm[i]=min(mm[i], mm[i+1]);
        }
        long long ans=0;
        for(int i=1; i<2*n+1; i++){
            if(mm[i]==INT_MAX)break;
            ans+=2*n-mm[i]+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}