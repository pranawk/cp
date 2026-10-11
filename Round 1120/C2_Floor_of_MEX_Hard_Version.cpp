//  C2. Floor of MEX (Hard Version)

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0; i<n; i++)cin>>a[i];
        int mx=INT_MIN, mn=INT_MAX;
        set<int>na;
        unordered_map<int,int>mp;
        for (int i=0; i<n; i++)
        {
            if (a[i]<=1)mx=max(mx,i);
            mx=max(mx, (a[i]-1)*(i+1));
            int zz=0;
            mp[a[i]*(i+1)]++;
            mp[a[i]*(i+1)+i+1]--;
        }
        int cn=0;
        long long ans=1;
        for (int i=0; i<=mx; i++)
        {
            cn+=mp[i];
            if (cn>0)ans*=cn;
            cout<<cn<<" ";
        }
        cout<<ans<<endl;
    }
    return 0;
}
