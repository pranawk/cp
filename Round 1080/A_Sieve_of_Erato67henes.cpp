//  A. Sieve of Erato67henes

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
        int aa;
        bool fl=false;
        for(int i=0; i<n; i++){
            cin>>aa;
            if(aa==67)fl=true;
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}