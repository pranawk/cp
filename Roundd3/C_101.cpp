//  C. 101

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
        for (int i=0; i<n; i++)
        {
            if (a[i]==1)break;
            if (a[i]==-1){a[i]=1;break;}
        }
        for (int i=n-1; i>=0; i--)
        {
            if (a[i]==1)break;
            if (a[i]==-1){a[i]=1; break;}
        }
        for (int i=0; i<n; i++)if (a[i]==-1)a[i]=0;
        for (int i=0; i<n; i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}