#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0; i<n; i++)cin>>p[i];
    int ascn=0,dscn=0;
    for(int i=0;i<n;i++){
        if(i<n-1 && p[i]<p[i+1])ascn++;
        else dscn++;
    }
    cout<<min(ascn,dscn)<<'\n';
    }
    return 0;
}