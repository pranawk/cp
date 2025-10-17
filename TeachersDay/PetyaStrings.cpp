#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    for(int i=0; i<n; i++){
        if(s1[i]-'a'<s2[i]-'a'){cout<<-1; break;}
        if(s1[i]-'a'>s2[i]-'a'){cout<<1; break;}
        if(i==n-1)cout<<0;    }

return 0;
}