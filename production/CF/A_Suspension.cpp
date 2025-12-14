//  A. Suspension

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,y,r;
        cin>>n>>y>>r;
        cout<<min(n,r+y/2)<<'\n';
    }
    
    return 0;
}
