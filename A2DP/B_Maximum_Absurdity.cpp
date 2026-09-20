//  B. Maximum Absurdity

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(long long i=0; i<n; i++)cin>>a[i];
    vector<long long>aa(n);
    long long ma=0;
    for(long long i=n-1; i>n-k; i--)ma+=a[i];
    for(long long i=n-k; i>=0; i--){
        ma+=a[i];
        aa[i]=ma;
        ma-=a[i+k-1];
    }
//     for(long long i=0; i<n; i++)cout<<aa[i]<<" ";
    vector<pair<long long,long long>>maxa(n);
    long long mx=0, mxi=n-1;
    for(long long i=n-1; i>=0; i--){
        if(aa[i]>=mx){
            mx=aa[i];
            mxi=i;
        }
        maxa[i]={mx,mxi};
    }
    long long ans=0;
    long long l,r;
    for(long long i=0; i<n-k; i++){
        if(aa[i]+maxa[i+k].first>ans){
            l=i;r=maxa[i+k].second;
            ans=aa[i]+maxa[i+k].first;
//             cout<<ans<<" ";
        }
    }
    cout<<l+1<<" "<<r+1;
    return 0;
}