#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=false;
    vector<bool>alpha(26,false);
    for(int i=0; i<n-1;i++){
        if(alpha[s[i]-'a']==true){flag=true;break;}
        else{alpha[s[i]-'a']=true;}
    }
    if(!flag){
        for(int i=0; i<26; i++)alpha[i]=false;
        for(int i=n-1; i>0;i--){
            if(alpha[s[i]-'a']==true){flag=true;break;}
            else{alpha[s[i]-'a']=true;}
        }
    }
    cout<<(flag==true ? "Yes" : "No")<<'\n';
    }
    return 0;
}