#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n= s.size();
    int cn=0;
    for(int i=0; i<n; i++){
        if(s[i]-'a'<0)cn++;
    }
    if(cn*2>n){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    }
    else{transform(s.begin(),s.end(),s.begin(), ::tolower);}
    cout<<s;
return 0;
}