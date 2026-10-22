//  A. New Year and Hurry

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int tm=240;
    tm-=m;
    int ans=0;
    for(int i=1; i<=n && tm>=i*5 ; i++){
        tm-=5*i;
        ans=i;
    }
    cout<<ans<<endl;
    return 0;
}