//  D. Fullmetal Bitchemist

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> pref(n + 1, 0);
        for(int i = 1; i <= n; ++i){
            int v = (s[i - 1] == '0' ? 1 : 2);
            pref[i] = (pref[i - 1] + v) % 3;
        }
        long long total = 0;
        long long cnt[3]={1, 0, 0};
        for(int r = 1; r<=n; ++r) {
            total += r-cnt[pref[r]];
            cnt[pref[r]]++;}
        long long sub = 0;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j + 1 < n && s[j] != s[j + 1]) ++j;
            int L = j - i + 1;
            long long odd_cnt;
            if(L%2== 0)odd_cnt =1LL*(L/2)*(L/2+1);
            else odd_cnt = 1LL*((L+1)/2)*((L+1)/2);
            long long diff = odd_cnt - L;
            if(diff>0) sub += diff;
            i=j+1;
        }
        cout<<total-sub<<endl;
    }
    return 0;
}