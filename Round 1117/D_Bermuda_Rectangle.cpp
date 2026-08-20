//  D. Bermuda Rectangle

#include<bits/stdc++.h>

using namespace std;

int tp(vector<pair<long long, long long>>& pis, long long& a, int l, int r)
{
    if (l == r)return l;
    if (l + 1 == pis.size())return l;
    if (pis[l].second >= a && pis[l + 1].second < a)return l;
    int mid = l + (r - l) / 2;
    if (pis[mid].second >= a)return tp(pis, a, mid, r);
    return tp(pis, a, l, mid);
}

int tp2(vector<pair<long long, long long>>& pis, long long& b, int l, int r)
{
    if (pis[l].first > b)return l - 1;
    if (l == r)return l;
    if (l + 1 == pis.size())return l;
    if (pis[l].first >= b && pis[l + 1].first < b)return l;
    int mid = l + (r - l) / 2;
    if (pis[mid].first < b) { return tp2(pis, b, mid + 1, r); }
    return tp2(pis, b, l, mid);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long s;
        int q;
        cin >> s >> q;
        vector<pair<long long, long long>> pis;
        for (long long i = 1; i * i <= s; i++)
        {
            if (s % i == 0)
            {
                pis.push_back({i, s / i});
                pis.push_back({s / i, i});
            }
        }
        sort(pis.begin(), pis.end());
        vector<long long> adds(0);
        long long sm = 0;
        int n = pis.size();
        long long pre = 0;
        for (int i = 0; i < n; i++)
        {
            sm += pis[i].second * 1ll * (pis[i].first - pre);
            adds.push_back(sm);
            pre = pis[i].first;
        }
        while (q--)
        {
            long long ans = 0;
            long long x, y;
            long long prv = 0;
            cin >> x >> y;
            int ii = tp(pis, x, 0, n);
            // if (ii>0)
            // {
            ans += x * min(pis[ii].first, y);
            // }
            if (pis[ii].first > y)
            {
                cout << ans << endl;
                continue;
            }
            int jj = tp2(pis, y, 0, n);
            //cout<<ii<<" "<<jj<<endl;
            //for (int i=0; i<adds.size(); i++)cout<<adds[i]<<" ";
            prv = 0;
            if (jj >= 0)
            {
                ans += adds[jj];
                ans -= adds[ii];
                prv = pis[jj].first;
            }
            else ans = 0;
            //cout<<prv<<endl;
            for (int i = jj + 1; i < n; i++)
            {
                //if (i-1>0 && pis[i-1].first>=y)break;
                if (pis[i].first >= y)
                {
                    //cout<<min(pis[i].second,x)*(y-prv)<<endl;
                    ans += min(pis[i].second, x) * (y - prv);
                    break;
                }
                ans += min(pis[i].second, x) * (pis[i].first - prv);
                prv = pis[i].first;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
