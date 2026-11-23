//  D. Matryoshkas

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n, temp;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){cin>>a[i];}
        sort(a.begin(),a.end());
        vector<pair<int,int>>pp;
        int ii=-1;
        for(int i=0; i<n; i++){
            if(i==0 || a[i]!=a[i-1]){
                pp.push_back({a[i],1});
                ii++;
            }
            else{
                pp[ii].second++;
            }
        }
        int ans=0;
        for(int i=0; i<pp.size(); i++){
//             cout<<pp[i].first<<" "<<pp[i].second<<'\n';
            if(i==0 || pp[i-1].first+1 !=pp[i].first){
                ans+=pp[i].second;
            }
            else{
                if(pp[i].second>pp[i-1].second)ans+=pp[i].second-pp[i-1].second;
            }
//             cout<<ans<<" ";
        }
        cout<<ans<<'\n';
    }
    return 0;
}