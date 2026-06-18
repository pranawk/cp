//  Shortest Routes II

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n,m,q;
        cin>>n>>m>>q;
        vector<vector<pair<long long,long long>>>roads(n+1);
        long long a,b,c;
        for(int i=0; i<m; i++){
            cin>>a>>b>>c;
            roads[a].push_back({c,b});
            roads[b].push_back({c,a});
        }
        vector<vector<long long>>distance(n+1,vector<long long>(n+1,LLONG_MAX));
        for(int i=1; i<=n; i++){
            priority_queue<pair<long long , long long>, vector<pair<long long ,long long>>,greater<pair<long long ,long long>>>pq;
            for(int j=1; j<i; j++){
                distance[i][j]=distance[j][i];
                //pq.push({distance[i][j],j});
                for(int k=0; k<roads[j].size(); k++){
                    pq.push({roads[j][k].first+distance[i][j], roads[j][k].second});
                }
            }
            pq.push({0,i});
            long long  aa,bb;
            while(!pq.empty()){
                aa=pq.top().first;
                bb=pq.top().second;
                pq.pop();
                if(distance[i][bb]<=aa)continue;
                distance[i][bb]=aa;
                for(int j=0; j<roads[bb].size(); j++){
                    pq.push({roads[bb][j].first+aa, roads[bb][j].second});
                }
            }
        }
        int aa,bb;
        for(int i=0; i<q; i++){
            cin>>aa>>bb;
            if(distance[aa][bb]==LLONG_MAX){cout<<-1<<endl;continue;}
            cout<<distance[aa][bb]<<endl;
        }

    return 0;
}