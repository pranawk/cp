#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int oc=0,zc=0;
    for(int i=0; i<n; i++){
        if(s[i]=='z')zc++;
        if(s[i]=='n')oc++;
    }
    while(oc--)cout<<1<<" ";
    while(zc--)cout<<0<<" ";
    cout<<endl;

return 0;
}