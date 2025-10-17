#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,w;
    cin>>h>>w;
    vector<int>r(h),c(w);
    for(int i=0; i<h; i++)cin>>r[i];
    for(int i=0; i<w; i++)cin>>c[i];
    const int MOD=1000000007;
    long long ans=1;
    for(int i=1; i<h; i++){
        for(int j=r[i]+1; j<w; j++){
            if(i>=c[j]+1){
                ans= (ans*2)%MOD;}
        }
    }
    for(int i=0; i<h; i++){
            if(r[i]<w && c[r[i]]>i){ans=0; break;}
    }
    for(int i=0; i<w; i++){
            if(c[i]<h && r[c[i]]>i){ans=0; break;}
    }
    cout<<ans<<endl;
    return 0;
}

