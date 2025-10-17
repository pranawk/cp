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
        for(int i=0;i<n; i++)cin>>a[i];
        for(int i=0;i<n; i++)cin>>b[i];
        int count=0;
        vector<pair<int,int>>seq;
        bool asca=false;

        for(int i=0; i<n; i++){
            if(a[i]>n){
                for(int j=0; j<n; j++){
                    if(b[j]<=n){
                        if(i==j){count++; swap(a[i],b[i]); seq.push_back({3,i+1});break;}
                        if(i>j){while(j!=i){swap(b[j],b[j+1]);count++; seq.push_back({2,j+1});j++;}}
                        else {while(j!=i){swap(b[j],b[j-1]);count++; seq.push_back({2,j});j--;} }
                    }
                    }
                }
        }

        for(int j=0; j<n; j++){
        for(int i=0; i<n-j; i++){
            if(i+1<=n-1&& a[i]>a[i+1]){swap(a[i],a[i+1]);count++; seq.push_back({1,i+1});}
        }}
        for(int j=0; j<n; j++){
        for(int i=0; i<n-j; i++){
            if(i+1<=n-1&& b[i]>b[i+1]){swap(b[i],b[i+1]);count++; seq.push_back({2,i+1});}
        }}
        cout<<count<<'\n';
        for(int i=0; i<count; i++){
            cout<<seq[i].first<<" "<<seq[i].second<<'\n';
        }

    }
    return 0;
}

