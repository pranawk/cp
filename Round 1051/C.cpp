#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<pair<int,int>>gt;
        for(int i=0; i<n-1; i++){
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            if(x>y)gt.push_back({u-1,v-1});
            else gt.push_back({v-1,u-1});
        }
        vector<int>gg(n,0);
        for(int i=0; i<n-1; i++){
            if(gg[gt[i].first]<gt[i].second+1)gg[gt[i].first]=gt[i].second+1;
        }
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<n; i++){
            pair<int,int>temp={gg[i],i};
            pq.push(temp);
        }
        vector<int>ans(n);
        int a=n;
        while(!pq.empty()){
            ans[pq.top().second]=a;
            a--;
            pq.pop();
        }
        if(a!=0){
            for(int i=0; i<n; i++){
                if(ans[i]==0){ans[i]=a;a--;}
            }
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}