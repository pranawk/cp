//  B. Monocarp and Projects

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long ans=0;
        long long i;
        for (i=0;  i<=k-1 && i<=(y-2*x); i++)
        {
            ans+=(y-x)%(x+i);
        }
        if (k-1>(y-2*x))
        {
            ans+=1ll*(k-1-y+2*x)*(y-x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
