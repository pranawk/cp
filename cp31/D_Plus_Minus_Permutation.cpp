//  D. Plus Minus Permutation

#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b, a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long g= gcd(x,y);
        long long gc= x*y/g;
//         cout<<gc<<" ";
        long long sm=0;
        long long num= n-(n/x)+n/gc, num2= n/y - n/gc;
        sm+=(n*(n+1)/2)-(num)*(num+1)/2;
        sm-=(num2*(num2+1)/2);
        cout<<sm<<'\n';
    }
    return 0;
}