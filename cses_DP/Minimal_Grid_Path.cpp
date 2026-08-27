//  Minimal Grid Path

#include<bits/stdc++.h>

using namespace std;
int n;
pair<int,int> parent[3001][3001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<string>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<3001 ;i++)
    {
        for (int j=0; j<3001; j++)parent[i][j]={-1,-1};
    }
    vector<pair<int,pair<int,int>>>pq,pq2;
    pq.push_back({(a[0][0]-'A'),{0,0}});
    while (1)
    {
        sort(pq.begin(),pq.end());
        pq2.clear();
        int ch=pq[0].first;
        int pi=0;
        if (pq[0].second.first==n-1 && pq[0].second.second==n-1)break;
        // int ii=pq.top().second.first;
        // int jj=pq.top().second.second;
        while (pi<pq.size() && pq[pi].first==ch)
        {
            int i=pq[pi].second.first;
            int j=pq[pi].second.second;
            pi++;
            if (i+1<n && parent[i+1][j].first==-1)
            {
                parent[i+1][j]={i,j};
                pq2.push_back({(a[i+1][j]-'A'),{i+1,j}});
            }
            if (j+1<n && parent[i][j+1].first==-1)
            {
                parent[i][j+1]={i,j};
                pq2.push_back({(a[i][j+1]-'A'),{i,j+1}});
            }
        }
        pq.swap(pq2);
    }
    string ans;
    ans.push_back(a[n-1][n-1]);
    int ii=parent[n-1][n-1].first;
    int jj=parent[n-1][n-1].second;
    while (1)
    {
        if (ii==-1)break;
        ans+=a[ii][jj];
        int i=parent[ii][jj].first;
        int j=parent[ii][jj].second;
        ii=i;jj=j;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}
