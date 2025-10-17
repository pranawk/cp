#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin>>tt;
    while(tt--){
        int k,x;
        cin>>k>>x;
        while(k--)x*=2;
        cout<<x<<endl;
    }

    return 0;
}