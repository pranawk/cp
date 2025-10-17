#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    long long s; cin>>s;
    vector<int>vol(n);
    for(int i=0; i<n; i++)cin>>vol[i];
    long long m=vol[0];
    long long js=0;
    for(int i=0; i<n; i++){
        if(vol[i]<m){js+=(m-vol[i])*i; m=vol[i];}
        else js+=vol[i]-m;
    }
    long long ans;
    if(js>=s)ans=m;
    else{
        s-=js;
        while(s>0 && m>0){
            s-=n;
            m--;
        }
        if(s>0)ans=-1;
        else ans=m;
    }
    cout<<ans<<endl;
    return 0;
}
