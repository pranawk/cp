#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,a,b;
        cin>>n>>a>>b;
        bool flag=false;
        if(n%2==0){
            if(b>a){if(b%2==0)flag=true;}
            else {
                if(b%2==0 && a%2==0)flag=true;
            }
        }
        else{
            if(b>a){if(b%2==1)flag=true;}
            else {
                if(b%2==1 && a%2==1)flag=true;
            }
        }
        cout<<(flag==true ? "YES" : "NO")<<endl;
    }
return 0;
}