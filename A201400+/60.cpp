#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool pres=false;
    int a,b;
    int s1=0,s2=0;
    while(n--){
        cin>>a>>b;
        if((a%2==1&&b%2==0)||(a%2==0&&b%2==1))pres=true;
        s1+=a;s2+=b;
        s1%=2;s2%=2;
    }
    if(s1%2==1 && s2%2==1 && pres==true){cout<<1<<endl;}
    else if(s1%2==1 && s2%2==1 && pres==false){cout<<-1<<endl;}
    else if(s1%2==0 && s2%2==1)cout<<-1<<endl;
    else if(s1%2==1 && s2%2==0)cout<<-1<<endl;
    else if(s1%2==0 && s2%2==0)cout<<0<<endl;
    return 0;
}