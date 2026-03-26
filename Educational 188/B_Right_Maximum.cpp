//  B. Right Maximum

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<n; i++){pq.push({a[i],i});}
        int ans=0;
        int ii=n;
        while(!pq.empty()){
            if(pq.top().second<ii){ii=pq.top().second;ans++;}
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}