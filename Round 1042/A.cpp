#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        int ans=0;
        int dsum=0;
        for(int i=0; i<n; i++){
            if(a[i]>b[i])dsum+=a[i]-b[i];
        }
        cout<<dsum+1<<endl;
    }
    return 0;
}