#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string a,b;
        cin>>a>>b;
        size_t i=0,j=0;
        if(a[0]!=b[0]){cout<<"NO"<<endl; continue;}
        for(i=0; i<a.size(); i++){
            if(a[i]!=b[j]){
                while(j<b.size() && a[i]!=b[j])j++;
            }
            if(a[i]!=b[j]){cout<<"NO"<<endl; break;}
            if(i==a.size()-1){
                bool fl= true;
                while(j<b.size()){
                    if(b[j]!=a[i])fl=false;
                    j++;
                }
                cout<<(fl==true ?"YES": "NO")<<endl;}
            j++;
        }
    }
return 0;
}