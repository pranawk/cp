#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0; i<n; i++)cin>>b[i];
        vector<int>gcds;
        for(int i=0; i<n-1; i++){
            if(b[i+1]%b[i]!=0){gcds.emplace_back(b[i]/gcd(b[i],b[i+1]));}
        }
        if(gcds.size()!=0){
            int ans=gcds[0];
            for(int i=0; i<gcds.size(); i++){
            ans=lcm(ans,gcds[i]);}
            cout<<ans<<'\n';}
        else{cout<<1<<'\n';}
    }
return 0;
}