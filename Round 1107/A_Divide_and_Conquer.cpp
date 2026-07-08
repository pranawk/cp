//  A. Divide and Conquer

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
        cout<<( (x%y)==0? "YES":"NO" )<<endl;
    }
    return 0;
}