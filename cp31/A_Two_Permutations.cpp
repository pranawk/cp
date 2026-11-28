//  A. Two Permutations

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b>=n-1){
            if(a!=b || a!=n)cout<<"No\n";
            else cout<<"Yes\n";
        }
        else cout<<"Yes\n";
    }
    return 0;
}