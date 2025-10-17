#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; ++i){
        int a,x,y;
        cin>>a>>x>>y;
        cout<<((a>=x && a<=y)||(a>=y && a<=x) ? "NO" : "Yes" ) <<'\n';
    }
   return 0;
}