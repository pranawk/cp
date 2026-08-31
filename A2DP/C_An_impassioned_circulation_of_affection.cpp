//  C. An impassioned circulation of affection

#include<bits/stdc++.h>

using namespace std;
int n;
int dp[26][1500];
int solve(vector<vector<pair<int,int>>>&dens, int &c, int left)
{
    int ans=0;
    for (int i=0; i<dens[c].size(); i++)
    {
        int temp=left;
        int ca=0;
        for (int j=i; j<dens[c].size(); j++)
        {
            ca+=dens[c][j].second-dens[c][j].first;
            if (j+1<dens[c].size())
            {
                if (dens[c][j+1].first>dens[c][j].second+temp)
                {
                    ca+=temp;
                    break;
                }
                else
                {
                    ca+=dens[c][j+1].first-dens[c][j].second;
                    temp-=(dens[c][j+1].first-dens[c][j].second);
                }
            }
            else
            {
                ca+=temp;
                break;
            }
            // if (dens[c][j].first==3)
            // {
            //     cout<<ca<<" "<<dens[c][j+1].first<<" ";
            // }
        }
        // cout<<ca<<" ";
        ans=max(ans,ca);
    }
    dp[c][left]=min(ans,n);
    return dp[c][left];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    string s;
    cin>>s;
    vector<vector<pair<int,int>>>dens(26);
    for (int i=0; i<n; )
    {
        char temp=s[i];
        int f=i;
        while (i<n && s[i]==temp)i++;
        dens[temp-'a'].push_back({f,i});
    }
    // for (int i=0; i<26; i++)
    // {
    //     for (int j=0; j<dens[i].size(); j++)cout<<'a'+i<<" "<<dens[i][j].first<<" "<<dens[i][j].second<<endl;
    // }
    for (int i=0; i<26; i++)
    {
        for (int j=0; j<1500; j++)dp[i][j]=-1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int p;
        char c;
        cin>>p>>c;
        int ti=c-'a';
        if (dens[ti].size()==0){cout<<min(n,p)<<endl; continue;}
        if (dp[ti][p]!=-1){cout<<dp[ti][p]<<endl;continue;}
        cout<<solve(dens,ti,p)<<endl;
    }
    return 0;
}