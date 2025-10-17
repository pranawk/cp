#include<bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        vector<bool>sway(n,true);ll minm=a[0];
        for(int i=1; i<n; i++){
            if(a[i]>minm)sway[i]=false;
            if(a[i]<minm)minm=a[i];
        }
        vector<bool>mway(n,true);ll maxm=a[n-1];
        for(int i=n-2; i>=0; i--){
            if(a[i]<maxm)mway[i]=false;
            if(a[i]>maxm)maxm=a[i];
        }
        for(int i=0; i<n; i++){
            cout<<(sway[i]==false&&mway[i]==false ? '0' : '1') ;
        }
        cout<<'\n';
    }
    return 0;
}