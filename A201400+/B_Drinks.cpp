//  B. Drinks

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    double qn=0;
    double aa=tt;
    while(tt--){
        int a;
        cin>>a;
        qn+=a;
    }
    cout<<setprecision(5)<<qn/aa<<endl;
    return 0;
}