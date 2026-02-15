//  B. Jzzhu and Sequences

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    n%=6;
    if(n==1)cout<<(x%MOD+MOD)%MOD<<endl;
    if(n==2)cout<<(y%MOD+MOD)%MOD<<endl;
    if(n==3)cout<<((y-x)%MOD+MOD)%MOD<<endl;
    if(n==4)cout<<((-x)%MOD+MOD)%MOD<<endl;
    if(n==5)cout<<((-y)%MOD+MOD)%MOD<<endl;
    if(n==0)cout<<((x-y)%MOD+MOD)%MOD<<endl;
    return 0;
}