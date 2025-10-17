#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>gpre(n);
        vector<int>gpos(n);
        for(int i=0; i<n; i++)cin>>gpre[i];
        for(int i=0; i<n; i++)cin>>gpos[i];

        bool flag=true;
        for(int i=0; i<n-1; i++ ){
            if(gpre[0]!=gpos[n-1]){flag=false;break;}
            if(gpre[i]%gpre[i+1]==0)continue;
            if(gpre[i]%gpre[i+1]!=0){flag=false;break;}
        }
        if(flag==true){
            for(int i=n-1; i>=1; i-- ){
                if(gpos[i]%gpos[i+1]==0)continue;
                if(gpos[i]%gpos[i-1]!=0){flag=false;break;}
        }}
        if(flag==true){
            cout<<"YES"<<'\n';}
        else{cout<<"NO"<<'\n';}
    }
    return 0;
}
