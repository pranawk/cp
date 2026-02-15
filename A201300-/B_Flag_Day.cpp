//  B. Flag Day

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    unordered_map<int,unordered_set<int>>mp;
    vector<int>cnt(m,0);
    int a,b,c;
    vector<int>ans(n+1,-1);
    vector<vector<int>>pp(m);
    for(int i=0; i<m; i++){
        cin>>a>>b>>c;
        pp[i].push_back(a);pp[i].push_back(b);pp[i].push_back(c);
        mp[a].insert(i);
        mp[b].insert(i);
        mp[c].insert(i);
    }
    for(int i=0; i<m; i++){
        if(cnt[i]==0){
            ans[pp[i][0]]=1;
            for(auto k: mp[pp[i][0]])cnt[k]++;
            ans[pp[i][1]]=2;
            for(auto k: mp[pp[i][1]])cnt[k]++;
            ans[pp[i][2]]=3;
            for(auto k: mp[pp[i][2]])cnt[k]++;
        }
        else if(cnt[i]==1){
            int tt=-1;
            for(int j=0; j<3; j++)tt=max(tt, ans[pp[i][j]]);
            int p,q;
            if(tt==1)p=2,q=3;
            else if(tt==2)p=1,q=3;
            else p=1,q=2;
            if(ans[pp[i][0]]==-1){
                if(p!=-1){ans[pp[i][0]]=p;p=-1;}
                for(auto k: mp[pp[i][0]])cnt[k]++;
            }
            if(ans[pp[i][1]]==-1){
                if(p!=-1){ans[pp[i][1]]=p;p=-1;}
                else{ans[pp[i][1]]=q;}
                for(auto k: mp[pp[i][1]])cnt[k]++;
            }
            if(ans[pp[i][2]]==-1){
                ans[pp[i][2]]=q;
                for(auto k: mp[pp[i][2]])cnt[k]++;
            }
        }
        else if(cnt[i]==2){
            vector<bool>ff(4,false);
            for(int j=0; j<3; j++)ff[ans[pp[i][j]]]=true;
            int fi;
            for(int j=1; j<=3; j++)if(ff[j]==false)fi=j;
            if(ans[pp[i][0]]==-1){
                ans[pp[i][0]]=fi;
                for(auto k: mp[pp[i][0]])cnt[k]++;
            }
            if(ans[pp[i][1]]==-1){
                ans[pp[i][1]]=fi;
                for(auto k: mp[pp[i][1]])cnt[k]++;
            }
            if(ans[pp[i][2]]==-1){
                ans[pp[i][2]]=fi;
                for(auto k: mp[pp[i][2]])cnt[k]++;
            }
        }
    }
    for(int i=1; i<=n; i++)cout<<ans[i]<<" ";
    return 0;
}