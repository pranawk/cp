#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m),c(m);
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<n; i++){cin>>a[i];pq.push(a[i]);}
        for(int i=0; i<m; i++)cin>>b[i];
        for(int i=0; i<m; i++)cin>>c[i];
        vector<pair<int,int>>oc,noc;
        for(int i=0; i<m; i++){
            if(c[i]!=0)oc.push_back({b[i],c[i]});
            else noc.push_back({b[i],c[i]});
        }
        sort(oc.begin(),oc.end());
        sort(noc.begin(),noc.end());
        sort(a.begin(),a.end());
        vector<int>swords;
        int nn=0;
        for(int i=0; i<oc.size(); i++){
            while(!pq.empty()&&(pq.top()<oc[i].first)){swords.push_back(pq.top());pq.pop();}
            if(oc[i].first <=pq.top()){int ni=max(pq.top(),oc[i].second); nn++;pq.pop();pq.push(ni);}
            else break;
        }
        while(!pq.empty()){swords.push_back(pq.top()); pq.pop();}
        sort(swords.begin(),swords.end());int ii=n-1;
        for(int i=noc.size()-1; i>=0; i--){
            if(swords[ii]>=noc[i].first){nn++;ii--;}
            if(ii<0)break;
        }
        cout<<nn<<endl;
    }
    return 0;
}