#include<bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        int onecn=0;
        for(int i=0; i<n; i++){onecn+=s[i]=='1';}
        cout<<((onecn<=k || k>n/2) ? "Alice" : "Bob")<<'\n';
    }
    return 0;
}