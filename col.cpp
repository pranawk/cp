#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0; i<a; ++i){
        int b;
        cin>>b;
        vector<bool>chk(b,0);
        for(int j=0; j<b; ++j){
            int c;
            cin>>c;
            chk[c-1]=1;
        }
        for(int j=0; j<b; ++j){
            if(chk[j]==0){cout<<j+1<<"\n";break;}
	    if(j==b-1)cout<<-1<<"\n";
        }
    }
    return 0;
}
