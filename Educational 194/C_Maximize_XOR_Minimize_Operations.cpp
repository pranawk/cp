//  C. Maximize XOR, Minimize Operations

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long x,y;
        cin>>x>>y;
        long long S = x + y;
        long long a = 0;
        for (int i = 62; i >= 0; --i) {
            long long bit = 1LL << i;
            if ((S & bit) && (a + bit <= x)) {
                a |= bit;
            }
        }
        cout << S << ' ' << x - a << '\n';
    }
    return 0;
}