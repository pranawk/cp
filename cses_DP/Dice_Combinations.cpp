//  Dice Combinations

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int memo[1000001];
long long dp(int n)
{
    int ans=0;
    if (n==0)return 1;
    for (int i=1; i<7; i++)
    {
        if (n>=i)
        {
            if (memo[n-i]==-1)memo[n-i]=dp(n-i);
            ans+=memo[n-i];
            ans%=MOD;
        }
        else break;
    }
    return ans%=MOD;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i=0; i<=n; i++)memo[i]=-1;
    cout<<dp(n);
    return 0;
}
