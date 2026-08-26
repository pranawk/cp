//  Minimizing Coins

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int>coins(n);
    for (int i=0; i<n; i++)cin>>coins[i];
    vector<int>cs(x+1,INT_MAX/2);
    cs[0]=0;
    for (int i=0; i<n; i++)
    {
        for (int j=coins[i]; j<=x; j++)if (cs[j-coins[i]]!=INT_MAX/2)cs[j]=min(cs[j],cs[j-coins[i]]+1);
    }
    //for (int i=0; i<=x; i++)cout<<cs[i]<<" ";
    if (cs[x]==INT_MAX/2)cout<<-1;
    else cout<<cs[x];
    return 0;
}