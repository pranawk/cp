//  A. Parkour Design

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int x,y;
        cin>>x>>y;
        bool fl=false;
        if(y<0)x-=(4*abs(y));
        else x-=(2*abs(y));
        if(x%3==0 && x>=0)fl=true;
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}