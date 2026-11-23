//  A. Ambitious Kid

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
//     cin>>tt;
//     while(tt--){
        int n;
        cin>>n;
        int temp, ans=INT_MAX;
        for(int i=0 ; i<n; i++){
            cin>>temp;
            ans=min(ans,(abs(temp)));
        }
        cout<<ans<<'\n';
//     }
    return 0;
}