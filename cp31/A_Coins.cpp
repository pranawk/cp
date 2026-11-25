//  A. Coins

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        if(n%2==0){cout<<"YES\n";continue;}
        if(n%2==1 && k%2==0){cout<<"NO\n";continue;}
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}