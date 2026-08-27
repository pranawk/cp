//  Two Sets II
/*
 * if 1 is present in one set then not in other,
 * thats why we will start the cs from counting of 2->n;
 * to eleminate double counting.
 */
#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int n,sum;
int dp[125251][501];
bool fl=false;
int cs(int sm, int ii)
{
    if (ii>n)return 0;
    if ((ii+sm)*2==sum)
    {
        return 1;
    }
    if (dp[sm+ii][ii+1]==-1)dp[sm+ii][ii+1]=cs(sm+ii,ii+1);
    if (dp[sm][ii+1]==-1)dp[sm][ii+1]=cs(sm,ii+1);
    long long aa= dp[sm+ii][ii+1];
    long long bb=dp[sm][ii+1];
    aa+= bb;
    // if (aa!=1)aa/=2;
    dp[sm][ii]=(int)(aa%MOD);
    return dp[sm][ii];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    sum=(n*(n+1))/2;
    for (int i=0; i<125251; i++)
    {
        for (int j=0; j<501; j++)dp[i][j]=-1;
    }
    cout<<cs(0,2);
    return 0;
}