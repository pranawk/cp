//  A. And Then There Were K

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
        int cn=0;
        while(n!=0){n>>=1;cn++;}
        int ans=0;
        for(int i=0; i<cn-1; i++)ans|=1<<i;
        cout<<ans<<endl;
    }
    
    return 0;
}
