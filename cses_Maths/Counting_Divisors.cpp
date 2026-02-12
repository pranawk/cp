//  Counting Divisors

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int x;
        cin>>x;
        int cnt=0;
        int i;
        for( i=1; i*i<x; i++){
            if(x%i==0)cnt+=2;
        }
        if(i*i==x)cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}