//  A. Buttons

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==1)cout<<"First"<<'\n';
            else cout<<"Second"<<'\n';
        }
        else {
            if(a>b)cout<<"First"<<'\n';
            else cout<<"Second"<<'\n';
        }
    }
    return 0;
}