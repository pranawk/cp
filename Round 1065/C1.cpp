#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        vector<int>a1(n);
        vector<int>a2(n);
        for(int i=0; i<n; i++)cin>>a1[i];
        for(int i=0; i<n; i++)cin>>a2[i];
        int i=n-1;
        while(i>=0&& a1[i]==a2[i])i--;
        if(i<0){cout<<"Tie"<<endl;continue;}
        int as=0,bs=0;
        for(int j=0; j<i; j++){as^=a1[j];bs^=a2[j];}
        if(i%2==1){
            if(as!=bs)cout<<"Tie"<<endl;
            else cout<<"Mai"<<endl;
        }
        else{
            if(as!=bs)cout<<"Tie"<<endl;
            else cout<<"Ajisai"<<endl;
        }
    }
    return 0;
}