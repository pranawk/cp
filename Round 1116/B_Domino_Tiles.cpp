//  B. Domino Tiles

#include<bits/stdc++.h>

using namespace std;
const int MOD=998244353;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        string s;
        cin>>n>>s;
        if(n==1){
            cout<<(s[0]=='?'?2:1)<<endl;
            continue;
        }
        vector<string>patterns={
            "0011",
            "0110",
            "1001",
            "1100"
        };
        int ans = 0;
        for(const string& p: patterns) {
            bool ok= true;
            for (int i= 0;i<n;i++) {
                char need= p[i % 4];
                if (s[i]!='?'&& s[i]!= need) {
                    ok=false;
                    break;
                }
            }
            if(ok)ans++;
        }
        cout<<ans%MOD<<endl;;
    }
    return 0;
}