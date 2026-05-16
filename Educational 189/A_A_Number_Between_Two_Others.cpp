//  A. A Number Between Two Others

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
        cout<<(y>x*2 ? "YES" :"NO")<<endl;
    }
    return 0;
}