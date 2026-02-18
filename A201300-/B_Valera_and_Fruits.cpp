//  B. Valera and Fruits

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v;
    cin>>n>>v;
    map<int,int>mp;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        mp[a]+=b;
    }
    int ans=0;
    int prev=-1, vv=0;
    for(auto i:mp){
        int vp=v;
        if(i.first==prev+1){
            ans+=min(v,vv);
            vp-=min(v,vv);
        }
        else{
            ans+=min(v, vv);
        }
        if(i.second>=vp){ans+=vp; vv=i.second-vp;}
        else{
            ans+=i.second;
            vv=0;
        }
        prev=i.first;
    }
    ans+=min(v,vv);
    cout<<ans<<endl;
    return 0;
}