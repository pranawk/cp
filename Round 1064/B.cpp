#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a, b,n;
        cin>>a>>b>>n;
        if(a<=b)cout<<1<<endl;
        else if(a/n<b)cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}