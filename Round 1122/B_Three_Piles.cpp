//  B. Three Piles

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<max(abs(a+c-b),abs(a-b))<<endl;
    }
    return 0;
}