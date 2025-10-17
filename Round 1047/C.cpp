#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin>>tt;
    while(tt--){
        long long a,b;
        cin>>a>>b;
        long long ans=-1;
        for(long long i=1; i*i<=b; i++){
            if(b%i==0 ){
                if((a*(i)+b/i)%2==0)ans=max(ans,a*(i)+b/i);
                if((a*(b/i)+i)%2==0)ans=max(ans,a*(b/i)+i);
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}