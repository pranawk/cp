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
        while(n>=3){
            int num=n/3;
            ans+=num;
            n-=num*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}