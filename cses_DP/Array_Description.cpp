//  Array Description

#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

struct tupple
{
    int prev, sz, next;
};

string t_to_s(tupple t)
{
    string s;
    s += to_string(t.prev);
    s += '_';
    s += to_string(t.sz);
    s += '_';
    s += to_string(t.next);
    return s;
}

unordered_map<string, int> mp;
int n, m;

int solve(int prev, int ii, int& nxt)
{
    long long ans = 0;
    if (ii == 0 && nxt == -1)return 1;
    if (ii == 0)
    {
        if (abs(prev - nxt) < 2)return 1;
        else return 0;
    }
    else
    {
        if (!mp[t_to_s({prev, ii - 1, nxt})])mp[t_to_s({prev, ii - 1, nxt})] = solve(prev, ii - 1, nxt);
        ans += mp[t_to_s({prev, ii - 1, nxt})];
        ans %= MOD;
        if (prev + 1 <= m)
        {
            if (!mp[t_to_s({prev + 1, ii - 1, nxt})])mp[t_to_s({prev + 1, ii - 1, nxt})] = solve(prev + 1, ii - 1, nxt);
            ans += mp[t_to_s({prev + 1, ii - 1, nxt})];
            ans %= MOD;
            // ans+=solve(prev+1,ii-1,nxt);
        }
        if (prev - 1 >= 1)
        {
            if (!mp[t_to_s({prev - 1, ii - 1, nxt})])mp[t_to_s({prev - 1, ii - 1, nxt})] = solve(prev - 1, ii - 1, nxt);
            ans += mp[t_to_s({prev - 1, ii - 1, nxt})];
            // ans+=solve(prev-1,ii-1,nxt);
        }
    }
    return (int)ans % MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    long long ans = 1;
    int ii = 0, cnn = 0;
    while (ii < n && a[ii] == 0)
    {
        cnn++;
        ii++;
    }
    if (ii < n)
    {
        int pp = -1;
        if (!mp[t_to_s({a[ii], cnn, pp})])mp[t_to_s({a[ii], cnn, pp})] = solve(a[ii], cnn, pp);
        ans *= mp[t_to_s({a[ii], cnn, pp})];
        ans %= MOD;
    }
    else
    {
        int pp = -1;
        for (int i = 1; i <= m; i++)
        {
            if (!mp[t_to_s({i, cnn - 1, pp})])mp[t_to_s({i, cnn - 1, pp})] = solve(i, cnn - 1, pp);
            ans += mp[t_to_s({i, cnn - 1, pp})];
            ans %= MOD;
        }
        cout << ans - 1;
        return 0;
    }
    for (int i = ii; i < n;)
    {
        if (a[i] == 0)
        {
            int prv = a[i - 1];
            int cn = 0;
            while (i < n && a[i] == 0)
            {
                i++;
                cn++;
            }
            int nx;
            if (i == n)
            {
                nx = -1;
                if (!mp[t_to_s({prv, cn, nx})])mp[t_to_s({prv, cn, nx})] = solve(prv, cn, nx);
                ans *= mp[t_to_s({prv, cn, nx})];
                //cout<<solve(prv,cn,nx)<<"  ";
            }
            else
            {
                nx = a[i];
                if (!mp[t_to_s({prv, cn, nx})])mp[t_to_s({prv, cn, nx})] = solve(prv, cn, nx);
                ans *= mp[t_to_s({prv, cn, nx})];
                // ans*=solve(prv,cn,nx);
                //cout<<solve(prv,cn,nx)<<" ";
            }
            ans %= MOD;
        }
        else i++;
    }
    cout << ans;
    return 0;
}
