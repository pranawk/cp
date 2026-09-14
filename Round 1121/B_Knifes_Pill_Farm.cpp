//  B. Knife's Pill Farm

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,m;
        cin>>n>>m;
        vector<long long>a(n);
        for (long long i=0; i<n; i++)cin>>a[i];
        if(m==1){
            cout<<*max_element(a.begin(),a.end())<<endl;
            continue;
        }
        priority_queue<long long>pq;
        long long sm=0;
        long long ans=LLONG_MIN;
        for(long long i=0; i<m-1; i++){pq.push(a[i]);sm+=a[i];}
        for(long long i=m-1; i<n; i++){
                ans=max(ans,m*(a[i])-sm);
//                 cout<<sm<<" ";
                if(pq.top()>a[i]){
                    sm-=(pq.top());
                    sm+=a[i];
                    pq.pop();
                    pq.push(a[i]);
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}