//  A. Sleeping Through Classes

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int awake = 0;
        for(int i = 0; i < n; i++) {
            if(awake> 0) {
                awake--;
            } else if(s[i] == '0') {
                ans++;
            }
            if(s[i] == '1') {
                awake= k;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
