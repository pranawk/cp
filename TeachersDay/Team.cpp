#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++){
        int p,v,t;
        int cn=0;
        cin>>p>>v>>t;
        cn=p+v+t;
        if(cn>=2)count++;
    }
    cout<<count;
    return 0;
}