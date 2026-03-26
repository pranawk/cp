//  C. Spring

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long  a,b,c,m;
        cin>>a>>b>>c>>m;
        long long ansa=0,ansb=0,ansc=0;
        ansa=(m/a*6- m/lcm(a,b)*3- m/lcm(a,c)*3+ m/lcm(a,lcm(b,c))*2);
        ansb=(m/b*6- m/lcm(a,b)*3- m/lcm(b,c)*3+ m/lcm(a,lcm(b,c))*2);
        ansc=(m/c*6- m/lcm(c,b)*3- m/lcm(a,c)*3+ m/lcm(a,lcm(b,c))*2);
        cout<<ansa<<" "<<ansb<<" "<<ansc<<endl;
    }
    return 0;
}