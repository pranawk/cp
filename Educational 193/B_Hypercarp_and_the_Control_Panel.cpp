//  B. Hypercarp and the Control Panel

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        vector<pair<int,int>>pp;
        int cs=1;
        int pv=a[0];
        for(int i=1; i<n; i++){
            if(a[i]==pv)cs++;
            else{
                pp.push_back({a[i-1],cs});
                pv=a[i];
                cs=1;
            }
        }
        pp.push_back({a[n-1],cs});
        int ans=pp.size();
        int mx=0;
        for(int i=0; i<pp.size()-1; i++){
            if(pp[i].second>=2 && pp[i+1].second>=2)mx=2;
            if(pp[i].second==1 && pp[i+1].second>=2){
                if(i==0)mx=max(mx,1);
                else{
                    if(pp[i-1].first!=pp[i+1].first)mx=max(mx,1);
                }
            }
            if(pp[i].second>=2 && pp[i+1].second==1){
                if(i+2==pp.size())mx=max(mx,1);
                else{
                    if(pp[i+2].first!=pp[i].first)mx=max(mx,1);
                }
            }
        }
        cout<<ans+mx<<endl;
    }
    return 0;
}