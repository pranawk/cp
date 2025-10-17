#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string wr;
        cin>>wr;
        int n=wr.size();
        if(n<=10){cout<<wr<<'\n'; continue;}
        n-=2;
        cout<<wr[0]<<n<<wr.back()<<'\n';
    }
    return 0;
}