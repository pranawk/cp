//  B. Modulo Equality

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    unordered_map<int,int>mp,mp1;
    int aa;
    for(int i=0; i<n; i++){cin>>aa;mp[aa]++;}
    bool fl=false;
    int ii=-1;
    int x;int xb=aa;
    while(ii++!=m){
        mp1=mp;
        x=(xb-a[ii])%m;
        for(int i=0; i<n; i++){
            aa=(a[i]+x)%m;
            if(mp1[aa])mp1[aa]--;
        }
        fl=true;
        for(auto i:mp1)if(i.second>0)fl=false;
        if(fl==true)break;
    }
    cout<<x<<endl;
    return 0;
}
