//  B. Physics Practical

#include<bits/stdc++.h>

using namespace std;
int n;
// int dp[5001][5001];
// int solve(vector<int>&a, int l, int r)
// {
//     if (l==r)return 0;
//     if (a[l]*2>=a[r])return r-l;
//     if (dp[l+1][r]==-1)dp[l+1][r]=solve(a,l+1,r);
//     if (dp[l][r-1]==-1)dp[l][r-1]=solve(a,l,r-1);
//     dp[l][r]=max(dp[l+1][r],dp[l][r-1]);
//     return dp[l][r];
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;
    getline(input,line);
    n=stoi(line);
    getline(input,line);
    vector<int>a;
    int temp=0;
    //output<<line<<endl;
    for (int i=0; i<line.size();i++)
    {
         if (line[i]==' ')
         {
             a.push_back(temp);
             temp=0;
         }
         else temp=temp*10+line[i]-'0';
    }
    a.push_back(temp);
    sort(a.begin(),a.end());
    // for (int i=0; i<5001; i++)
    // {
    //     for (int j=0; j<5001; j++)dp[i][j]=-1;
    // }
    input.close();
    int l=0,r=0;
    int ans=0;
    while (r<n)
    {
        while (r<n && a[l]*2>=a[r])r++;
        ans=max(ans,r-l);
        l++;
    }
    output<<n-ans;
    output.close();
    return 0;
}
