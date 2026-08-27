//  Money Sums

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<bool>dp(100001,false);
    dp[0]=true;
    for (int i=0; i<n; i++)
    {
        for (int j=100000; j>=a[i]; j--)
        {
            if (dp[j-a[i]]==true)dp[j]=true;
        }
    }
    vector<int>ans;
    for (int i=1; i<100001; i++)if (dp[i]==true)ans.push_back(i);
    cout<<ans.size()<<endl;
    for (int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
    return 0;
}