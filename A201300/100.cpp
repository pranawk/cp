#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n;
    cin>>a>>b>>n;
    int aa=a%b;
    int ii=0;
    n--;
    while(ii<10){
        if((aa*10+ii)%b==0)break;
        ii++;
    }
    if(ii==10){cout<<-1<<endl;return 0;}
    a=a*10+ii;
    string aaa=to_string(a);
    while(n--){
        aaa+='0';
    }
    cout<<aaa<<endl;
    return 0;
}