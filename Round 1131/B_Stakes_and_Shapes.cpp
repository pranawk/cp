//  B. Stakes and Shapes

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z>=y && z>=x){
            for(int i=0; i<(x+y+z); i++)cout<<'S';
            cout<<endl;
        }
        else if(y>=z && y>=x){
            for(int i=0; i<(x+y+z); i++)cout<<'R';
            cout<<endl;
        }
        else{
            for(int i=0; i<(x+y+z); i++)cout<<'P';
            cout<<endl;
        }
    }
    return 0;
}