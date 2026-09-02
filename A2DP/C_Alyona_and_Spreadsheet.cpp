//  C. Alyona and Spreadsheet

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)cin>>a[i][j];
    }
    int q;
    cin>>q;
    vector<vector<int>>votes(n,vector<int>(m,0));
    for (int i=0; i<m; i++)
    {
        for (int j=1; j<n; j++)
        {
            if (a[j][i]>=a[j-1][i])votes[j][i]=1+votes[j-1][i];
        }
    }
    vector<int>tt(n,0);
    for (int i=0; i<n; i++)
    {
        int cm=-1;
        for (int j=0; j<m; j++){cm=max(cm,votes[i][j]);}
        tt[i]=cm;
    }
    // for (int i=0; i<n; i++)cout<<tt[i]<<endl;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        if (tt[r-1]>=(r-l))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}