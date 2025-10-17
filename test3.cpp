#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    for(int i=0; i<a+1; ++i){
        string b;
        getline(cin,b);
        string ans;
        for(int j=0; j<b.length();++j){
            ans+=b[j];
            while(b[j]>=33)j++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
