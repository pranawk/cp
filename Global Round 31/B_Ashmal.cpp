//  B. Ashmal

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<string>s(n);
        for(int i=0; i<n;i++) {
            cin>>s[i];
        }
        string ans;
        for(int i = 0; i < n; i++) {
            string option1 = s[i] + ans;
            string option2 = ans + s[i];
            if(option1<option2) {
                ans=option1;}
            else ans=option2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
