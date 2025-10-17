#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>s(n),t(n);
        for(int i=0; i<n; i++)cin>>s[i];
        for(int i=0; i<n; i++)cin>>t[i];
        for(int i=0; i<n; i++){
            t[i]=t[i]%k;
            int a=abs(t[i]-k);
            t[i]=min(t[i],a);
        }
        for(int i=0; i<n; i++){
            s[i]%=k;
            int a=abs(s[i]-k);
            s[i]=min(s[i],a);
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int flag=true;
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]){cout<<"NO"<<endl;flag=false;break;}
        }
        if(flag==true)cout<<"YES"<<endl;

    }
    return 0;}