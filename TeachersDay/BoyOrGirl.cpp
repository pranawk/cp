#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>alpha(26,0);
    for(int i=0; i<s.size(); i++){
        alpha[s[i]-'a']++;
    }
    int cn=0;
    for(int i=0; i<26; i++){
        if(alpha[i]>0)cn++;
    }
    cout<<(cn%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");

return 0;
}