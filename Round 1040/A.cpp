#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int ans=0;
        int n;
        cin>>n;
        vector<int>s(n);
        for(int i=0; i<n; i++)cin>>s[i];
        for(int i=0; i<n; ){
            if(i+1<n&&(s[i]==0 && s[i+1]==1)){ans+=2;i+=2;}
            else if(s[i]==0){ans+=1; i++;}
            else{ans+=s[i];i++;}
        }
        cout<<ans<<'\n';
    }
    return 0;
}