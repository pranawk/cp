//  C. Game with a Fraction

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long p,q;
        cin>>p>>q;
        if(p>=q){cout<<"Alice"<<endl;continue;}
        long long dif=q-p;
        if((p-2*dif)==(q-3*dif) &&(p-2*dif)>=0 && (q-3*dif)>=0 ){
            cout<<"Bob"<<endl;
        }
        else cout<<"Alice"<<endl;
    }
    return 0;
}