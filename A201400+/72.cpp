#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned n;
    cin>>n;
    if(n<=2)cout<<n<<endl;
    else if(n==3)cout<<6<<endl;
    else if(n==4)cout<<12<<endl;
    else if(n>4 && n%2==0){
        long long aa=0,bb=0;
        if(n%3!=0)aa=1ll*n*(n-1)*(n-3);
        n--;
        bb=1ll*n*(n-1)*(n-2);
        cout<<max(aa,bb)<<endl;}
    else cout<<1ll*n*(n-1)*(n-2)<<endl;
    return 0;
}