#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int cn=0;
    while(n){
        if(n%10==7 || n%10==4)cn++;
        if(cn>7)break;
        n/=10;
    }
    cout<<((cn==7 || cn==4) ? "YES" : "NO");
return 0;
}