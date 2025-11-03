#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n ;i++){
        if(a[i]%m==0)a[i]/=m;
        else a[i]=a[i]/m+1;
    }
    int ansin=0,ans=0;
    for(int i=0; i<n;i++){
        if(a[i]>=ans){ans=a[i];ansin=i+1;}
    }
    cout<<ansin<<endl;
    return 0;
}