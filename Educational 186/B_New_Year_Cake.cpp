//  B. New Year Cake

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
       int a,b;
       cin>>a>>b;
       int mn=min(a,b);
       int mx=max(a,b);
       int s1=0,s2=0;
       int ii=0;
       while(min(s1,s2)<=mn && max(s1,s2)<=mx){
            if(ii%2==0)s1+=(1<<ii);
            else s2+=(1<<ii);
            ii++;
       }
       cout<<ii-1<<endl;
    }
    return 0;
}
