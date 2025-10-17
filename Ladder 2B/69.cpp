#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0; i<n; i++)cin>>p[i];
    vector<bool>ptaken(n,false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq1;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq2;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq3;

    for(int i=0; i<n; i++){
        int temp;cin>>temp;
        pair<int, int>tm={p[i],i};
        if(temp==1)pq1.push(tm);if(temp==2)pq2.push(tm);if(temp==3)pq3.push(tm);
    }
    for(int i=0; i<n; i++){
        int temp;cin>>temp;
        pair<int, int>tm={p[i],i};
        if(temp==1)pq1.push(tm);if(temp==2)pq2.push(tm);if(temp==3)pq3.push(tm);
    }
    int m;
    cin>>m;
    vector<int>query(m);
    for(int i=0; i<m; i++)cin>>query[i];
    for(int i=0; i<m; i++){
        int c=query[i];
        if(c==1){
            while(!pq1.empty()&&ptaken[pq1.top().second]==true){pq1.pop();}
            if(pq1.empty()){cout<<-1<<" "; continue;}
            cout<<pq1.top().first<<" ";
            ptaken[pq1.top().second]=true;
        }
        if(c==2){
            while(!pq2.empty()&&ptaken[pq2.top().second]==true){pq2.pop();}
            if(pq2.empty()){cout<<-1<<" "; continue;}
            cout<<pq2.top().first<<" ";
            ptaken[pq2.top().second]=true;
        }
        if(c==3){
            while(!pq3.empty()&&ptaken[pq3.top().second]==true){pq3.pop();}
            if(pq3.empty()){cout<<-1<<" "; continue;}
            cout<<pq3.top().first<<" ";
            ptaken[pq3.top().second]=true;
        }
    }
    return 0;
}