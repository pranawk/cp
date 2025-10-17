#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>flo(n);
    for(int i=0; i<n; i++)cin>>flo[i];

    sort(flo.begin(),flo.end());
    int res1=flo[n-1]-flo[0];
    int mncn=0,mxcn=0;
    for(int i=0; i<n; i++){
        if(flo[i]==flo[0])mncn++;
        else{break;}
    }
    for(int i=n-1; i>=0; i--){
        if(flo[i]==flo[n-1])mxcn++;
        else{break;}
    }
    long long  r= static_cast<long long>(n-1)*n/2;
    if(res1==0)cout<<'0'<<" "<<r;
    else cout<<res1<<" "<<static_cast<long long>(mncn)*mxcn;

return 0;
}