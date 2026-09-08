//  B. Monocarp and Projects

#include<bits/stdc++.h>
using namespace std;
long long solve(long long x, long long y, long long n) {
    if (y < x) {
        return (n + 1) * y + (n * (n + 1)) / 2;
    }
    long long diff = y - x;
    long long pp = y - 2 * x;
    long long total = 0;
    if (pp < 0) {
        return diff * (n + 1);
    }
    long long limit =min(pp, n);
    for (long long i = 0; i <= limit; ++i) {
        total += diff % (x + i);
    }
    if (n > pp) {
        long long rt= n - pp;
        total += rt* diff;
    }
    return total;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long x,y,k;
        cin>>x>>y>>k;
        cout<<solve(x,y,k-1)<<endl;
    }
    return 0;
}

