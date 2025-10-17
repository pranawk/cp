#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    vector<bool>done(n,false);
    int ans=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    for(int i=0; i<n; i++){
        if(a[i]<b[i]){ans+=a[i];done[i]=true;k--;}
        else{
            pq.push({a[i]-b[i],i});
        }
    }
    while(k>0){
        ans+=a[pq.top().second];
        done[pq.top().second]=true;
        pq.pop();k--;
    }
    for(int i=0; i<n; i++){
        if(done[i]==false)ans+=b[i];
    }
    cout<<ans<<endl;
return 0;
}