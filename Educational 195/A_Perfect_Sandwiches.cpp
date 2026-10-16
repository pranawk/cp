//  A. Perfect Sandwiches

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        if(a<=b){cout<<-1<<endl;continue;}
        int ans=min(b,a-b);
        if(ans<0)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}