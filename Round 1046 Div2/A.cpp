#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool flag=true;
        if(a>(2*(b+1))|| b>(2*(a+1)))flag=false;
        c-=a;
        d-=b;
        if(c>(2*(d+1))|| d>(2*(c+1)))flag=false;
        cout<<(flag==true? "YES" : "NO")<<endl;
    }
    return 0;
}