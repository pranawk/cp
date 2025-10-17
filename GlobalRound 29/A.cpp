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
        if(a<b){cout<<2<<endl;}
        else if(b==1){cout<<-1<<endl;}
        else if(a-1<=b){cout<<-1<<endl;}
        else cout<<3<<endl;
    }
    return 0;}