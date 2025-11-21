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
        if(n%2==1){cout<<0<<endl;continue;}
        cout<<n/4+1<<endl;
    }
    return 0;
}