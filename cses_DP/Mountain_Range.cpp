//  Mountain Range
/* https://www.youtube.com/watch?v=Ih4YXGyOCAE
 * Good explanation, you assume that biggers are already processed
 * which means we process from the biggest to lowest,
 * the dp logic is dp[i]= max(dp[closest_max_left], dp[closest_max_right])+1
 */
#include<bits/stdc++.h>

using namespace std;
int n;
// int dp[200001][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    stack<int> st;
    vector<int> maxl(n, -1), maxr(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] <= a[i])st.pop();
        if (st.empty())maxl[i] = -1;
        else maxl[i] = st.top();
        st.push(i);
    }
    while (!st.empty())st.pop();
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] <= a[i])st.pop();
        if (st.empty())maxr[i] = -1;
        else maxr[i] = st.top();
        st.push(i);
    }
    vector<pair<int, int>> ai;
    for (int i = 0; i < n; i++)ai.push_back({a[i], i});
    sort(ai.begin(), ai.end());
    vector<int> ans(n, 0);
    for (int i = n; i >= 0; i--)
    {
        int mx = 0;
        if (maxl[ai[i].second] != -1)mx = ans[maxl[ai[i].second]];
        if (maxr[ai[i].second] != -1)mx = max(mx, ans[maxr[ai[i].second]]);
        ans[ai[i].second] = mx + 1;
    }
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}
