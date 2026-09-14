//  A. Rumb Needs a Hand

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
        for (int i=0; i<n; i++){cin>>a[i];}
        vector<int>aa;
        for (int i=0; i<n; i++)
        {
            if (a[i]!=i+1)aa.push_back(i+1);
        }
        int r=0;
        for (int i=n-1; i>=0; i--)
        {
            if (r<aa.size() && a[i]==aa[r])r++;
        }
        if (aa.size()==0 || r==aa.size())cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
