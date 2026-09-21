//  A. Good Contest

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
        int ans=0;
        for(int i=0; i<3 ;i++){
            int temp;
            cin>>temp;
            ans=max(ans,n-temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}