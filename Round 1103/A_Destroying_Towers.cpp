//  A. Destroying Towers

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
        int min=INT_MAX;
        int ans=0,a;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a>=min)ans+=min;
            else {
                ans+=a;
                min=a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}