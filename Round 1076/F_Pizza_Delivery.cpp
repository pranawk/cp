//  F. Pizza Delivery

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,ax,ay,bx,by;
        cin>>n>>ax>>ay>>bx>>by;
        vector<int>x(n),y(n);
        for(int i=0; i<n; i++)cin>>x[i];
        for(int i=0; i<n; i++)cin>>y[i];
        map<int,vector<int>>mp;

        for(int i=0; i<n; i++){
            mp[x[i]].push_back(y[i]);
        }
        vector<pair<int,pair<int,int>>>pp;
        for(auto i: mp){
            pp.push_back({i.first,{*min_element(i.second.begin(),i.second.end()),*max_element(i.second.begin(),i.second.end())}});
        }
        //for(auto i: mp)cout<<i.first<<" ";
        //for(int i=0; i<pp.size(); i++)cout<<pp[i].first<<" "<<pp[i].second.first<<" "<<pp[i].second.second<<endl;
        long long ans=0;
        sort(pp.begin(),pp.end());
        int u=1;
        ans+=pp[0].first-ax;
        ans+=abs(pp[0].second.second-ay);
        int nn=pp.size();
        for(int i=0; i<nn; i++){
            ans+=pp[i].second.second-pp[i].second.first;
            if(i==nn-1){
                ans+=bx-pp[i].first;
                if(u==1){
                   ans+=abs(by-pp[i].second.first);
                }
                else{
                    ans+=abs(by-pp[i].second.second);
                }
            }
            else{
                ans+=pp[i+1].first-pp[i].first;
                if(u==1){
                   ans+=abs(pp[i+1].second.first-pp[i].second.first);
                }
                else{
                    ans+=abs(pp[i+1].second.second-pp[i].second.second);
                }
            }
            u^=1;
        }
        long long ans2=ans;
        ans=0;
        u=0;
        ans+=pp[0].first-ax;
        ans+=abs(pp[0].second.first-ay);
        for(int i=0; i<nn; i++){
            ans+=pp[i].second.second-pp[i].second.first;
            if(i==nn-1){
                ans+=bx-pp[i].first;
                if(u==1){
                   ans+=abs(by-pp[i].second.first);
                }
                else{
                    ans+=abs(by-pp[i].second.second);
                }
            }
            else{
                ans+=pp[i+1].first-pp[i].first;
                if(u==1){
                   ans+=abs(pp[i+1].second.first-pp[i].second.first);
                }
                else{
                    ans+=abs(pp[i+1].second.second-pp[i].second.second);
                }
            }
            u^=1;
        }
        cout<<min(ans,ans2)<<endl;
    }
    return 0;
}