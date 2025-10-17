#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>cn(3,0);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1')cn[0]++;
        if(s[i]=='2')cn[1]++;
        if(s[i]=='3')cn[2]++;
    }

    while(cn[0]--){
        if((cn[1]==0&&cn[2]==0)&&cn[0]==0)cout<<'1';
        else{cout<<'1'<<'+';}

    }
    while(cn[1]--){
        if(cn[2]==0&&cn[1]==0)cout<<'2';
        else{cout<<'2'<<'+';}
    }
    while(cn[2]--){
        if(cn[2]==0)cout<<'3';
        else{cout<<'3'<<'+';}
    }

return 0;
}