//  A. Koshary

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        if(a%2==1 && b%2==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}