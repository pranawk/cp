#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k1;
    cin>>k1;
    queue<int>q1;
    for(int i=0; i<k1; i++){int tmp; cin>>tmp; q1.push(tmp);}
    int k2;
    cin>>k2;
    queue<int>q2;
    for(int i=0; i<k2; i++){int tmp; cin>>tmp; q2.push(tmp);}
    int fac=1;
    while(n>=2){
        fac*=n-1; n--;
    }
    int count=0;
    while(count<=fac){
        int a,b;
        a=q1.front(); b=q2.front(); q1.pop(); q2.pop();
        if(a>b){q1.push(b); q1.push(a);}
        if(a<b){q2.push(a); q2.push(b);}
        count++;
        if(q1.empty()){cout<<count<<" "<<2; break;}
        if(q2.empty()){cout<<count<<" "<<1; break;}
    }
    if(!q1.empty()&& !q2.empty())cout<<-1;
    return 0;
}