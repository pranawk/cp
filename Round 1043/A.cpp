#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;
        string order;
        cin>>order;

        for(int i=0; i<order.size(); i++){
            char x= b[i];
            if(order[i]=='D'){
                a= a+x;
            }
            else{
                a=x+a;
            }
        }
        cout<<a<<endl;
    }
}