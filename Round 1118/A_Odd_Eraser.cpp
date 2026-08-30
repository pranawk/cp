//  A. Odd Eraser

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
        cout<<gcd(a[0],a[n-1])<<endl;
    }
    return 0;
}
