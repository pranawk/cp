#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int find(int a){
    if(a<=5)return a;
    int ma=a;
    for(int i=2; i<a/2; i++){
        int mm=a;
        if(a%i==0)mm=find(i)+a/i;
        else{mm=find(i)+a/i+1+find(a%i);}
        ma=min(ma,mm);
    }
    return ma;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a;
        cin>>a;
        if(a==1)cout<<0<<" ";
        else cout<<find(a)<<" ";
    }
    return 0;
}