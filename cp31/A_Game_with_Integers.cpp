//  A. Game with Integers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        cout<< (n%3==0 ? "Second" : "First")<<'\n';
    }
    return 0;
}