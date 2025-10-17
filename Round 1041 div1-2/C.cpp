#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n);
        for(int i=0; i<n; i++)cin>>a[i].first;
        for(int i=0; i<n; i++)cin>>a[i].second;
        for(int i=0; i<n; i++){
            if(a[i].first>a[i].second){swap(a[i].first,a[i].second);}
        }

        long long sum=0;
        for(int i=0; i<n;i++){
        sum+=abs(a[i].first-a[i].second);}
        sort(a.begin(),a.end());

        int minm=INT_MAX;
        for(int i=0; i<n-1; i++){
            minm=min(minm,a[i+1].first-a[i].second);
        }
        if(minm<=0)cout<<sum<<endl;
        else cout<<sum+2*minm<<endl;
    }
return 0;
}