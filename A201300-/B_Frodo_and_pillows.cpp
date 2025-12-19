//  B. Frodo and pillows

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    m-=n;
    int ans=1;
    int l=k,r=k;
    while((r-l+1)<=m){
        if(r==n && l==1){ans+=m/n;break;}
        m-=(r-l+1);
        ans++;
        if(r<n)r++;
        if(l>1)l--;
    }
    cout<<ans<<endl;
    return 0;
}
