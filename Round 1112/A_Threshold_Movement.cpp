//  A. Threshold Movement

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        if(n % 2 == 1){
            cout << "NO\n";
            continue;
        }
        long long L = 0;
        long long R = 1000000001LL;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0)
                R= min(R, (long long)a[i]);
            else
                L= max(L, (long long)a[i]);
        }
        cout << (L + 2 <= R ? "YES" : "NO") << '\n';
    }
    return 0;
}