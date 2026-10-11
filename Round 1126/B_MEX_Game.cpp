//  B. MEX Game

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        map<int,int>mp;
        for(int i=0; i<n; i++)mp[a[i]]++;
        bool fl=false;
        int ii=0;
        int mx=*max_element(a.begin(),a.end());
        for(auto i:mp){
            if(i.first!=ii){fl=false;break;}
            else{ii++;}
            if(i.second==2*k-1){fl=true;break;}
            else if(i.second<2*k-1){fl=false;break;}
        }
//         cout<<ii<<" ";
        cout<<(fl==true  ? "YES" : "NO")<<endl;
    }
    return 0;
}