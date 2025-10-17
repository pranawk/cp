#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    bool flag=true;
    while(n){
        if(n>100&& n%1000==144){n/=1000;continue;}
        if(n>10&& n%100==14){n/=100;continue;}
        if(n%10==1){n/=10;continue;}
        flag=false;break;
    }
    cout<<(flag==true ? "YES" : "NO");
return 0;
}