#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0; i<a; ++i){
        int b;
        cin>>b;
        vector<int>ans(2*b,0);
        vector<bool>chk(2*b+1,0);
        int c=1;
        while(c<=b){
            int cn=1;
            while(cn<=b){
                cin>>ans[c+cn-1];
                cn++;
            }
            c++;
        }
        for(int j=0; j<2*b;++j){
            chk[ans[j]]=1;
        }
        for(int j=1; j<2*b+1;++j){
            if(chk[j]==0){ans[0]=j;break;}
        }
        for(int j=0; j<2*b; ++j){
            cout<<ans[j]<<" ";
        }
	cout<<"\n";
    }
    return 0;
}
