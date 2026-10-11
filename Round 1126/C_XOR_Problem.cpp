//  C. XOR Problem

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int pp=0;
        for(int i=0; i<=n; i++)pp|=i;
        int ii=pp;
        int aa=1;
        cout<<pp*2+1<<endl;
        for(int i=1; i<= pp*2+1;i++){
            int val=i&-i;
            if(val >n)val=(pp+1)/2;
            cout<< val<<" ";
        }
        cout<<endl;
    }
    return 0;
}