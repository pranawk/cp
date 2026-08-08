//  B. Summer sell-off

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,f;
    cin>>n>>f;
    priority_queue<int>pq;
    long long ans=0;
    for(int i=0; i<n; i++){
        int k,l;
        cin>>k>>l;
        ans+=min(k,l);
        if(l>k){
            pq.push(min(l,2*k)-k);
        }
    }
    while(!pq.empty() && f--){
        ans+=pq.top();
        pq.pop();
    }
    cout<<ans;
    return 0;
}