//  B. Fox Dividing Cheese

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b,c,d;
    cin>>a>>b;
    c=a,d=b;
    unordered_map<int,int>mp;
    int ii=2;
    while(a>1 && ii*ii<=c){
        while(a>1 && a%ii==0){mp[ii]++; a/=ii;}
        ii++;
    }
    mp[a]++;
    ii=2;
    while(b>1 && ii*ii<=d){
        while(b>1 && b%ii==0){mp[ii]--; b/=ii;}
        ii++;
    }
    mp[b]--;
    int ans=0;
    bool fl=true;
    for(auto i:mp){
        if(i.first==2 || i.first==3 || i.first==5){
            ans+=abs(i.second);
        }
        else {if(abs(i.second)>0 && i.first!=1)fl=false;}
    }
    if(fl==false)cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}