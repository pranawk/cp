//  A. Points on Line

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    if(n<3){cout<<0<<endl;return 0;}
    vector<int>x(n);
    for(int i=0 ; i<n; i++)cin>>x[i];
    int l=0,r=1;
    long long ans=0;
    while(r!=n-1 || r-l>=2){
        while(r+1<n && x[r+1]-x[l]<=d)r++;
        if(r-l>=2 && x[r]-x[l]<=d)ans+=(1ll*(r-l)*(r-l-1))/2;
        l++;
        //while(x[r+1]-x[l]>d)l++;
        //cout<<l<<" "<<r<<endl;
    }
    cout<<ans<<endl;
    return 0;
}