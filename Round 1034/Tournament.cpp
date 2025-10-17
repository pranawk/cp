#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        cout<<(k==1 && a[j-1]!=*max_element(a.begin(),a.end()) ? "NO" : "YES")<<'\n';
    }
    return 0;
}