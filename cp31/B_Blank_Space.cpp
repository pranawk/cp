//  B. Blank Space

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
        int ans=0,cn=0,temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp==0)cn++;
            else cn=0;
            ans=max(ans,cn);
        }
        cout<<ans<<'\n';
    }
    return 0;
}