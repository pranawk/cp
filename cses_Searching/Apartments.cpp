//  Apartments

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>app(n);
    vector<int>apr(m);
    for(int i=0; i<n; i++)cin>>app[i];
    for(int i=0; i<m; i++)cin>>apr[i];
    sort(app.begin(),app.end());
    sort(apr.begin(),apr.end());
    int ans=0;
    int l=0,r=0;
    while(l!=n && r!=m){
        if(app[l]+k<apr[r]){l++;continue;}
        if(app[l]-k>apr[r]){r++;continue;}
        l++;r++;ans++;
    }
    cout<<ans<<endl;
    return 0;
}
