//Buying  a TV
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    if(b==0)return a;
    return gcd( b, a%b);
}
int main(){
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    long long g= gcd(x,y);
    x/=g; y/=g;
    cout<<min(a/x, b/y)<<endl;
    return 0;
}