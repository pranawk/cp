#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int ii=1;
    int minm=0,maxm=0;
    int ll=l,rr=r-l;
    while(ll--){minm+=ii; ii*=2;}
    maxm=minm;
    minm+=n-l;
//    r-=l;
    while(rr--){maxm+=ii; ii*=2;}
    maxm+=(n-r)*(ii/2);
    cout<<minm<<" "<<maxm<<endl;
    return 0;
}