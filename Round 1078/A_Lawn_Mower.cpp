//  A. Lawn Mower

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,w;
        cin>>n>>w;
        cout<<n-(n/w)<<endl;
    }
    return 0;
}