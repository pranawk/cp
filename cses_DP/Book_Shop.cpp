//  Book Shop

#include<bits/stdc++.h>

using namespace std;
int n;
// int dp[100001][1000];
// int solve(int x, int ii, vector<int>&price, vector<int>&pages)
// {   if (ii>=n)return 0;
//     if (price[ii]<=x)
//     {
//         if (dp[x-price[ii]][ii+1]==-1)dp[x-price[ii]][ii+1]=solve(x-price[ii], ii+1, price,pages);
//         if (dp[x][ii+1]==-1)dp[x][ii+1]=solve(x,ii+1,price,pages);
//         return max(pages[ii]+dp[x-price[ii]][ii+1], dp[x][ii+1]);
//     }
//     if (dp[x][ii+1]==-1)dp[x][ii+1]=solve(x,ii+1,price,pages);
//     return dp[x][ii+1];
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    for (int i = 0; i < n; i++)cin >> price[i];
    for (int i = 0; i < n; i++)cin >> pages[i];
    // for (int i=1; i<100001; i++)
    // {
    //     for (int j=0; j<1000; j++)dp[i][j]=-1;
    // }
    // cout<<solve(x,0, price,pages);
    vector<int> pagg(x + 1, -1);
    pagg[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= price[i]; j--)
        {
            if (pagg[j - price[i]] != -1)
            {
                pagg[j] = max(pagg[j], pagg[j - price[i]] + pages[i]);
            }
        }
    }
    //for (int i=1; i<=x; i++)cout<<pagg[i]<<" ";
    cout << *max_element(pagg.begin(), pagg.end());
    return 0;
}
