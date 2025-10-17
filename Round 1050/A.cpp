#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int x,n;
        cin>>x>>n;
        if(n%2==0)cout<<0<<endl;
        else cout<<x<<endl;
    }

    return 0;
}