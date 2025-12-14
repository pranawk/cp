//  Restaurant Customers

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<pair<int,int>>times(n);
    for(int i=0; i<n; i++){cin>>times[i].first>>times[i].second;}
    sort(times.begin(),times.end());
    unsigned ans=1;
    pq.push(times[0].second);
    for(int i=1; i<n; i++){
        if(times[i].first>pq.top())ans=max(ans,(unsigned)pq.size());
        while(!pq.empty() && times[i].first>pq.top())pq.pop();
        pq.push(times[i].second);
    }
    ans=max(ans,(unsigned)pq.size());
    cout<<ans<<endl;
    
    return 0;
}
