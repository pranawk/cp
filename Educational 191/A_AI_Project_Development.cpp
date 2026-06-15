//  A. AI Project Development

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        double n,x,y,z;
        cin>>n>>x>>y>>z;
        int t1=ceil(n/(x+y));
        int t2=0;
        n-=z*x;
        t2+=z;
        if(n>0)t2+=ceil(n/(x+10*y));
        cout<<min(t1,t2)<<endl;
    }
    return 0;
}