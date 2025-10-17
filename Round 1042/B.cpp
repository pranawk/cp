#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        if(n==2){
            cout<<-1<<" "<<2<<endl;
        }
        else{
            while(n!=0){
                cout<<-1<<" ";
                n--;
                if(n==0){cout<<endl;break;}
                if(n==1){cout<<2<<endl;break;}
                cout<<3<<" ";
                n--;
                if(n==0){cout<<endl;break;}
            }
        }
        }
return 0;
}