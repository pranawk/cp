//  A. Robot Odd Moves

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
        if(y>x+1){cout<<-1<<endl;continue;}
        int ans=x+((x+y)&1);
        cout<<ans<<endl;
    }
    return 0;
}