#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, p;
        cin>>n>>p;
        string s;
        cin>>s;
        int lef=-1,rig=-1;
        if(p==1|| p==n){cout<<1<<endl;continue;}
        for(int i=p-2; i>=0; i--){
            if(s[i]=='#'){lef=i;break;}
        }
        for(int i=p; i<=n; i++){
            if(s[i]=='#'){rig=i;break;}
        }
        if(lef==-1&& rig==-1){cout<<1<<endl;continue;}
        if(lef==-1){
            cout<<min(p-1,n-rig+1)<<endl;continue;
        }
        if(rig==-1){
            cout<<min(lef+2,n-p+1)<<endl;continue;
        }
        int m1=min(lef+2,n-p+1);
        int m2=min(p,n-rig+1);
        cout<<max(m1,m2)<<endl;
    }
    return 0;
}