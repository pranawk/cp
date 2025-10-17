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
        vector<int>b=a;
        sort(b.begin(),b.end());
        vector<int>eq;
        for(int i=0; i<n; i++)if(a[i]==b[i])eq.push_back(i);
        if(eq.size()==n){cout<<"NO"<<'\n';continue;}
        cout<<"YES"<<'\n';
        cout<<n-eq.size()<<'\n';
        int j=0;
        for(int i=0; i<n; i++){
            if(j<eq.size() && i==eq[j]){j++;continue;}
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }

return 0;
}