//  D1. Come Be My Friend, Don't Be So Scared (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        else if(n==2){
            cout<<"1 \n1 1"<<endl;
            continue;
        }
        else if(n==3){
            cout<<"2\n1 1\n2 2"<<endl;
            continue;
        }
        vector<pair<int,int>>ans;
        ans.push_back({1,2});
        int ii=2;
        while(ii<n){
            if(ii+2==n){
                ans.push_back({ii, ii+1});
                break;
            }
            if(ii+1==n){
                ans.push_back({ii,ii});
                break;
            }
            ans.push_back({ii,ii+2});
            ii+=2;
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;

    }
    return 0;
}