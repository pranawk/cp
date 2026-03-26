//  B. Cyclists

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        priority_queue<int,vector<int>,greater<int>>pq;
        int pri_cost=0,af_cost=0;
        for(int i=0; i<p-1; i++){
            pq.push(a[i]);
        }
        for(int i=0; i<p-k ; i++){
            pri_cost+=pq.top();
            pq.pop();
        }
        while(!pq.empty())pq.pop();
        for(int i=0; i<n; i++){
            if(i==p-1)continue;
            pq.push(a[i]);
        }
        for(int i=0; i<n-k; i++){
            af_cost+=pq.top();
            pq.pop();
        }
        int ans=0;
        if(p>k)m-=pri_cost;
        while(m>0){
            m-=a[p-1];
            if(m>=0)ans++;
            m-=af_cost;
        }
        cout<<ans<<endl;
    }
    return 0;
}