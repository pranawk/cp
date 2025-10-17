#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        bool flag=true;
        if(a[n-1]!=b[n-1]){cout<<"NO"<<endl;continue;}
        vector<int>notsame;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i])notsame.emplace_back(i);
        }
        int k=notsame.size();
        while(k--){
            for(int i=0; i<notsame.size(); i++){
                    int alas= a[notsame[i]]^a[notsame[i]+1];
                    if(alas==b[notsame[i]]){
                        a[notsame[i]]=alas;
                        notsame.erase(notsame.begin()+i);
                        i--;
                        continue;}

            }
        }
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){flag=false;break;}
        }
        if(flag==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        }
return 0;}