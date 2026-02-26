//  A. Towers of Boxes

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,d;
        cin>>n>>m>>d;
        int pp=(d/m)+1;
        cout<<(n+pp-1)/pp<<endl;
    }
    return 0;
}