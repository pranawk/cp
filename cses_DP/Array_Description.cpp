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
    //     for (int i = ii; i < n;)
    //     {
    //         if (a[i] == 0)
    //         {
    //             int prv = a[i - 1];
    //             int cn = 0;
    //             while (i < n && a[i] == 0)
    //             {
    //                 i++;
    //                 cn++;
    //             }
    //             int nx;
    //             if (i == n)
    //             {
    //                 nx = -1;
    //                 if (!mp[t_to_s({prv, cn, nx})])mp[t_to_s({prv, cn, nx})] = solve(prv, cn, nx);
    //                 ans *= mp[t_to_s({prv, cn, nx})];
    //                 //cout<<solve(prv,cn,nx)<<"  ";
    //             }
    //             else
    //             {
    //                 nx = a[i];
    //                 if (!mp[t_to_s({prv, cn, nx})])mp[t_to_s({prv, cn, nx})] = solve(prv, cn, nx);
    //                 ans *= mp[t_to_s({prv, cn, nx})];
    //                 // ans*=solve(prv,cn,nx);
    //                 //cout<<solve(prv,cn,nx)<<" ";
    //             }
    //             ans %= MOD;
    //         }
    //         else i++;
    //     }
    //     cout << ans;
    //     return 0;
    // }
    // #include<bits/stdc++.h>
    // using namespace std;
    // const int MOD=1000000007;
    // int n,m;
    // unordered_map<int,long long>solve(int ii, int cn)
    // {
    //     unordered_map<int,long long>temp;
    //     if (cn==0)return temp;
    //     temp[ii]++;
    //     if (ii-1>=1)
    //     {
    //         temp[ii-1]++;
    //         for (auto i:solve(ii-1,cn-1))
    //         {
    //             temp[i.first]+=i.second;
    //             temp[i.first]%=MOD;
    //         }
    //     }
    //     if (ii+1<=m)
    //     {
    //         temp[ii+1]++;
    //         for (auto i:solve(ii+1,cn-1))
    //         {
    //             temp[i.first]+=i.second;
    //             temp[i.first]%=MOD;
    //         }
    //     }
    //     return temp;
    // }
    // int main()
    // {
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     cin>>n>>m;
    //     vector<int>a(n);
    //     for (int i=0; i<n; i++)cin>>a[i];
    //     long long ans=1;
    //     //unordered_map<int,long long>temp=solve(3,4);
    //     //for (auto i:temp)cout<<i.first<<" "<<i.second<<endl;
    //     for (int i=0; i<n; )
    //     {
    //         int prev=-1;
    //         if (i-1>=0)prev=a[i-1];
    //         if (a[i]==0)
    //         {
    //             int cn=0;
    //             while (i<n && a[i]==0){cn++;i++;}
    //             unordered_map<int,long long>temp=solve(prev,cn);
    //             //temp[prev]++;
    //             //for (auto j:temp)cout<<j.first<<" "<<j.second<<endl;
    //             cout<<endl;
    //             if (i!=n)
    //             {
    //                 int nx=a[i];
    //                 cout<<(temp[nx]+temp[nx-1]+temp[nx+1])<<" ";
    //                 ans*=(temp[nx]+temp[nx-1]+temp[nx+1]);
    //                 ans%=MOD;
    //             }
    //             else
    //             {
    //                 int sm=0;
    //                 for (auto j:temp)sm+=j.second;
    //                 cout<<sm;
    //                 ans*=sm;
    //                 ans%=MOD;
    //             }
    //         }
    //         else i++;
    //     }
    //     cout<<ans;
    //     return 0;
    // }
    //
    //
    // #include<bits/stdc++.h>
    // using namespace std;
    // const int MOD=1000000007;
    // int n,m;
    // int main()
    // {
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     cin>>n>>m;
    //     vector<int>a(n);
    //     for (int i=0; i<n; i++)cin>>a[i];
    //     long long ans=1;
    int prv = 0;
    for (int i = ii; i < n;)
    {
        if (a[i] == 0)
        {
            vector<long long> p1(m + 1, 0), p2(m + 1, 0);
            p1[prv]++;
            while (i < n && a[i] == 0)
            {
                fill(p2.begin(), p2.end(), 0);
                for (int i = 1; i <= m; i++)
                {
                    if (p1[i] > 0)
                    {
                        p2[i] += p1[i];
                        p2[i] %= MOD;
                        if (i - 1 > 0)
                        {
                            p2[i - 1] += p1[i];
                            p2[i - 1] %= MOD;
                        }
                        if (i + 1 <= m)
                        {
                            p2[i + 1] += p1[i];
                            p2[i + 1] %= MOD;
                        }
                    }
                }
                p1.swap(p2);
                i++;
            }
            // unordered_map<int, long long> mp;
            // mp[prv]++;
            // while (i < n && a[i] == 0)
            // {
            //     unordered_map<int, long long> temp;
            //     for (auto j : mp)
            //     {
            //         if (j.first - 1 >= 1)
            //         {
            //             temp[j.first - 1] += j.second;
            //             temp[j.first - 1] %= MOD;
            //         }
            //         if (j.first + 1 <= m)
            //         {
            //             temp[j.first + 1] += j.second;
            //             temp[j.first + 1] %= MOD;
            //         }
            //         temp[j.first] += j.second;
            //         temp[j.first] %= MOD;
            //     }
            //     mp.swap(temp);
            //     i++;
            // }
            if (i != n)
            {
                int nx = a[i];
                int sm = p1[nx];
                if (nx - 1 > 0)sm += p1[nx - 1];
                sm %= MOD;
                if (nx + 1 <= m)sm += p1[nx + 1];
                sm %= MOD;
                ans *= 1ll * (sm);
                // cout<<(p1[nx] + p1[nx - 1] + p1[nx + 1])<<" ";
                ans %= MOD;
            }
            else
            {
                int sm = 0;
                for (int j = 1; j <= m; j++)
                {
                    sm += p1[j];
                    sm %= MOD;
                }
                //for (auto j : p1){sm += j.second;sm%=MOD;}
                //cout<<sm;
                ans *= 1ll * sm;
                ans %= MOD;
            }
            prv = 0;
        }
        else
        {
            if (prv != 0 && abs(prv - a[i]) > 1)
            {
                cout << 0;
                return 0;
            }
            prv = a[i];
            i++;
        }
    }
    cout << ans % MOD;
    return 0;
}