//  C. Grid Covering

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       long long n,m,a,b;
       cin>>n>>m>>a>>b;
       bool fl=true;
       if(gcd(n,a)!=1 || gcd(m,b)!=1 || gcd(n,m)>2)fl=false;
       cout<<(fl==true ? "YES": "NO")<<endl;
    }
    return 0;
}