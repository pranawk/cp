//  B. Gigantomachy

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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)cin >> a[i];
        for (int i = 0; i < m; i++)cin >> b[i];
        int sm1 = 0, sm2 = 0;
        for (int i = 0; i < n - 1; i++)sm1 += (a[i] - a[i + 1] + 1);
        sm1 += a[n - 1];
        for (int i = 0; i < m - 1; i++)sm2 += (b[i] - b[i + 1] + 1);
        sm2 += b[m - 1];
        if (sm1 >= sm2)cout << 1 << endl;
        else cout << 2 << endl;
        //cout<<sm1<<" "<<sm2<<endl;
    }
    return 0;
}
