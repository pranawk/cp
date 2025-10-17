#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0; i<a; ++i){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int r1=0,l1=0;
        int count=m;
        while(count!=0){
         if(r1<r){ r1++;
         	count--;if(count==0)break;}
         if(l1>l){l1--;
         count--;
        }}
        cout<<l1<<" "<<r1<<endl;
    }
    return 0;
}
