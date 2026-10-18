//  B. What's the Capital of France?

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int mn=INT_MAX,mx=INT_MIN;
        int temp;
        for(int i=0; i<n; i++){cin>>temp; mn=min(mn, temp); mx=max(mx, temp);}
        int ans=mx;
        int ii=0, pp=0, aa=0;
        while((1<<ii)<=mx){
            aa|=(1<<ii);
            pp=1<<ii;
            ii++;
        }
        if((pp&mn)!=pp){
            cout<<aa<<endl;
            continue;
        }
        for(int i=mn; i<mx; i++)ans|=i;
        cout<<ans<<endl;
    }
    return 0;
}