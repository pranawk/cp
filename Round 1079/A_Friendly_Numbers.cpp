//  A. Friendly Numbers

#include<bits/stdc++.h>

using namespace std;
int sm(int a){
    int ss=0;
    while(a>0){
        ss+=a%10;
        a/=10;
    }
    return ss;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int x;
        cin>>x;
        int ans=0;
        for(int i=x+1; i<(x+170); i++){
            int f=sm(i);
            if(i-f==x)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}