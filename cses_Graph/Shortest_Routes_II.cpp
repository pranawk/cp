//  Shortest Routes II
// Floyd Warshal
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n,m,q;
        cin>>n>>m>>q;
        vector<vector<pair<long long,long long>>>roads(n+1);
        long long a,b,c;
        vector<vector<long long>>distance(n+1,vector<long long>(n+1,LLONG_MAX/4));
        for(int i=0; i<m; i++){
            cin>>a>>b>>c;
            distance[a][b]=min(distance[a][b],c);
            distance[b][a]=distance[a][b];
        }
        for(int i=0; i<=n; i++)distance[i][i]=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(j==i)continue;
                for(int k=1; k<=n; k++){
                    if(k==i)continue;
                    distance[j][k]=min(distance[j][k], distance[i][j]+distance[i][k]);
                    distance[k][j]=distance[j][k];
                }
            }
        }
//        for(int i=1; i<n; i++){
//            for(int j=1; j<n; j++)cout<<distance[i][j]<<" ";
//            cout<<endl;
//        }
        int aa,bb;
        for(int i=0; i<q; i++){
            cin>>aa>>bb;
            if(distance[aa][bb]==LLONG_MAX/4){cout<<-1<<endl;continue;}
            cout<<distance[aa][bb]<<endl;
        }

    return 0;
}