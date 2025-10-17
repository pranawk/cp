#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];

        int sum=0;
        if(a[0]<=a[1])sum=2*a[0];
        else{sum=a[0]+a[1];}
        cout<<sum<<'\n';

    }
    return 0;
}