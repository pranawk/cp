//  A. Passing the Ball

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
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<n; i++){if(s[i]=='L'){ans=i+1;break;}}
        cout<<ans<<endl;
    }
    return 0;
}