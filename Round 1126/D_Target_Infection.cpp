//  D. Target Infection

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<pair<long long,long long>>aa(n);
        for(int i=0; i<n; i++)cin>>aa[i].first>>aa[i].second;
        sort(aa.begin(),aa.end());
        vector<pair<long long, long long>>a;
        long long l=aa[0].first,r=aa[0].second;
        for(int i=1; i<n; i++){
            if(aa[i].first<=r)r=max(r,aa[i].second);
            else{
                a.push_back({l,r});
                l=aa[i].first;
                r=aa[i].second;
            }
        }
        a.push_back({l,r});
//         cout<<a[0].first<<" "<<a[0].second;
        n=a.size();
        long long ans=-1;
        r=0;
        long long sm=0;
        for(int i=0; i<n; i++){
            r=i;sm=0;
            long long aa=a[i].first;
            long long bb=a[i].second;
            while(r<n){
                if(a[r].second<aa+m){sm+=a[r].second-a[r].first+1;}
                else if(a[r].first<aa+m){sm+=aa+m-a[r].first; break;}
                else if(a[r].first>aa+m)break;
                r++;
            }
//             r++;
            long long as=sm;
            sm-=(bb-aa+1);
            while(r<n){
                if(a[r].second<bb+m){sm+=a[r].second-a[r].first+1;}
                else if(a[r].first<bb+m){sm+=bb+m-a[r].first; break;}
                else if(a[r].first>bb+m)break;
                r++;
            }
//             cout<<as<<" "<<sm;
            if(as>=k && sm<=k){
                ans=aa+(as-k);
            }
            if(as<=k && sm>=k){
                ans=bb-(sm-k);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}