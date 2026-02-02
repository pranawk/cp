//  Josephus Queries

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin >>n>>k;
        vector<bool>taken(n/2, false);
        int pp=1;
        int li=1;
        bool fs=false;
        while((1<<pp)<k){
            k-=((n-li)/(1<<pp));
            if(fs==false){
                for(int i=)
            }
        }
    }
    return 0;
}